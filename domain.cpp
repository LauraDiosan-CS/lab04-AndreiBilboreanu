#include <iostream>
#include "domain.h"

using namespace std;

int Transaction::getDay() const  {
	return this->day;
}

int Transaction::getSumOfMoney() const {
	return this->sumOfMoney;
}

string Transaction::getTipe() const {
	return this->tipe;
}

string Transaction::getDesc() const {
	return this->desc;
}

void Transaction::setDay(int newDay) {
	this->day = newDay;
}

ostream& operator <<(ostream& out, const Transaction& entity) {
	
	out << "Tranzactie de tip  " << entity.tipe << "cu o valoare de " << entity.sumOfMoney << " Ron in data de " << entity.day << "a lunii curente cu descrierea " << entity.desc;
	return out;
}

void Transaction:: operator =(const Transaction& other) {
	this->day = other.getDay();
	this->desc = other.getDesc();
	this->tipe = other.getTipe();
	this->sumOfMoney = other.getSumOfMoney();

}