#include <string>

#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

class GameCharacter {
  private:
  std::string name;
    
  protected:
    int currentHealth;
    int maxHealth;
    int damage;

  public:
    GameCharacter(std::string, int, int);
    void takeDamage(int);
    bool isAlive();
    int getHealth();
    int getDamage();
    std::string getName();
};

#endif