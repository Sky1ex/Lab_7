#include "Service.h"
#include "Weather.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"
#pragma once
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


