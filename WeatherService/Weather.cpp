#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) // ����������� ��� ������������ ��a�����
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::Print() //������� ������
{
	setlocale(LC_ALL, "Russian");
	cout << "�����: " << city << "\n������� � ������: " << lon << ", " << lat << "\n�����������: " << temperature << "\n������: " << weather << "\n�����������: " << windSpeed << "\n����������: " << clouds;
}