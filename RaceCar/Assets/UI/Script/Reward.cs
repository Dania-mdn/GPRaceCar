using UnityEngine;
using GoogleMobileAds.Api;
using System;
using UnityEngine.UI;

public class Reward : MonoBehaviour
{
    public Toggle Musick;
    public MoneyHandler MoneyHandler;

    private InterstitialAd _interstitialAd;
    private RewardedAd _rewardedAd;
    private BannerView _bannerView;

    //private string InterstitialUntitID = "ca-app-pub-3940256099942544/1033173712";
    private string InterstitialUntitID = "ca-app-pub-9999092264265801/4956975253";
    //private string RewardlUntitID = "ca-app-pub-3940256099942544/5224354917";
    private string RewardlUntitID = "cca-app-pub-9999092264265801/3653941376";
    //private string BanerID = "ca-app-pub-3940256099942544/6300978111";
    private string BanerID = "ca-app-pub-9999092264265801/9680541096";

    private void Awake()
    {
        MobileAds.Initialize(initStatus => { });
    }
    private void OnEnable()
    {
        Load();
        ReqestBanner();

        EventManager.UpgradeAuto += Upgrade;
    }
    private void OnDisable()
    {
        EventManager.UpgradeAuto -= Upgrade;
    }
    private void Load()
    {
        AdRequest adRequest = new AdRequest();

        InterstitialAd.Load(InterstitialUntitID, adRequest, (InterstitialAd aad, LoadAdError error) =>
        {
            // If the operation failed with a reason.
            if (error != null)
            {
                Debug.LogError("Interstitial ad failed to load an ad with error : " + error);
                return;
            }
            // If the operation failed for unknown reasons.
            // This is an unexpected error, please report this bug if it happens.
            if (aad == null)
            {
                Debug.LogError("Unexpected error: Interstitial load event fired with null ad and null error.");
                return;
            }

            // The operation completed successfully.
            Debug.Log("Interstitial ad loaded with response : " + aad.GetResponseInfo());
            _interstitialAd = aad;

            // Register to ad events to extend functionality.
            RegisterEventHandlers(aad);

        });

        AdRequest adRequest0 = new AdRequest();

        RewardedAd.Load(RewardlUntitID, adRequest0, (RewardedAd ad, LoadAdError error) =>
        {
            // If the operation failed with a reason.
            if (error != null)
            {
                Debug.LogError("Rewarded ad failed to load an ad with error : " + error);
                return;
            }
            // If the operation failed for unknown reasons.
            // This is an unexpected error, please report this bug if it happens.
            if (ad == null)
            {
                Debug.LogError("Unexpected error: Rewarded load event fired with null ad and null error.");
                return;
            }

            // The operation completed successfully.
            Debug.Log("Rewarded ad loaded with response : " + ad.GetResponseInfo());
            _rewardedAd = ad;

            // Register to ad events to extend functionality.
            RegisterEventHandlers0(ad);

        });
    }
    private void Start()
    {
        if (PlayerPrefs.HasKey("rewardMoney"))
        {
            ShowAdReward();
            PlayerPrefs.DeleteKey("rewardMoney");
        }
    }
    private void Upgrade(int i, int j)
    {
        if (GetRandomChance(0.2f))
        {
            ShowAd();
        }
    }
    bool GetRandomChance(float probability)
    {
        // Генерируем случайное число от 0 до 1
        float randomValue = UnityEngine.Random.value;

        // Если случайное число меньше вероятности,
        // считаем, что событие произошло
        if (randomValue < probability)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public void ShowAd()
    {
        if (_interstitialAd != null && _interstitialAd.CanShowAd())
        {
            _interstitialAd.Show();
            EventManager.DoMuteAudio();
            PlayerPrefs.SetInt("MuteAudio", 1);
        }
        else
        {
            Debug.LogError("Interstitial ad is not ready yet.");
        }

        Load();
    }
    public void ShowAdReward()
    {
        if (_rewardedAd != null && _rewardedAd.CanShowAd())
        {
            _rewardedAd.Show((GoogleMobileAds.Api.Reward reward) =>
            {
                Debug.Log(String.Format("Rewarded ad granted a reward: {0} {1}",
                                        reward.Amount,
                                        reward.Type));
            });
            EventManager.DoMuteAudio();
            PlayerPrefs.SetInt("MuteAudio", 1);
        }
        else
        {
            Debug.LogError("Rewarded ad is not ready yet.");
        }

        Load();
    }
    private void RegisterEventHandlers0(RewardedAd ad)
    {
        // Raised when the ad is estimated to have earned money.
        ad.OnAdPaid += (AdValue adValue) =>
        {
            Debug.Log(String.Format("Rewarded ad paid {0} {1}.",
                adValue.Value,
                adValue.CurrencyCode));
        };
        // Raised when an impression is recorded for an ad.
        ad.OnAdImpressionRecorded += () =>
        {
            Debug.Log("Rewarded ad recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        ad.OnAdClicked += () =>
        {
            Debug.Log("Rewarded ad was clicked.");
        };
        // Raised when the ad opened full screen content.
        ad.OnAdFullScreenContentOpened += () =>
        {
            Debug.Log("Rewarded ad full screen content opened.");
        };
        // Raised when the ad closed full screen content.
        ad.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("Rewarded ad full screen content closed.");

            EventManager.DoPlayAudio();
            PlayerPrefs.DeleteKey("MuteAudio");
        };
        // Raised when the ad failed to open full screen content.
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Rewarded ad failed to open full screen content with error : "
                + error);
        };
    }
    private void RegisterEventHandlers(InterstitialAd ad)
    {
        // Raised when the ad is estimated to have earned money.
        ad.OnAdPaid += (AdValue adValue) =>
        {
            Debug.Log(String.Format("Rewarded ad paid {0} {1}.",
                adValue.Value,
                adValue.CurrencyCode));
        };
        // Raised when an impression is recorded for an ad.
        ad.OnAdImpressionRecorded += () =>
        {
            Debug.Log("Rewarded ad recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        ad.OnAdClicked += () =>
        {
            Debug.Log("Rewarded ad was clicked.");
        };
        // Raised when the ad opened full screen content.
        ad.OnAdFullScreenContentOpened += () =>
        {
            Debug.Log("Rewarded ad full screen content opened.");
        };
        // Raised when the ad closed full screen content.
        ad.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("Rewarded ad full screen content closed.");

            if (Musick.isOn == false)
            {
                EventManager.DoPlayAudio();
                PlayerPrefs.DeleteKey("MuteAudio");
            }
        };
        // Raised when the ad failed to open full screen content.
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Rewarded ad failed to open full screen content with error : "
                + error);
        };
    }
    private void ReqestBanner()
    {
        this._bannerView = new BannerView(BanerID, AdSize.Banner, AdPosition.Bottom);
        AdRequest adRequest = new AdRequest();
        this._bannerView.LoadAd(adRequest);
        _bannerView.Show();
    }
}
