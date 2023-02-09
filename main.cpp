#include <iostream>
#include "game.h"

int main() {
  std::string name;
  std:: cout << "Welcome to the damage. What is your name?\n";
  std::cin >> name;
  
  Player player = Player(name, 100, 10);
  Dungeon dungeon;
  Game game = Game(&player, &dungeon);

  while(!game.isGameOver) {
    game.initiateRoomSequence();
  }
}