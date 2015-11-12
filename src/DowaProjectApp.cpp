
#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

#include "device/Device.hpp"

#include "scene/Scene.hpp"
#include "scene/SceneManager.hpp"

using namespace ci;
using namespace ci::app;

class DowaProjectApp : public AppNative {
private:
  
public:
  void setup();
  void mouseDown(MouseEvent event);
  void touchesBegan(TouchEvent event);
  void update();
  void draw();
};

void DowaProjectApp::setup() {
  Device::enable();
  SceneManager::create(SceneType::Test);
}

void DowaProjectApp::mouseDown(MouseEvent event) {
  Device::setTouchState(true, event.getPos());
}

void DowaProjectApp::touchesBegan(TouchEvent event) {
  Vec2f pos;
  for (auto& touch : event.getTouches()) {
    pos = touch.getPos();
    break;
  }
  Device::setTouchState(true, pos);
}

void DowaProjectApp::update() {
  SceneManager::update();
}

void DowaProjectApp::draw() {
	gl::clear(Color(0.4f, 0.4f, 0.4f));
  SceneManager::draw();
  Device::setTouchState(false, Vec2f::zero());
}

CINDER_APP_NATIVE( DowaProjectApp, RendererGl )
