
#pragma once
#include <string>
#include <unordered_map>


namespace ResKey {
  
  enum {
    //         _________         //
    // ------- |Texture| ------- //
    //         ¯¯¯¯¯¯¯¯¯         //
    
    // Title
    TBack,
    TFeatherBook,
    TLogo,
    TTapToStartEng,
    TTrance,
    TTa, TMa, TKo, TRo,
    TSphereBlue,
    TSphereGreen,
    TSphereRed,
    
    // Cinderella
    CCinderella1,
    CCinderella2,
    CCinderella3,
    CCinderellaDown,
    CCinderellaCry,
    CDress1,
    CDress2,
    CCinderellaDance,
    COut1,
    COut2,
    COut3,
    COut4,
    
    CShoes,
    
    // Witch
    CWitch1,
    CWitch2,
    
    // King
    CKing1,
    CKing2,
    
    // Sister
    CSister1,
    CSister2,
    CSister3,
    
    // Orchestra
    COrchestra1,
    COrchestra2,
    
    // Sphere
    CSphereBlue,
    CSphereGreen,
    CSphereRed,
    
    // Hose
    CBookOpen,
    CBookPile,
    CBookShelf,
    CBookSide,
    CChandelier,
    CChandelierHit,
    CHandRail,
    CPiano,
    
    // Forest
    CApple,
    CHungryBear,
    CStatisfiedBrear,
    
    // Town
    CBridge,
    CGrayCube,
    CHorse1,
    CHorse2,
    CHorse3,
    CHorse4,
    CHorse5,
    CHorse6,
    CHydrant,
    CLampPost,
    CPlate,
    CPlateFall,
    CPumpkin1,
    CPumpkin2,
    CRiver,
    CShop,
    CWindow1,
    CWindow2,
    CWindow3,
    CWindowHit1,
    CWindowHit2,
    CWindowHit3,
    CWindowOpen,
    CWoodenBox,
    
    // ForestGarden
    CGate,
    CGateBack,
    CGateSide,
    
    // Dance
    CDanceChandelier,
    
    // background
    CHouse1,
    CHouse2,
    CHouse3,
    CForest1,
    CForest2,
    CForest3,
    CForest4,
    CTown1,
    CTown2,
    CTown3,
    CForestGarden1,
    CForestGarden2,
    CForestGarden3,
    CForestGarden4,
    CDance,
    
    // Camera
    CamHole,
    
    // LoadScene
    NowLoad,
    
    // Counter
    Counter1,
    Counter2,
    Counter3,
    
    // End
    CEnd,
    
    //          _______          //
    // -------- |Audio| -------- //
    //          ¯¯¯¯¯¯¯          //
    TMenu,
    TGameStartSE,
    
    CHitSE,
    CGameOverSE,
    CTown,
    CCastle,
    CHouse,
    CHousePiano,
    CBookDrop,
    CBookHit,
    CWindowClose,
    CPlateFallSE,
    
    CForest,
    COrchestra,
  };
  
  static std::string getPath(int key) {
    std::string tex_ext = ".png";
    std::string snd_ext = ".m4a";
    
    std::unordered_map<int, std::string> list = {
      
      //         _________         //
      // ------- |Texture| ------- //
      //         ¯¯¯¯¯¯¯¯¯         //
      
      // Title
      { TBack,             "background/title/TitleBack" + tex_ext },
      { TFeatherBook,      "background/title/FeatherBookResize" + tex_ext },
      { TLogo,             "background/title/Logo" + tex_ext },
      { TTapToStartEng,    "background/title/TapToStartEng" + tex_ext },
      { TTrance,           "background/title/Trace" + tex_ext },
      { TTa,               "background/title/KanaLetterTa" + tex_ext },
      { TMa,               "background/title/KanaLetterMa" + tex_ext },
      { TKo,               "background/title/KanaLetterKo" + tex_ext },
      { TRo,               "background/title/KanaLetterRo" + tex_ext },
      { TSphereBlue,       "background/title/SphereBlue" + tex_ext },
      { TSphereGreen,      "background/title/SphereGreen" + tex_ext },
      { TSphereRed,        "background/title/SphereRed" + tex_ext },
      
      // Cinderella
      { CCinderella1,      "character/cinderella/1" + tex_ext },
      { CCinderella2,      "character/cinderella/2" + tex_ext },
      { CCinderella3,      "character/cinderella/3" + tex_ext },
      { CCinderellaDown,   "character/cinderella/4" + tex_ext },
      { CCinderellaCry,    "character/cinderella/5" + tex_ext },
      { CCinderellaDance,  "character/cinderella/6" + tex_ext },
      { CDress1,           "character/cinderella/7" + tex_ext },
      { CDress2,           "character/cinderella/8" + tex_ext },
      { COut1,             "character/cinderella/9" + tex_ext },
      { COut2,             "character/cinderella/10" + tex_ext },
      { COut3,             "character/cinderella/11" + tex_ext },
      { COut4,             "character/cinderella/12" + tex_ext },
      
      // Shoes
      { CShoes,            "character/cinderella/99" + tex_ext },
      
      // Witch
      { CWitch1,           "character/witch/1" + tex_ext },
      { CWitch2,           "character/witch/2" + tex_ext },
      
      // King
      { CKing1,            "character/king/1" + tex_ext },
      { CKing2,            "character/king/2" + tex_ext },
      
      // Sister
      { CSister1,          "character/sister/1" + tex_ext },
      { CSister2,          "character/sister/2" + tex_ext },
      { CSister3,          "character/sister/3" + tex_ext },
      
      // Orchestra
      { COrchestra1,       "character/orchestra/1" + tex_ext },
      { COrchestra2,       "character/orchestra/2" + tex_ext },
      
      // Sphere
      { CSphereBlue,       "background/title/SphereBlue" + tex_ext },
      { CSphereGreen,      "background/title/SphereGreen" + tex_ext },
      { CSphereRed,        "background/title/SphereRed" + tex_ext },
      
      // House
      { CBookOpen,         "object/house/BookOpen" + tex_ext },
      { CBookPile,         "object/house/BookPile" + tex_ext },
      { CBookShelf,        "object/house/BookShelf" + tex_ext },
      { CBookSide,         "object/house/BookSide" + tex_ext },
      { CChandelier,       "object/house/Chandelier" + tex_ext },
      { CChandelierHit,    "object/house/ChandelierHit" + tex_ext },
      { CHandRail,         "object/house/HandRail" + tex_ext },
      { CPiano,            "object/house/Piano" + tex_ext },
      
      // Forest
      { CApple,            "object/forest/Apple" + tex_ext },
      { CHungryBear,       "object/forest/HungryBear" + tex_ext },
      { CStatisfiedBrear,  "object/forest/SatisfiedBear" + tex_ext },
      
      // Town
      { CBridge,          "object/town/Bridge" + tex_ext },
      { CGrayCube,        "object/town/GrayCube" + tex_ext },
      { CHorse1,          "object/town/Horse1" + tex_ext },
      { CHorse2,          "object/town/Horse2" + tex_ext },
      { CHorse3,          "object/town/Horse3" + tex_ext },
      { CHorse4,          "object/town/Horse4" + tex_ext },
      { CHorse5,          "object/town/Horse5" + tex_ext },
      { CHorse6,          "object/town/Horse6" + tex_ext },
      { CHydrant,         "object/town/Hydrant" + tex_ext },
      { CLampPost,        "object/town/LampPost" + tex_ext },
      { CPlate,           "object/town/Plate" + tex_ext },
      { CPlateFall,       "object/town/PlateFall" + tex_ext },
      { CPumpkin1,        "object/town/Pumpkin1" + tex_ext },
      { CPumpkin2,        "object/town/Pumpkin2" + tex_ext },
      { CRiver,           "object/town/River" + tex_ext },
      { CShop,            "object/town/Shop" + tex_ext },
      { CWindow1,         "object/town/Window1" + tex_ext },
      { CWindow2,         "object/town/Window2" + tex_ext },
      { CWindow3,         "object/town/Window3" + tex_ext },
      { CWindowHit1,      "object/town/WindowHit1" + tex_ext },
      { CWindowHit2,      "object/town/WindowHit2" + tex_ext },
      { CWindowHit3,      "object/town/WindowHit3" + tex_ext },
      { CWindowOpen,      "object/town/WindowOpen" + tex_ext },
      { CWoodenBox,       "object/town/WoodenBox" + tex_ext },
      
      // ForestGarden
      { CGate,            "object/forestgarden/Gate" + tex_ext },
      { CGateBack,        "object/forestgarden/GateBack" + tex_ext },
      { CGateSide,        "object/forestgarden/GateSide" + tex_ext },
      
      // Dance
      { CDanceChandelier, "object/dance/1" + tex_ext },
      
      // Background
      { CHouse1,          "background/house/1" + tex_ext },
      { CHouse2,          "background/house/2" + tex_ext },
      { CHouse3,          "background/house/3" + tex_ext },
      { CForest1,         "background/forest/1" + tex_ext },
      { CForest2,         "background/forest/2" + tex_ext },
      { CForest3,         "background/forest/3" + tex_ext },
      { CForest4,         "background/forest/4" + tex_ext },
      { CTown1,           "background/town/1" + tex_ext },
      { CTown2,           "background/town/2" + tex_ext },
      { CTown3,           "background/town/3" + tex_ext },
      { CForestGarden1,   "background/forestgarden/1" + tex_ext },
      { CForestGarden2,   "background/forestgarden/2" + tex_ext },
      { CForestGarden3,   "background/forestgarden/3" + tex_ext },
      { CForestGarden4,   "background/forestgarden/4" + tex_ext },
      { CDance,           "background/dance/1" + tex_ext },
      
      // Camera
      { CamHole,          "camera/hole" + tex_ext },
      
      // LoadScene
      { NowLoad,        "loadscene/nowload" + tex_ext },
      
      { Counter1,       "counter/counter1" + tex_ext },
      { Counter2,       "counter/counter2" + tex_ext },
      { Counter3,       "counter/counter3" + tex_ext },
      
      { CEnd,           "background/end/1" + tex_ext },
      
      //          _______          //
      // -------- |Audio| -------- //
      //          ¯¯¯¯¯¯¯          //
      
      { TMenu,         "sound/bgm/Menu" + snd_ext },
      { TGameStartSE,  "sound/se/GameStart" + snd_ext },
      
      { CHitSE,       "sound/se/Hit" + snd_ext },
      { CGameOverSE,  "sound/se/GameOver" + snd_ext },
      { CTown,        "sound/bgm/cinderella/Town" + snd_ext },
      { CCastle,      "sound/bgm/cinderella/Castle" + snd_ext },
      { CHouse,       "sound/bgm/cinderella/House" + snd_ext },
      { CHousePiano,  "sound/bgm/cinderella/HousePiano" + snd_ext },
      { CBookDrop,    "sound/se/cinderella/BookDrop" + snd_ext },
      { CBookHit,     "sound/se/cinderella/BookHit" + snd_ext },
      { CWindowClose, "sound/se/cinderella/WindowClose" + snd_ext },
      { CPlateFallSE, "sound/se/cinderella/PlateFallSE" + snd_ext },
      
      { CForest,      "sound/bgm/cinderella/Forest" + snd_ext },
      { COrchestra,   "sound/bgm/cinderella/Orchestra" + snd_ext },
    };
    
    return list[key];
  }
  
}
