#pragma once

#include "Homeware.h"
#include "Portable.h"

class Headset final : public Homeware, Portable
{
public:
	Headset(int price, int powerUpTime);
	void Show() override;

};

