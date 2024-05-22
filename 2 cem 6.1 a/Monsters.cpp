#include "a6_1.h"
#include "Monsters.h"
#include"iostream"
using namespace std;
int Monsters::GetCoutMonsters()
{
	return countMonsters;
}
int Monsters::GetIDMonster()
{
	return IDMonster;
}
void Monsters::SetCoutMonsters(int id)
{
	countMonsters = id;
}
void Monsters::SetIDMonster(int m)
{
	IDMonster = m;
}

void Monsters::SetIDLocation(int id)
{
	a6_1::SetIDLocation(id);
}
void Monsters::SetCoins(int c)
{
	a6_1::SetCoins(c);
}
void Monsters::GetIDLocation()
{
	a6_1::GetIDLocation();
}
void Monsters::GetCoins()
{
	a6_1::GetCoins();
}

Monsters::Monsters() :a6_1()
{
	countMonsters = 1;
	IDMonster = 1;
}
Monsters::Monsters(int coins, int idLocation, int IDMonster, int countMonsters)  // заданными значени€ми
	: a6_1(coins, idLocation), IDMonster(IDMonster), countMonsters(countMonsters) {

	if (IDMonster > 200 || IDMonster < 1)
	{
		cout << "incorrect data " << endl;
		cout << "1.enter count of monsters and 2.id monster " << endl;
		cin >> countMonsters; cout << '\t';
		cin >> IDMonster;
	}
	this->IDMonster = IDMonster;
	this->countMonsters = countMonsters;
}
Monsters::Monsters(const Monsters& change) :a6_1(change)
{
	this->IDMonster = change.IDMonster;
	this->countMonsters = change.countMonsters;
}

Monsters::Monsters(Monsters&& change) : a6_1(change)
{
	this->IDMonster = change.IDMonster;
	this->countMonsters = change.countMonsters;

	change.IDMonster = 0;
	change.countMonsters = 0;
}

void Monsters::fill()
{
	a6_1::fill();
	cout << "count of monsters: ";
	cin >> this->countMonsters;

	cout << "ID of monster: ";
	cin >> this->IDMonster;
}
void Monsters::print() const  // ????? ?? ????? 
{
	cout << " «аказ на отстрел монстров" << endl;
	a6_1::print();
	cout << "id of monster: " << this->IDMonster << endl;
	cout << "count of monsters: " << this->countMonsters << endl;
}
