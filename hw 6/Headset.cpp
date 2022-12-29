#include "Headset.h"

Headset::Headset(int price, int powerUpTime) : Homeware(price), Portable(powerUpTime)
{
}

void Headset::Show()
{
	cout << "Headset, price: " << _price << " power up time: " << _powerUpTime << "h" << endl;
}
