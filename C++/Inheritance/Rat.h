//
//  rat.h
//  CS32 Project 1
//
//  Created by Jack Seeburger's Computer on 1/14/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#ifndef rat_h
#define rat_h
#include <iostream>
#include "globals.h"



class Arena;  // This is needed to let the compiler know that Arena is a
// type name, since it's mentioned in the Rat declaration.

class Rat
{
public:
    // Constructor
    Rat(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;
    
    // Mutators
    void move();
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};

#endif /* rat_h */
