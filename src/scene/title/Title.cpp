
#include "Title.hpp"
<<<<<<< HEAD
=======
#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include <math.h>
#include "../../device/Device.hpp"
#include "../../scene/SceneManager.hpp"
#include "../../window/Window.hpp"

Title::Title()
{
  
  // デバイスのウィンドサイズを取得し、代入
  mDeviceWindowHeight = dowa::getWindowHeight();
  mDeviceWindowWidth = dowa::getWindowWidth();
  
  // 画像読み込み
  dowa::ResourceManager::texture().insert("background/title/TitleBack.jpg", TextureKey::TitleBack);
  dowa::ResourceManager::texture().insert("background/title/FeatherBookResize.png", TextureKey::FeatherBook);
  dowa::ResourceManager::texture().insert("background/title/Logo.png", TextureKey::Logo);
  dowa::ResourceManager::texture().insert("background/title/TapToStartEng.png", TextureKey::TapToStartEng);
  dowa::ResourceManager::texture().insert("background/title/Trace.png", TextureKey::Trace);
  dowa::ResourceManager::texture().insert("background/title/KanaLetterTa.png", TextureKey::LetterTa);
  dowa::ResourceManager::texture().insert("background/title/KanaLetterMa.png", TextureKey::LetterMa);
  dowa::ResourceManager::texture().insert("background/title/KanaLetterKo.png", TextureKey::LetterKo);
  dowa::ResourceManager::texture().insert("background/title/KanaLetterRo.png", TextureKey::LetterRo);
  dowa::ResourceManager::texture().insert("background/title/SphereBlue.png", TextureKey::SphereBlue);
  dowa::ResourceManager::texture().insert("background/title/SphereGreen.png", TextureKey::SphereGreen);
  dowa::ResourceManager::texture().insert("background/title/SphereRed.png", TextureKey::SphereRed);
  
  
  // 画像座標設定
  mFeatherBookRect = ci::Rectf(mDeviceWindowWidth / 5,  mDeviceWindowHeight / 20,
                               mDeviceWindowWidth / 1.2, mDeviceWindowHeight / 1.28); // 本とペン
  
  mTraceRect = ci::Rectf(mDeviceWindowWidth / 4.7, mDeviceWindowHeight / 6.5,
                         mDeviceWindowWidth / 1.5, mDeviceWindowHeight / 1.3); // 羽
  
  mLogoRect = ci::Rectf(mDeviceWindowWidth / 3.5, mDeviceWindowHeight / 1.6,
                        mDeviceWindowWidth / 2, mDeviceWindowHeight / 1.45); // TAMACORO
  
  mTapToStartEngRect = ci::Rectf(mDeviceWindowWidth / 3.3, mDeviceWindowHeight / 1.22,
                                 mDeviceWindowWidth / 1.35, mDeviceWindowHeight / 1.12); // タッチしてスタート！
}

void Title::update()
{
  
  if(dowa::Device::isTouchBegan()) // タッチされたらシーン切り替え
  {
    SceneManager::create(SceneType::Result); // とりあえずリザルトに切り替え
  }

  mSphereMotion++;


  mKanaLetterTaRect = ci::Rectf(mDeviceWindowWidth / 4.5,
                                mDeviceWindowHeight / 4 + sin(M_PI * 2 / 240 * mSphereMotion) * 2,
                                mDeviceWindowWidth / 2.5,
                                mDeviceWindowHeight / 2 + sin(M_PI * 2 / 240 * mSphereMotion) * 2); // た
  
  mKanaLetterMaRect = ci::Rectf(mDeviceWindowWidth / 2.7,
                                mDeviceWindowHeight / 10 + sin(M_PI * 2 / 240 * mSphereMotion) * -2,
                                mDeviceWindowWidth / 1.77,
                                mDeviceWindowHeight / 3 + sin(M_PI * 2 / 240 * mSphereMotion) * -2); // ま

  mKanaLetterKoRect = ci::Rectf(mDeviceWindowWidth / 2.1,
                                mDeviceWindowHeight / 3.1 + sin(M_PI * 2 / 240 * mSphereMotion) * 3,
                                mDeviceWindowWidth / 1.5,
                                mDeviceWindowHeight / 1.8 + sin(M_PI * 2 / 240 * mSphereMotion) * 3); // こ

  mKanaLetterRoRect = ci::Rectf(mDeviceWindowWidth / 1.6,
                                mDeviceWindowHeight / 6 + sin(M_PI * 2 / 240 * mSphereMotion) * 1.5,
                                mDeviceWindowWidth / 1.22,
                                mDeviceWindowHeight / 2.5 + sin(M_PI * 2 / 240 * mSphereMotion) * 1.5); // ろ
  
  mSphereBlueRect = ci::Rectf(mDeviceWindowWidth / 1.8,
                              mDeviceWindowHeight / 7.9 + sin(M_PI * 2 / 240 * mSphereMotion) * 1.5,
                              mDeviceWindowWidth / 1.55,
                              mDeviceWindowHeight / 4.1 + sin(M_PI * 2 / 240 * mSphereMotion) * 1.5); // 青
  
  mSphereGreenRect = ci::Rectf(mDeviceWindowWidth / 5.8,
                               mDeviceWindowHeight / 2.0 + sin(M_PI * 2 / 240 * mSphereMotion) * -1.5,
                               mDeviceWindowWidth / 3.28,
                               mDeviceWindowHeight / 1.5 + sin(M_PI * 2 / 240 * mSphereMotion) * -1.5); // 緑
  
  mSphereRedRect = ci::Rectf(mDeviceWindowWidth / 1.6,
                             mDeviceWindowHeight / 1.8 + sin(M_PI * 2 / 240 * mSphereMotion) * -2.5,
                             mDeviceWindowWidth / 1.27,
                             mDeviceWindowHeight  / 1.3 + sin(M_PI * 2 / 240 * mSphereMotion) * -2.5); // 赤
  
}

void Title::draw()
{

  ci::gl::pushModelView();
>>>>>>> 18d3a5aa9e32eb0d1ce1ed2543fed03561d40a18


Title::Title() {}


void Title::update() {}

void Title::draw() {}