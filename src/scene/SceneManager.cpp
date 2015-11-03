
#include "SceneManager.hpp"
#include "Scene.hpp"


SceneManager& SceneManager::get() {
  static SceneManager instance;
  return instance;
}


void SceneManager::create(const SceneType& type) {
  get().mType = type;
  get().mScene = get().mMaker.create(type);
}

SceneType SceneManager::getSceneType() {
  return get().mType;
}

void SceneManager::update() {
  get().mScene->update();
}

void SceneManager::draw() {
  get().mScene->draw();
}