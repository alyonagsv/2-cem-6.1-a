#pragma once
#include "a6_1.h"
class RouteCaravan :public a6_1
{
	int time; // отметка времени, до которой караван должен прибыть в место назначени€ 
	int idLocationEnd; //идентификатор локации начала
	// idLocation индентификатор локации конца
public:
	void SetIDLocationEnd(int ide);
	int GetIDLocationEnd();
	void SetTime(int t);
	int GetTime();

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	RouteCaravan(); // конструктор без параметров
	RouteCaravan(int coins, int idLocation, int idLocationEnd, int time);  // заданными значени€ми
	RouteCaravan(const RouteCaravan& change)noexcept;  // копировани€
	RouteCaravan(RouteCaravan&& change);   // перемещени€ 
	virtual ~RouteCaravan() override {};

	void fill()override;  // заполнени€ с клавиатуры
	void print() const override;  // вывод на экран 
};
//Х количество золотых монет, получаемых за выполнение задани€
//Х идентификатор локаций Ц начала маршрута
//Х идентификатор локаций Ц конец маршрута
//Х отметка времени, до которой караван должен прибыть в место назначени€