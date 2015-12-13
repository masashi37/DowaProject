
#include "ResultLoad.hpp"
#include "../../resource/ResourceManager.hpp"
#include "../SceneManager.hpp"


ResultLoad::ResultLoad() : mLoad(&ResultLoad::load, this), isFin(false) {}

void ResultLoad::load() {
  // Texture
  dowa::ResourceManager::texture().insert("background/result/Back.jpg", TextureKey::Back);
  dowa::ResourceManager::texture().insert("background/result/Retry.jpg", TextureKey::Retry);
  dowa::ResourceManager::texture().insert("background/result/Select.jpg", TextureKey::Select);
  dowa::ResourceManager::texture().insert("background/result/Fin.jpg", TextureKey::Fin);
  dowa::ResourceManager::texture().insert("background/result/Font.png", TextureKey::Font);

  // Sound

  isFin = true;
}

void ResultLoad::update() {
  if (isFin) {
    std::cout << "finish load" << std::endl;
    mLoad.join();
    SceneManager::create(SceneType::Result);
    isFin = false;
  }
}

void ResultLoad::draw() {}
