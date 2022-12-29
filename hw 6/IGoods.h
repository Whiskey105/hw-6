#pragma once

#include <iostream>
using namespace std;

class IGoods
{
public:
	virtual void Show() = 0;
	virtual ~IGoods() = default;
};

