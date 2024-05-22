#pragma once
#include "a6_1.h"
//• количество золотых монет, получаемых за выполнение задания
//• идентификатор локаций – начала маршрута
//• количество охранников
class SecurityCaravan : public a6_1
{
	int countSecurity; //количество охранников
public:

	void SetCountSecurity(int cs);
	int GetCountSecurity();

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	SecurityCaravan(); // конструктор без параметров
	SecurityCaravan(int coins, int idLocation, int countSecurity);  // заданными значениями
	SecurityCaravan(const SecurityCaravan& change);  // копирования
	SecurityCaravan(SecurityCaravan&& change);   // перемещения 
	virtual ~SecurityCaravan() override {};

	void fill() override;  // заполнения с клавиатуры
	void print() const override;  // вывод на экран 
};