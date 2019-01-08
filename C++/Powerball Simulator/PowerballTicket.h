
#ifndef PowerballTicket_h
#define PowerballTicket_h

class PowerballTicket
{
public:
    
    PowerballTicket(int ball1, int ball2, int ball3, int ball4, int ball5, int powerball); //Ticket constructor custom values
    int getBall1(); //getball functions
    int getBall2();
    int getBall3();
    int getBall4();
    int getBall5();
    int getPowerball();
    
private: //ball variables
    int mball1;
    int mball2;
    int mball3;
    int mball4;
    int mball5;
    int mPowerball;
    
};



#endif /* PowerballTicket_h */
