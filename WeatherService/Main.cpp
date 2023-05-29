#include "json.hpp"
#include "JsonService.h"
#include "Service.h"
#include "pugixml.hpp"
#include "XmlService.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace pugi;

int main()
{
	setlocale(LC_ALL, "Russian");
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	w.Print();
	return 0;
}

