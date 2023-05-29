#include "XmlService.h"
#include "pugixml.hpp"
#include "Service.h"
#include "Weather.h"
#include "pugiconfig.hpp"

using namespace pugi;

Weather XmlService::getWeather(std::string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw exception("error");
    xml_node node = doc.child("current");
    std::string city = node.child("city").
        attribute("name").
        as_string(); //  �����
    double lon = node.child("coord").
        attribute("lon").
        as_int(); // 49.6601
    double	lat = node.child("coord").
        attribute("lon").
        as_int(); // 58.5966
    double temperature = node.child("temperature").
        attribute("registerNumber").
        as_double(); // 5.69
    std::string weather = node.child("weather").
        attribute("registerNumber").
        as_string(); // �����
    double windSpeed = node.child("windspeed").
        attribute("speed").
        as_double(); // 4.27
    int clouds = node.child("clouds").
        attribute("registerNumber").
        as_int(); // 100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}

