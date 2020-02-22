#include <iostream>
#include "inventory.hpp"

int main()
{
    Inventory* inv = new Inventory();
    inv->populate_inventory();
    inv->list_inventory();
    delete(inv); 

    return 0;
}
