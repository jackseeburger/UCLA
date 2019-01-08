//
//  ScoreList.cpp
//  HW2
//
//  Created by Jack Seeburger's Computer on 1/24/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#include "ScoreList.h"
#include <iostream>
using namespace std;

ScoreList::ScoreList()
{
    m_scores = 0;
}

bool ScoreList::add(unsigned long score)
{
    if( score > 100)
    {
        return false;
    }
    m_scorelist.insert(m_scores, score);
    m_scores++;
    return true;
}

bool ScoreList::remove(unsigned long score)
{
    int pos = m_scorelist.find(score);
    if(m_scorelist.erase(pos))
    {
        m_scores--;
        return true;
    }
    return false;
}

int ScoreList::size() const
{
    return m_scores;
}

unsigned long ScoreList::maximum() const
{
    ItemType max = 0;
    for(int i = 0;i < m_scores;i++)
    {
        ItemType temp = 0;
        m_scorelist.get(i, temp);
        if(temp > max)
        {
            max = temp;
        }
    }
    return max;
}

unsigned long ScoreList::minimum() const
{
    ItemType min = 0;
    m_scorelist.get(0, min);
    for(int i = 1;i < m_scores;i++)
    {
        ItemType temp;
        m_scorelist.get(i, temp);
        if(temp < min)
        {
            min = temp;
        }
    }
    
    return min;
}





