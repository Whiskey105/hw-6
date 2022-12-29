#include "Homeware.h"
#include <iostream>

using namespace std; 

Homeware::Homeware(int price) : _price(price)
{
}

void Homeware::Show()
{
}

Oven::Oven(int price, int power) : Homeware(price), _power(power)
{
}

void Oven::Show()
{
    cout << "Oven, price: " << _price << " power: " << _power << "W" << endl;
}

Fridge::Fridge(int price, string size) : Homeware(price), _size(size)
{
}

void Fridge::Show()
{
    cout << "Fridge, price: " << _price << " size type: " << _size << endl;
}


