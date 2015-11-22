

// iPad画面サイズ
// iPhone画面サイズ
// 注意！横画面にしてもxとyの座標は変わらない可能性あり
// どうしてもうまくいかない場合はxとyを逆にしてみること
// デバッグ用cpp リリースのときは無駄な文を消すこと iostream、usingなど

#include "Title.hpp"
#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include <math.h>
#include <iostream> // Debug

using namespace std; // Debug

Title::Title()
{
  
  // 背景
  mTitleBack = (loadImage(cinder::app::loadAsset("background/title/TitleBack.jpg")));
  
  // 本とペン 「描画する画像が大きすぎてちっちゃく描画したときにジャギが発生していた為、元画像を 912 × 768 にリサイズ」
  mFeatherBook = (loadImage(cinder::app::loadAsset("background/title/FeatherBook.png")));
  mFeatherBookRect = ci::Rectf(150, 15, 430, 250); // size = 280, 235
  
  // スカーフみたいなやつ
  mTrace = (loadImage(cinder::app::loadAsset("background/title/Trace.png")));
  mTraceRect = ci::Rectf( 120, 50, 340, 245); // size = 220, 195
  
  
  // 文字「た」
  mKanaLetterTa = (loadImage(cinder::app::loadAsset("background/title/KanaLetterTa.png")));
  mKanaLetterTaRect = ci::Rectf( 130, 80, 220, 170); // size = 90, 90
  // 文字「ま」
  mKanaLetterMa = (loadImage(cinder::app::loadAsset("background/title/KanaLetterMa.png")));
  mKanaLetterMaRect = ci::Rectf( 210, 15, 300, 105); // size = 90, 90
  // 文字「こ」
  mKanaLetterKo = (loadImage(cinder::app::loadAsset("background/title/KanaLetterKo.png")));
  mKanaLetterKoRect = ci::Rectf( 260, 100, 350, 190); // size = 90, 90
  // 文字「ろ」
  mKanaLetterRo = (loadImage(cinder::app::loadAsset("background/title/KanaLetterRo.png")));
  mKanaLetterRoRect = ci::Rectf( 350, 40, 440, 130); // size = 90, 90

  
  // ボール青
  mSphereBlue = (loadImage(cinder::app::loadAsset("background/title/SphereBlue.png")));
  mSphereBlueRect = ci::Rectf( 320, 25, 360, 65); // size = 40, 40
  // ボール緑
  mSphereGreen = (loadImage(cinder::app::loadAsset("background/title/SphereGreen.png")));
  mSphereGreenRect = ci::Rectf( 130, 165, 180, 215); // size = 50, 50
  // ボール赤
  mSphereRed = (loadImage(cinder::app::loadAsset("background/title/SphereRed.png")));
  mSphereRedRect = ci::Rectf( 350, 173, 420, 243); // size = 70, 70
  
  
  // 文字「TAMACORO」
  mLogo = (loadImage(cinder::app::loadAsset("background/title/Logo.png")));
  mLogoRect = ci::Rectf( 190, 200, 280, 220); // size = 90, 20
  // 文字「タッチしてスタート！」
  mTapToStartEng = (loadImage(cinder::app::loadAsset("background/title/TapToStartEng.png")));
  mTapToStartEngRect = ci::Rectf( 180, 265, 400, 295); // size = 220, 30
  
}

void Title::update()
{
    
  mSphereMotion++;
    
    
  mKanaLetterTaRect = ci::Rectf( 130, 80 + sin(M_PI * 2 / 240 * mSphereMotion) * 2,
                                 220, 170 + sin(M_PI * 2 / 240 * mSphereMotion) * 2);
  
  mKanaLetterMaRect = ci::Rectf( 210, 15 + sin(M_PI * 2 / 240 * mSphereMotion) * 4,
                                  300, 105 + sin(M_PI * 2 / 240 * mSphereMotion) * 4);
  
  mKanaLetterKoRect = ci::Rectf( 260, 100 + sin(M_PI * 2 / 240 * mSphereMotion) * -2,
                                  350, 190 + sin(M_PI * 2 / 240 * mSphereMotion) * -2);
  
  mKanaLetterRoRect = ci::Rectf( 350, 40 + sin(M_PI * 2 / 240 * mSphereMotion) * -3,
                                  440, 130 + sin(M_PI * 2 / 240 * mSphereMotion) * -3);
  
  mSphereBlueRect = ci::Rectf( 320, 25 + sin(M_PI * 2 / 240 * mSphereMotion) * 10,
                                360, 65 + sin(M_PI * 2 / 240 * mSphereMotion) * 10);
  
  mSphereGreenRect = ci::Rectf( 130, 165 + sin(M_PI * 2 / 240 * mSphereMotion) * -3,
                                 180, 215 + sin(M_PI * 2 / 240 * mSphereMotion) * -3);
  
  mSphereRedRect = ci::Rectf( 350, 173 + sin(M_PI * 2 / 240 * mSphereMotion) * 7,
                               420, 243 + sin(M_PI * 2 / 240 * mSphereMotion) * 7);
}

void Title::draw()
{
    
  Title::update();
    
  ci::gl::pushModelView();
  
  ci::gl::clear();
  
  cinder::gl::enableAlphaBlending(true); // αチャンネル有効
  
  ci::gl::draw( mTitleBack, ci::app::getWindowBounds()); // 背景
  ci::gl::draw( mFeatherBook, mFeatherBookRect); // 本とペン
  ci::gl::draw( mTrace, mTraceRect); // スカーフみたいなやつ
  
  ci::gl::draw( mKanaLetterTa, mKanaLetterTaRect); // た
  ci::gl::draw( mKanaLetterMa, mKanaLetterMaRect); // ま
  ci::gl::draw( mKanaLetterKo, mKanaLetterKoRect); // こ
  ci::gl::draw( mKanaLetterRo, mKanaLetterRoRect); // ろ
  
  ci::gl::draw( mSphereBlue, mSphereBlueRect); // ボール青
  ci::gl::draw( mSphereGreen, mSphereGreenRect); // ボール緑
  ci::gl::draw( mSphereRed, mSphereRedRect); // ボール赤
  
  ci::gl::draw( mLogo, mLogoRect); // TAMACORO
  ci::gl::draw( mTapToStartEng, mTapToStartEngRect); // タッチしてスタート！
  
  cinder::gl::enableAlphaBlending(false); // αチャンネル無効
    
  ci::gl::popModelView();
}
