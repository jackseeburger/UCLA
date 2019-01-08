
#include <stdio.h>
#include "PowerballTicket.h"
#include <iostream>
#include <string>

PowerballTicket::PowerballTicket(int ball1, int ball2, int ball3, int ball4, int ball5, int powerball)
{
    mball1 = ball1; //create custom ticket with specified values
    mball2 = ball2;
    mball3 = ball3;
    mball4 = ball4;
    mball5 = ball5;
    mPowerball = powerball;
}

//getball functions

int PowerballTicket::getBall1()
{
    return mball1;
}

int PowerballTicket::getBall2()
{
    return mball2;
}

int PowerballTicket::getBall3()
{
    return mball3;
}

int PowerballTicket::getBall4()
{
    return mball4;
}

int PowerballTicket::getBall5()
{
    return mball5;
}

int PowerballTicket::getPowerball()
{
    return mPowerball;
}
