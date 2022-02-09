static void BuldozerMain() {
    // name of this file depends on the user-name (its buldozer.c when buldozer is launched with -name=Buldozer)
    // same is applied to the name of this method (<username>Main)
    // press F10 (default shortcut) to run this script in Buldozer (only available when connected to Terrain Builder)
     
    /*
    // Useful calls
    // sets terrain and object view distance and saves the value into the profile
    GetGame().GetWorld().SetPreferredViewDistance(1500);
    // sets terrain view distance for current bz session / mission
    GetGame().GetWorld().SetViewDistance(2200);
    // sets an object view distance for current bz session / mission
    GetGame().GetWorld().SetObjectViewDistance(2200);
    // changes overall brightness of the scene
    //   0 dark, 0< < 1 = light, 1 > darker
    GetGame().GetWorld().SetAperture(0.55);
    // enables/disables water in buldozer
    bool waterVisible = true;
    GetGame().GetWorld().SetBuldozerWaterEnabled(waterVisible);
    // weather setup - sets clear no rain weather with next change happening in 8hrs
    Weather wo = GetGame().GetWeather();
    wo.GetRain().Set(0, 28800, 0);
    wo.GetFog().Set(0, 28800, 0);
    wo.GetOvercast().Set(0, 28800, 0);
    // mission date and time setup (y,m,d,hr,mn)
    GetGame().GetWorld().SetDate(1985, 6, 1, 12, 0);
    */
     
    // example usage
    GetGame().GetWorld().SetViewDistance(20600);
    GetGame().GetWorld().SetObjectViewDistance(1600);
    GetGame().GetWorld().SetAperture(0.55);
    Weather wo = GetGame().GetWeather();
    wo.GetRain().Set(0, 0, 28800);
    wo.GetFog().Set(0, 0, 28800);
    wo.GetOvercast().Set(0, 0, 28800);
    wo.SetWindMaximumSpeed(1);
    wo.SetWindMaximumSpeed(1);
    wo.SetWindFunctionParams(0.1, 0.1, 25);
    GetGame().GetWorld().SetDate(1985, 6, 20, 16, 0);
}
