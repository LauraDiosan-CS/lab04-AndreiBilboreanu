#pragma once

#include <string>

using namespace std;

class Transaction {
private:
	int day;
	int sumOfMoney;
	string tipe;
	string desc;
public:
	Transaction(int a, int b, string c, string d) : day(a), sumOfMoney(b), tipe(c), desc(d){}
	Transaction(const Transaction& other) : day(other.day), sumOfMoney(other.sumOfMoney), tipe(other.tipe), desc(other.desc) {}
	int getDay() const;
	int getSumOfMoney() const;
	string getDesc() const;
	string getTipe() const;

	void setDay(int);

	void operator =(const Transaction& other);
	friend ostream& operator <<(ostream& out, const Transaction& entity);





};