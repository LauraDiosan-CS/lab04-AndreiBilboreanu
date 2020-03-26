#include <iostream>
#include "repo.h"
#include "domain.h"
#include "assert.h"


using namespace std;

void testTransaction()
{
    Transaction a(25, 200, "out", "pizza");
    Repo repo;
    repo.addElem(a);
    assert(repo.getSize() == 1);
    for (auto i : repo.getAll())
        cout << i << endl;



}

int main()
{
    testTransaction();
}