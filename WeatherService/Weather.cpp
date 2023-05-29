#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) // Конструктор для присваивания знaчений
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::Print() //функция вывода
{
	setlocale(LC_ALL, "Russian");
	cout << "Город: " << city << "\nДолгота и широта: " << lon << ", " << lat << "\nТемпература: " << temperature << "\nПогода: " << weather << "\nВетренность: " << windSpeed << "\nОблачность: " << clouds;
}