#pragma once
#include "IGoods.h"

class Homeware : virtual public IGoods
{
public:
    Homeware(int price);
    void Show() override;

protected:
    int _price;
};

class Oven final : public Homeware
{
public:
    Oven(int price, int power);
    void Show() override;

private:
    int _power;
};

class Fridge final : public Homeware
{
public:
    Fridge(int price, string size);
    void Show() override;

private:
    string _size;
};


