//
//  newSequence.cpp
//  HW2
//
//  Created by Jack Seeburger's Computer on 1/24/17.
//  Copyright © 2017 Jack Seeburger's Computer. All rights reserved.
//

#include "newSequence.h"
#include <iostream>
using namespace std;

Sequence::Sequence()
{
    m_items = 0;
    max_items = DEFAULT_MAX_ITEMS;
    sequence_array = new ItemType[DEFAULT_MAX_ITEMS];
}

Sequence::Sequence(const int numitems)
{
    if(numitems < 0)
    {
        cerr << "Set size must be positive" << endl;
        exit(0);
    }
    m_items = 0;
    max_items = numitems;
    sequence_array = new ItemType[max_items];
}

Sequence::~Sequence()
{
    delete [] sequence_array;
}

Sequence& Sequence::operator=(const Sequence &other)
{
    if(this != &other)
    {
        Sequence temp = other;
        swap(temp);
    }
    
    return* this;
}


bool Sequence::empty() const
{
    if(m_items == 0)
    {
        return true;
    }
    return false;
}

int Sequence::size() const
{
    return m_items;
}

bool Sequence::insert(int pos, const ItemType& value)
{
    if(pos + 1 > max_items)
    {
        return false;
    }
    if(pos == size())
    {
        m_items++;
        sequence_array[pos] = value;
        return true;
    }
    
    for(int i = 0;i < m_items;i++)
    {
        
        if(i == pos)
        {
            
            for(int j = m_items -1; j >= i;j--)
            {
                sequence_array[j +1] = sequence_array[j];
                
            }
            m_items++;
            sequence_array[pos] = value;
            return true;
        }
    }
    return true;
}

int Sequence::insert(const ItemType& value)
{
    int pos = 0;
    if(m_items == 0)
    {
        sequence_array[0] = value;
        m_items++;
        return pos;
    }
    for(int i = 0;i < m_items;i++)
    {
        if(value <= sequence_array[i])
        {
            
            
            pos = i;
            sequence_array[i] = value;
            m_items++;
            return pos;
        }
        
        
    }
    return pos;
}

bool Sequence::erase(int pos)
{
    if(pos > size())
    {
        return false;
    }
    for(int i = 0;i < m_items;i++)
    {
        if(i == pos)
        {
            for(int j = i;j < m_items;j++)
            {
                sequence_array[j] = sequence_array[j+1];
            }
            m_items--;
            return true;
        }
    }
    return false;
}



int Sequence::remove(const ItemType &value)
{
    int count = 0;
    for(int i = 0; i < m_items; i++)
    {
        if(sequence_array[i] == value)
        {
            for(int j = i; j < m_items;j++)
            {
                sequence_array[j] = sequence_array[j + 1];
            }
            m_items--;
            count++;
        }
    }
    return count;
}

bool Sequence::get(int pos, ItemType& value) const
{
    if(pos > m_items)
    {
        return false;
    }
    
    for(int i = 0;i < m_items;i++)
    {
        if(i == pos)
        {
            value = sequence_array[i];
            return true;
        }
    }
    return false;
}

bool Sequence::set(int pos, const ItemType& value)
{
    if(pos > size())
    {
        return false;
    }
    for(int i = 0;i < m_items;i++)
    {
        if(i == pos)
        {
            sequence_array[i] = value;
            return true;
        }
    }
    return false;
}

int Sequence::find(const ItemType& value) const
{
    int pos = 0;
    for(int i = 0;i <m_items;i++)
    {
        if(sequence_array[i] == value)
        {
            pos = i;
            return pos;
        }
    }
    pos = -1;
    
    return pos;
}

void Sequence::swap(Sequence &other)
{
    for(int i = 0; i < m_items || i < other.m_items; i++)
    {
        ItemType temp = sequence_array[i];
        sequence_array[i] = other.sequence_array[i];
        other.sequence_array[i] = temp;
    }
    int temp_size = m_items;
    m_items = other.m_items;
    other.m_items = temp_size;
    
    int temp_max = max_items;
    max_items = other.max_items;
    other.max_items = temp_max;
}
