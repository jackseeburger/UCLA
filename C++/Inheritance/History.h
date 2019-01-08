//
//  history.h
//  CS32 Project 1
//
//  Created by Jack Seeburger's Computer on 1/17/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#ifndef history_h
#define history_h
#include "globals.h"

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int h_cols;
    int h_rows;
    int deathgrid[MAXROWS][MAXCOLS];
    
    
    
};

#endif /* history_h */
