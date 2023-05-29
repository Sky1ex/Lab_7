#include "Weather.h"
#include <string>
#pragma once

using namespace std;

class Service
{

public:
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service() {};

};

