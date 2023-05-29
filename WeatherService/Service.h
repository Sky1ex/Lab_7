#include "Weather.h"
#include <string>
#pragma once

using namespace std;

class Service
{
public:
	string s;
private:
	virtual Weather getWeather(std::string s) = 0;
	~Service() {};
};

