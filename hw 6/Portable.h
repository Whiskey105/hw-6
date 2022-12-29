#pragma once 

#include "IGoods.h"

class Portable : virtual public IGoods
{
public:
    Portable(int powerUpTime);

    void Show() override;
protected:
    int _powerUpTime;
};

class Phone final : public Portable
{
public:
    Phone(int powerUpTime, string color);
    void Show() override;
private:
    string _color;
};

class Notebook final : public Portable
{
public:
    Notebook(int powerUpTime, float diagonal);

    void Show() override;
private:
    float _diagonal;
};

