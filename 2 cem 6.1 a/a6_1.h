#pragma once
class a6_1
{
protected:
	int coins; // количество золотых монет, получаемых за выполнение задания
	int idLocation; //идентификатор локации
public:

	void SetIDLocation(int id);
	void SetCoins(int c);
	int GetIDLocation();
	int GetCoins();

	a6_1(); // конструктор без параметров
	a6_1(int coins, int idLocation);  // заданными значениями
	a6_1(const a6_1& change)noexcept;  // копирования
	a6_1(a6_1&& change);   // перемещения 
	virtual ~a6_1() {};

	virtual void fill();  // заполнения с клавиатуры
	virtual void print() const;  // вывод на экран 
};
