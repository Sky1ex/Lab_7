#include "Service.h"
#include "Weather.h"
#pragma once
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


