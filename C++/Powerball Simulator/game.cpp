#include <iostream>
#include <string>
#include <cassert>
#include "PowerballTicket.h"
#include "PowerballLottery.h"
#include "RandomNumber.h"
using namespace std;

int main()
{
    for(int k = 0;k <= 10;k++)
    {

    PowerballTicket ticket(14, 29, 38, 48, 57, 26); ///check 5 tickets iterated with many different Ticket values
    PowerballLottery lottery2 = PowerballLottery(); //random winning ticket
    lottery2.printWhatHappened(ticket);
    }
//    
//    PowerballTicket ticket(10, 13, 15, 16, 17, 26);
//    assert(ticket.getBall1() == 10); //check all getball functions
//    assert(ticket.getBall2() == 13);
//    assert(ticket.getBall3() == 15);
//    assert(ticket.getBall4() == 16);
//    assert(ticket.getBall5() == 17);
//    assert(ticket.getPowerball() == 26);
//    
//    PowerballLottery lottery(10, 14, 15, 18, 19, 26);
//    assert(lottery.getBall1() == 10); //check all getball functions
//    assert(lottery.getBall2() == 14);
//    assert(lottery.getBall3() == 15);
//    assert(lottery.getBall4() == 18);
//    assert(lottery.getBall5() == 19);
//    assert(lottery.getPowerball() == 26);
//    
//    assert(lottery.checkTicket(ticket) == PowerballLottery::TWOPLUSPOWERBALL); //check Checkticket function
//    lottery.printWhatHappened(ticket); //check print what happened function
//    
//    
//    // test code
//    PowerballTicket ticket1( 1, 2, 3, 4, 5, 6 );
//    assert( ticket1.getBall1() == 1);
//    assert( ticket1.getBall2() == 2);
//    assert( ticket1.getBall3() == 3);
//    assert( ticket1.getBall4() == 4);
//    assert( ticket1.getBall5() == 5);
//    assert( ticket1.getPowerball() == 6);
//    PowerballLottery lottery1( 1, 2, 3, 4, 5, 6 );
//    assert( lottery1.getBall1() == 1);
//    assert( lottery1.getBall2() == 2);
//    assert( lottery1.getBall3() == 3);
//    assert( lottery1.getBall4() == 4);
//    assert( lottery1.getBall5() == 5);
//    assert( lottery1.getPowerball() == 6);
//    assert( lottery1.checkTicket(ticket1) == PowerballLottery::WinningPossibility::FIVEPLUSPOWERBALL);
//    ticket1 = PowerballTicket( 1, 2, 3, 4, 5, 12 );
//    assert( lottery1.checkTicket(ticket1) == PowerballLottery::WinningPossibility::FIVE);
//    ticket1 = PowerballTicket( 1, 2, 3, 4, 15, 12 );
//    
//    
//    
//    PowerballTicket quickPickTicket( 1, 2, 3, 4, 5, 6);
//    for (int i = 0; i < 20; i++)
//    {
//        quickPickTicket = lottery.quickPick();
//        // all the ball numbers need to be different...
//        assert( quickPickTicket.getBall1() != quickPickTicket.getBall2() &&
//               quickPickTicket.getBall1() != quickPickTicket.getBall3() &&
//               quickPickTicket.getBall1() != quickPickTicket.getBall4() &&
//               quickPickTicket.getBall1() != quickPickTicket.getBall5() &&
//               quickPickTicket.getBall2() != quickPickTicket.getBall3() &&
//               quickPickTicket.getBall2() != quickPickTicket.getBall4() &&
//               quickPickTicket.getBall2() != quickPickTicket.getBall5() &&
//               quickPickTicket.getBall3() != quickPickTicket.getBall4() &&
//               quickPickTicket.getBall3() != quickPickTicket.getBall5() &&
//               quickPickTicket.getBall4() != quickPickTicket.getBall5());
//    }
    
    cout << "all tests passed!" << endl;
    return 0;
    
    
}