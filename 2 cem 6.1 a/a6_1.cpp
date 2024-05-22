#include<iostream>
#include<iomanip>
#include<cstring>
#include"a6_1.h"
using namespace std;

void a6_1::SetIDLocation(int id)
{
	idLocation = id;
}
void a6_1::SetCoins(int c)
{
	coins = c;
}
int a6_1::GetCoins()
{
	return coins;
}
int a6_1::GetIDLocation()
{
	return idLocation;
}

a6_1::a6_1()
{
	idLocation = 1;
	coins = 1;
}
a6_1::a6_1(int coins, int idLocation) :coins(coins), idLocation(idLocation) // ????????? ??????? 
{
	this->idLocation = idLocation;
	this->coins = coins;
	if (idLocation > 1000000 || idLocation < 1)
	{
		cout << "incorrect data" << endl;
		cout << "enter id of location" << endl;
		cin >> idLocation;
	}
	this->idLocation = idLocation;
}

a6_1::a6_1(const a6_1& change) noexcept // копирования
{
	this->idLocation = change.idLocation;
	this->coins = change.coins;
}
a6_1::a6_1(a6_1&& change)  // перемещения
{
	this->idLocation = change.idLocation;
	this->coins = change.coins;

	change.idLocation = NULL;
	change.coins = NULL;
}

void a6_1::fill()
{
	cout << "enter ID location: ";
	cin >> this->idLocation;

	cout << "enter golden coins: ";
	cin >> this->coins;
}

void a6_1::print() const
{
	cout << "id location: " << this->idLocation << endl;
	cout << "golden coins: " << this->coins << endl;
}
