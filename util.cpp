#include "util.h"
#include <iostream>
#include <fstream>
using namespace std;

struct Order
{
    int amount;
};

void Open()
{
    //open text file
    //save all to a list

    ofstream order;
    order.open("input.txt");

    string amount;
    vector<Order> orders;

      while(order.peek() != EOF)
      { 
         orders.push_back(amount);
      }

      order.close(); 
     
}

void Add()
{
    //1 coffee = 1 cup of water + 2oz of grounds 
    //scan list // make node to go through list
    //calculate how many cups of water and how many oz of grounds needed for each order
    int oz;
    int cups;
    
    if(orders == 1)
    {
        cups += 1;
        oz += 2;
    }
    if(orders == 2)
    {
        cups += 2;
        oz += 4;
    }
    if(orders == 3)
    {
        cups += 3;
        oz += 6;
    }
    if(orders == 4)
    {
        cups += 4;
        oz += 8;
    }
    if(orders == 5)
    {
        cups += 5;
        oz += 10;
    }
    if(orders == 6)
    {
        cups += 6;
        oz += 12;
    }
    if(orders == 7)
    {
        cups += 7;
        oz += 14;
    }

    //add all cups and all oz and print totals for the day
}