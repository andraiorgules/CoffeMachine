#include "util.h"
#include <iostream>
#include <fstream>
using namespace std;

void Open()
{
    ofstream orders;
    orders.open("input.txt");

     if (orders.is_open())
     { 
      string list;

      while(getline(orders, list))
      { 
         cout << list << "\n"; 
      }

      orders.close(); 
     }
}

void Add()
{
     //1 coffee = 1 cup of water + 2oz of grounds 
    //calculate how many cups of water and how many oz of grounds needed for each individual order
    int oz;
    int cups;
    
    if(list == 1)
    {
        cups = 1;
        oz = 2;
    }
    if(list == 2)
    {
        cups = 2;
        oz = 4;
    }
    if(list == 3)
    {
        cups = 3;
        oz = 6;
    }
    if(list == 4)
    {
        cups = 4;
        oz = 8;
    }
    if(list == 5)
    {
        cups = 5;
        oz = 10;
    }
    if(list == 6)
    {
        cups = 6;
        oz = 12;
    }
    if(list == 7)
    {
        cups = 7;
        oz = 14;
    }
}

void Total()
{
    //add all cups and all oz and give totals for the day
}