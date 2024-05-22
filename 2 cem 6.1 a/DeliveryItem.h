#pragma once
#include "a6_1.h"
//количество золотых монет, получаемых за выполнение задания
//• идентификатор локации расположения предмета
// 
//• идентификатор локации расположения заказчика
//• идентификатор заказываемого предмета
class DeliveryItem :public a6_1
{
	int item; // идентификатор заказываемого предмета
	int idLocationCustomer; //идентификатор локации заказчика
	//idLocation идентификатор локации расположения предмета
public:

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	int GetItem();
	int GetIDLocationCustomer();
	void SetItem(int i);
	void SetIDLocationCustomer(int id);

	DeliveryItem(); // конструктор без параметров
	DeliveryItem(int coins, int idLocation, int item, int idLocationCustomer);  // заданными значениями
	DeliveryItem(const DeliveryItem& change)noexcept;  // копирования
	DeliveryItem(DeliveryItem&& change);   // перемещения 
	~DeliveryItem() override {};

	void fill() override;  // заполнения с клавиатуры
	void print() const override;  // вывод на экран 
};
