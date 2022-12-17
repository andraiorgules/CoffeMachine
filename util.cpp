#include "util.h"



vector<Order> orders;

struct Order
{
    int amount;
};

void Open()
{
    //open text file
    //save all to a list

    ofstream input;
    input.open("input.txt");

    string amount;

    if (input.is_open())
    {
        while (input)
        {
            getline(input, amount);
            orders.push_back(amount);
        }
    }
      input.close();  
}

void Add()
{
    //1 coffee = 1 cup of water + 2oz of grounds 
    //scan list 
    //calculate how many cups of water and how many oz of grounds needed for each order
    int oz;
    int cups;

    if(find(orders.begin(), orders.end(), 1) != orders.end())
    {
        cups += 1;
        oz += 2;
    }
    if(find(orders.begin(), orders.end(), 2) != orders.end())
    {
        cups += 2;
        oz += 4;
    }
    if(find(orders.begin(), orders.end(), 3) != orders.end())
    {
        cups += 3;
        oz += 6;
    }
    if(find(orders.begin(), orders.end(), 4) != orders.end())
    {
        cups += 4;
        oz += 8;
    }
    if(find(orders.begin(), orders.end(), 5) != orders.end())
    {
        cups += 5;
        oz += 10;
    }
    if(find(orders.begin(), orders.end(), 6) != orders.end())
    {
        cups += 6;
        oz += 12;
    }
    if(find(orders.begin(), orders.end(), 7) != orders.end())
    {
        cups += 7;
        oz += 14;
    }

    //print totals for the day
    cout << " We will need a total of" << cups <<"cups of water today! \n";
    cout << " We will need a total of" << oz <<"oz of coffee grounds today! \n";
}