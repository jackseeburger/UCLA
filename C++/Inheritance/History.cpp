//
//  history.cpp
//  CS32 Project 1
//
//  Created by Jack Seeburger's Computer on 1/17/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#include <stdio.h>
#include "history.h"
#include <iostream>
using namespace std;

History::History(int nRows, int nCols)
{
    h_rows = nRows;
    h_cols = nCols;
    for(int i=0;i < MAXROWS;i++)
    {
        for(int j = 0;j < MAXCOLS;j++)
        {
            deathgrid[i][j] = 0;
        }
    }
}

bool History::record(int r, int c)
{
    if(r > h_rows)
    {
        return false;
    }
    if(c > h_cols)
    {
        return false;
    }
    deathgrid[r-1][c-1]++;
    return true;
}
void History::display() const
{
    clearScreen();
    char h_displaygrid[h_rows][h_cols];
    for(int i = 0;i < h_rows;i++) //fill h_display grid with appropiate char
    {
        for(int j = 0;j < h_cols;j++)
        {
            switch(deathgrid[i][j])
            {
                case 0:
                {
                    h_displaygrid[i][j] = '.';
                    break;
                }
                case 1:
                {
                   h_displaygrid[i][j] = 'A';
                    break;
                }
                case 2:
                {
                    h_displaygrid[i][j] = 'B';
                    break;
                }
                case 3:
                {
                    h_displaygrid[i][j] = 'C';
                    break;
                }
                case 4:
                {
                    h_displaygrid[i][j] = 'D';
                    break;
                }
                case 5:
                {
                   h_displaygrid[i][j] = 'E';
                    break;
                }
                case 6:
                {
                    h_displaygrid[i][j] = 'F';
                    break;
                }
                case 7:
                {
                    h_displaygrid[i][j] = 'G';
                    break;
                }
                case 8:
                {
                    h_displaygrid[i][j] = 'H';
                    break;
                }
                case 9:
                {
                    h_displaygrid[i][j] = 'I';
                    break;
                }
                case 10:
                {
                    h_displaygrid[i][j] = 'J';
                    break;
                }
                case 11:
                {
                    h_displaygrid[i][j] = 'K';
                    break;
                }
                case 12:
                {
                    h_displaygrid[i][j] = 'L';
                    break;
                }
                case 13:
                {
                    h_displaygrid[i][j] = 'M';
                    break;
                }
                case 14:
                {
                    h_displaygrid[i][j] = 'N';
                    break;
                }
                case 15:
                {
                    h_displaygrid[i][j] = 'O';
                    break;
                }
                case 16:
                {
                    h_displaygrid[i][j] = 'P';
                    break;
                }
                case 17:
                {
                    h_displaygrid[i][j] = 'Q';
                    break;
                }
                case 18:
                {
                    h_displaygrid[i][j] = 'R';
                    break;
                }
                case 19:
                {
                    h_displaygrid[i][j] = 'S';
                    break;
                }
                case 20:
                {
                    h_displaygrid[i][j] = 'T';
                    break;
                }
                case 21:
                {
                    h_displaygrid[i][j] = 'U';
                    break;
                }
                case 22:
                {
                    h_displaygrid[i][j] = 'V';
                    break;
                }
                case 23:
                {
                    h_displaygrid[i][j] = 'W';
                    break;
                }
                case 24:
                {
                    h_displaygrid[i][j] = 'X';
                    break;
                }
                case 25:
                {
                    h_displaygrid[i][j] = 'Y';
                    break;
                }
                case 26:
                {
                    h_displaygrid[i][j] = 'Z';
                    break;
                }
                default:
                {
                    h_displaygrid[i][j] = 'Z';
                }
            }
        }
    }
    
    for(int i = 0;i < h_rows;i++)
    {
        for(int j = 0;j <h_cols;j++)
        {
            cout << h_displaygrid[i][j];
        }
        cout << endl;
        
    }
    
    cout << "" << endl;
    
    
    
    
}
