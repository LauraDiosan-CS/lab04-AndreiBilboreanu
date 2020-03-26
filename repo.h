#pragma once

#include <vector>
#include "domain.h"

using namespace std;

class Repo {
private :
	vector<Transaction> repo;
public :
	Repo() {}
	void addElem(Transaction obj);
	int getSize() const;
	vector<Transaction> getAll() const;
	void modify(int ,int);
	void deleteRepo(int);

};
extern Repo repo;