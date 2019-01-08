//
//  main.cpp
//  HW2
//
//  Created by Jack Seeburger's Computer on 1/23/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//
//
#include <iostream>
#include "Sequence.h"
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
//    Sequence s;
//    assert(s.empty());
//    assert(s.find("laobing") == -1);
//    s.insert("laobing");
//    assert(s.size() == 1  &&  s.find("laobing") == 0);
//    
    
//    Sequence s;
//    assert(s.empty());
//    assert(s.find(42) == -1);
//    s.insert(42);
//    assert(s.size() == 1  &&  s.find(42) == 0);
//
//    Sequence s;
//    s.insert(0, "dosa");
//    s.insert(1, "pita");
//    s.insert(2, "");
//    s.insert(3, "matzo");
//    assert(s.find("") == 2);
//    s.insert(0, "a");
//    s.insert(1, "b");
//    s.insert(2, "c");
//    s.insert(3, "b");
//    s.insert(4, "f");
//    s.insert(4,"e");
//    //assert(s.erase(1) == true);
//    assert(s.size() == 6);
//    string x;
//    assert(s.get(0, x)  &&  x == "a");
//    assert(s.get(1, x)  &&  x == "b");
//    assert(s.get(4, x)  &&  x == "e");
//    s1.insert(0, "paratha");
//    s1.insert(0, "focaccia");
//    Sequence s2;
//    s2.insert(0, "roti");
//    s1.swap(s2);
//    assert(s1.size() == 1  &&  s1.find("roti") == 0  &&  s2.size() == 2  &&
//           s2.find("focaccia") == 0  &&  s2.find("paratha") == 1);
//
//    
//    
//    cout << "Passed all tests" << endl;
//}
