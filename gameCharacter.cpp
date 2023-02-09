#include "gameCharacter.h"
#include <string>

GameCharacter::GameCharacter(std::string _name, int _maxHealth, int _damage){
  name = _name;
  currentHealth = _maxHealth;
  maxHealth = _maxHealth;
  damage = _damage;
}

void GameCharacter::takeDamage(int amount) {
  currentHealth -= amount;
}

bool GameCharacter::isAlive() {
  return currentHealth > 0 ? true : false;
}

int GameCharacter::getHealth() {
  return currentHealth;
}

int GameCharacter::getDamage() {
  return damage;
}

std::string GameCharacter::getName() {
  return name;
}