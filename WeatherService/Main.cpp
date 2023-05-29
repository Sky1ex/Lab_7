#include "json.hpp"
#include "JsonService.h"
#include "Service.h"
#include "Weather.h"
#include <iostream>
#include <string>
#include <fstream>




using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	JsonService js;
	Weather w = js.getWeather("weather.json");
	return 0;
}

