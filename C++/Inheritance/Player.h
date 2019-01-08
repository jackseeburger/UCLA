//
//  player.h
//  CS32 Project 1
//
//  Created by Jack Seeburger's Computer on 1/14/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#ifndef player_h
#define player_h
#include <iostream>
#include "globals.h"

class Arena;

class Player
{
public:
    // Constructor
    Player(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;
    
    // Mutators
    std::string dropPoisonPellet();
    std::string move(int dir);
    void   setDead();
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    bool   m_dead;
};


#endif /* player_h */
