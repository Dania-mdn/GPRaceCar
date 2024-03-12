using UnityEngine;
using GoogleMobileAds.Api;

public class Reward : MonoBehaviour
{
    public MoneyHandler MoneyHandler;
    private int i;

    private InterstitialAd interstitialAd;
    //private RewardedAd rewardedAd;
    //private BannerView _bannerView;

    //private string interstitialUntitID = "ca-app-pub-9999092264265801/4956975253";
    //private string RewardlUntitID = "ca-app-pub-3940256099942544/5224354917";
    //private string Baner = "ca-app-pub-3940256099942544/6300978111";

    //private void Awake()
    //{
    //    MobileAds.Initialize(initStatus => { });
    //}
    //private void OnEnable()
    //{
        //interstitialAd = new InterstitialAd(interstitialUntitID);
    //    AdRequest adRequest = new AdRequest.Builder().Build();
    //    interstitialAd.LoadAd(adRequest);

    //    rewardedAd = new RewardedAd(RewardlUntitID);
    //    AdRequest adRequest0 = new AdRequest.Builder().Build();
    //    rewardedAd.LoadAd(adRequest0);
    //    rewardedAd.OnUserEarnedReward += HandlUserEarnedReward;

    //    ReqestBanner();
    //}

    //private void HandlUserEarnedReward(object sender, GoogleMobileAds.Api.Reward e)
    //{
    //    if(i == 1)
    //    {
    //        MoneyHandler.SetRewardAutoTap();
    //    }
    //    else if(i == 2)
    //    {
    //        MoneyHandler.SetRewardIncomX2();
    //    }
    //    AdRequest adRequest0 = new AdRequest.Builder().Build();
    //    rewardedAd.LoadAd(adRequest0);
    //}

    //private void Start()
    //{
    //    ShowAd();
    //}
    //public void ShowAd()
    //{
    //    if (interstitialAd.IsLoaded())
    //        interstitialAd.Show();
    //}
    //public void ShowAdRewardAutotap()
    //{
    //    if (rewardedAd.IsLoaded())
    //    {
    //        rewardedAd.Show();
    //        i = 1;
    //    }
    //    AdRequest adRequest0 = new AdRequest.Builder().Build();
    //    rewardedAd.LoadAd(adRequest0);
    //}
    //public void ShowAdRewardInkome()
    //{
    //    if (rewardedAd.IsLoaded())
    //    {
    //        rewardedAd.Show();
    //        i = 2;
    //    }
    //    AdRequest adRequest0 = new AdRequest.Builder().Build();
    //    rewardedAd.LoadAd(adRequest0);
    //}
    //private void ReqestBanner()
    //{
    //    this._bannerView = new BannerView(Baner, AdSize.Banner, AdPosition.Bottom);
    //    AdRequest adRequest = new AdRequest.Builder().Build();
    //    this._bannerView.LoadAd(adRequest);
    //    _bannerView.Show();
    //}
}
