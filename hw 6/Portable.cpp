#include "Portable.h"


Portable::Portable(int powerUpTime) : _powerUpTime(powerUpTime)
{
}

void Portable::Show()
{
    cout << "Basic Fruit sugar: " << _powerUpTime << endl;
}


Phone::Phone(int powerUpTime, string color) : Portable(powerUpTime), _color(color)
{
}

void Phone::Show()
{
    cout << _color << "Phone, power up time: " << _powerUpTime << "h" << endl;
}

Notebook::Notebook(int powerUpTime, float diagonal) : Portable(powerUpTime), _diagonal(diagonal)
{
}

void Notebook::Show()
{
    cout << "Notebook, diagonal: " << _diagonal << " power up time: " << _powerUpTime << "h" << endl;
}