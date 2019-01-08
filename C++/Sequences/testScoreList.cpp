//
//  testScoreList.cpp
//  HW2
//
//  Created by Jack Seeburger's Computer on 1/24/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#include <stdio.h>
#include "ScoreList.h"
#include <iostream>
#include <cassert>
using namespace std;

int main ()
{
    ScoreList s1;
    s1.add(1);
    s1.add(36);
    s1.add(78);
    s1.add(84);
    s1.add(91);
    s1.add(100);
    assert(s1.size() == 6);
    s1.remove(1);
    assert(s1.size() == 5);
    assert(s1.maximum() == 100);
    assert(s1.minimum() == 36);
    
    cout << "All tests passed!" << endl;
}
