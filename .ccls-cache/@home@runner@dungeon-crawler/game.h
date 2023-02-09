#include "dungeon.h"
#include "player.h"
#include <vector>

#ifndef GAME_H
#define GAME_H

// Game class
class Game {
	private:
		Dungeon * dungeon;
		Player * player;

	public:
		bool isGameOver; 
	
		Game(Player *, Dungeon *);
    std::vector<std::string> getMovementActions();
    void handleMovementActions();
    void printActions(std::vector<std::string>); 
};

#endif