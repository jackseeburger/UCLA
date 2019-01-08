
#include "PowerballTicket.h"
#ifndef PowerballLottery_h
#define PowerballLottery_h

class PowerballLottery
{
public:
    enum WinningPossibility { POWERBALL, ONEPLUSPOWERBALL, TWOPLUSPOWERBALL, THREE, THREEPLUSPOWERBALL, FOUR, FOURPLUSPOWERBALL, FIVE, FIVEPLUSPOWERBALL, NOTWINNING };
    
    PowerballLottery(); //random constructor
    PowerballLottery(int ball1, int ball2, int ball3, int ball4, int ball5, int powerball); //custom constructor
    int getBall1(); //getball functions
    int getBall2();
    int getBall3();
    int getBall4();
    int getBall5();
    int getPowerball();
    
    PowerballTicket quickPick(); //quickpick a PowerballTicket
    WinningPossibility checkTicket(PowerballTicket ticket); //check the winning possibilities
    
    void printWhatHappened(PowerballTicket ticket); //print outcome
    
    
private: //ball variables
    int mball1;
    int mball2;
    int mball3;
    int mball4;
    int mball5;
    int mpowerball;
    
};


#endif /* PowerballLottery_h */
