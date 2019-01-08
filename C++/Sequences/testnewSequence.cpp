//
//  testnewSequence.cpp
//  HW2
//
//  Created by Jack Seeburger's Computer on 1/24/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#include "newSequence.h"
#include <iostream>
#include <cassert>
using namespace std;

void test()
{
    Sequence s;
    assert(s.insert(0, 10));
    assert(s.insert(0, 20));
    assert(s.size() == 2);
    ItemType x = 999;
    assert(s.get(0, x) && x == 20);
    assert(s.get(1, x) && x == 10);
}

int main()
{
    test();
    cout << "Passed all tests" << endl;
}



//int main()
//{
//    Sequence a(1000);   // a can hold at most 1000 items
//    Sequence b(5);      // b can hold at most 5 items
//    Sequence c;         // c can hold at most DEFAULT_MAX_ITEMS items
//    ItemType v = 10;
//    
//    // No failures inserting 5 items into b
//    for (int k = 0; k < 5; k++)
//        assert(b.insert(k, v));
//    
//    // Failure if we try to insert a sixth item into b
//    assert(!b.insert(5, v));
//    
//    // When two Sequences' contents are swapped, their capacities are
//    // swapped as well:
//    a.swap(b);
//    assert(!a.insert(5, v));
//    for (int k = 0; k < 1000; k++)
//        assert(b.insert(k, v));
//    
//    cout << "Passed all tests!" << endl;
//}
