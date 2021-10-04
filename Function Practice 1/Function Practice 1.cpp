// Function Practice 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void item_name();

int main()
{
    item_name();
    return 0;
}

void item_name() {
    string item_name, item_price;

    cout << "What item do you want? ";
    cin >> item_name;

    cout << "What is the price? ";
    cin >> item_price;

}