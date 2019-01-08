
#include <stdio.h>
#include "PowerballLottery.h"
#include "PowerballTicket.h"
#include "RandomNumber.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

PowerballLottery::PowerballLottery()
{
    RandomNumber r(1,69);
    RandomNumber power(1,26);
    do
    {
    mball1 = r.random();    //assign random numbers to the balls
    mball2 = r.random();
    mball3 = r.random();
    mball4 = r.random();
    mball5 = r.random();
    mpowerball = power.random();
    }
    while(mball1 == mball2 || mball1 == mball3 || mball1 == mball4 || mball1 == mball5 || mball2 == mball3 || mball2 == mball4 || mball2 == mball5 ||mball3 == mball4 || mball3 == mball5 || mball4 == mball5); //ensure none of them are the same
   
}

PowerballLottery::PowerballLottery(int ball1, int ball2, int ball3, int ball4, int ball5, int powerball)
{
    mball1 = ball1;     //place custom values in spots
    mball2 = ball2;
    mball3 = ball3;
    mball4 = ball4;
    mball5 = ball5;
    mpowerball = powerball;
}

PowerballTicket PowerballLottery::quickPick()
{
    int ball1 = 0;      //initalize five balls and a powerball
    int ball2 = 0;
    int ball3 = 0;
    int ball4 = 0;
    int ball5 = 0;
    int powerball = 0;
    RandomNumber r(1,69);
    RandomNumber power(1,26);
    do{
    ball1 = r.random(); //assign a random number to each ball
    ball2 = r.random();
    ball3 = r.random();
    ball4 = r.random();
    ball5 = r.random();
    powerball = power.random();
    }
    while(ball1 == ball2 || ball1 == ball3 || ball1 == ball4 || ball1 == ball5 || ball2 == ball3 || ball2 == ball4 || ball2 == ball5 || ball3 == ball4 || ball3 == ball5 || ball4 == ball5); //make sure they are all different
    
    return PowerballTicket(ball1, ball2, ball3, ball4, ball5, powerball); //create a ticket with those balls
  
}

PowerballLottery::WinningPossibility PowerballLottery::checkTicket(PowerballTicket ticket)
{
    WinningPossibility p = NOTWINNING;
    int array1[6];
    array1[0] = ticket.getBall1(); //place ticket values into an array
    array1[1] = ticket.getBall2();
    array1[2] = ticket.getBall3();
    array1[3] = ticket.getBall4();
    array1[4] = ticket.getBall5();
    array1[5] = ticket.getPowerball();
    
    
    int array2[6];
    array2[0] = this->getBall1(); //place values from winning ticket into array
    array2[1] = this->getBall2();
    array2[2] = this->getBall3();
    array2[3] = this->getBall4();
    array2[4] = this->getBall5();
    array2[5] = this->getPowerball();
        
    
    
    int mcount = 0;
    bool power = false;
    for(int k = 0;k < 6;k++) //check matches and powerball
    {
        int temp = array1[k];
        int pos2 = k;
        for(int j = 0;j < 6;j++)
        {
            int temp2 = array2[j];
            int pos1 = j;
            
            if(pos1 == 5 && pos2 == 5)
            {
                if(temp == temp2)
                {
                power = true; //if powerball is matched
                break;
                }
                
            }
            if(temp == temp2 && pos2 != 5)
            {
                mcount++;
                break;
            }
            
        }
    }
if(mcount == 0) //use total number of matches to check winning enumeration
{
    if(power == true)
        {
        return p = POWERBALL;
             
        }
        else
        {
        return p = NOTWINNING;
        
        }
    
}
if(mcount == 1)
{
            if(power == true)
            {
               return  p = ONEPLUSPOWERBALL;
         
            }
            else
            {
                return p = NOTWINNING;
          
            }
}
if(mcount == 2)
    {
            if(power == true)
            {
                return p = TWOPLUSPOWERBALL;
               
            }
            else
            {
                return p = NOTWINNING;
            
            }
    }
if(mcount == 3)
{
            if(power == true)
            {
               return  p = THREEPLUSPOWERBALL;
              
            }
            else
            {
                return p = THREE;
         
            }
}
if(mcount == 4)
{
            if(power == true)
            {
                return p = FOURPLUSPOWERBALL;
           
            }
            else
            {
               return p = FOUR;
                
            }
}
if(mcount == 5)
{
            if(power == true)
            {
                return p = FIVEPLUSPOWERBALL;
         
            }
            else
            {
                return p = FIVE;
        
            }
}

    
    return p;
}

void PowerballLottery::printWhatHappened(PowerballTicket ticket)
{
    WinningPossibility p = checkTicket(ticket);
    switch(p) //according to winning enumeration print out message
    {
        case(NOTWINNING):
            cout << "You didn't win anything.  Please buy another ticket!" << endl;
            break;
        case(POWERBALL):
            cout << "You matched just the powerball.  Congratulations!" << endl;
            break;
        case(ONEPLUSPOWERBALL):
            cout << "You matched one ball plus the powerball.  Congratulations!" << endl;
            break;
        case(TWOPLUSPOWERBALL):
            cout << "You matched two balls plus the powerball.  Congratulations!" << endl;
            break;
        case(THREE):
            cout<< "You matched three balls but not the powerball.  Congratulations!" << endl;
            break;
        case(THREEPLUSPOWERBALL):
            cout << "You matched three balls plus the powerball.  Congratulations!" << endl;
            break;
        case(FOUR):
            cout << "You matched four balls but not the powerball.  Congratulations!" << endl;
            break;
        case(FOURPLUSPOWERBALL):
            cout << "You matched four balls plus the powerball.  Congratulations!" << endl;
            break;
        case(FIVE):
            cout << "You matched five balls but not the powerball.  Congratulations!" << endl;
            break;
        case(FIVEPLUSPOWERBALL):
            cout << "You won the jackpot - all balls plus the powerball.  Congratulations!" << endl;
            break;
    }
    
}
 //getball functions
int PowerballLottery::getBall1()
{
    return mball1;
}

int PowerballLottery::getBall2()
{
    return mball2;
}

int PowerballLottery::getBall3()
{
    return mball3;
}

int PowerballLottery::getBall4()
{
    return mball4;
}

int PowerballLottery::getBall5()
{
    return mball5;
}

int PowerballLottery::getPowerball()
{
    return mpowerball;
}
