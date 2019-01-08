//
//  game.h
//  CS32 Project 1
//
//  Created by Jack Seeburger's Computer on 1/14/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#ifndef game_h
#define game_h


#include <iostream>

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRats);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
    
    // Helper functions
    std::string takePlayerTurn();
};


#endif /* game_h */
