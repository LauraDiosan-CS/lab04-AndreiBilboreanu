#include <vector>
#include "domain.h"
#include "repo.h"

using namespace std;

Repo repo;

void Repo::addElem(Transaction obj) {
    repo.push_back(obj);
}

int Repo::getSize() const {
    return this->repo.size();
}

vector<Transaction> Repo::getAll() const {
    return this->repo;
}

void Repo::modify(int i, int newDay) {
    this->repo[i].setDay(newDay);
}

void Repo::deleteRepo(int i) {
    this->repo.erase(this->repo.begin() + i);
}