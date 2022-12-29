#include <iostream>
#include "IGoods.h"
#include "Homeware.h"
#include "Portable.h"
#include "Headset.h"

int main()
{
	IGoods* goods[5];

	goods[0] = new Phone (21, "Cobalt");
	goods[1] = new Notebook (15, 15.6);
	goods[2] = new Oven (15000, 800);
	goods[3] = new Fridge (7000, "mini");
	goods[4] = new Headset (500, 10);

    bool open = true;
    while (open)
    {
        cout << "Select item :" << endl 
         <<   "1 - phone;" << endl
         <<   "2 - notebook;" << endl
         <<   "3 - oven" << endl
         <<   "4 - fridge" << endl
         <<   "5 - headset" << endl
         <<   "0 - exit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            goods[0]->Show();
            break;

        case 2:
            goods[1]->Show();
            break;

        case 3:
            goods[2]->Show();
            break;

        case 4:
            goods[3]->Show();
            break;

        case 5:
            goods[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Select item from 1 to 5 or 0, to exit" << endl;
            break;
        }
    }
    delete goods[0];
    delete goods[1];
    delete goods[2];
    delete goods[3];
    delete goods[4];

	return 0;
}