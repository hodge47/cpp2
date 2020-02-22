#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.hpp"
#include <vector>

class Inventory
{
private:
    std::vector<Item> m_coffees;
    std::vector<Item> m_teas;
    std::vector<Item> m_sodas;
    std::vector<Item> m_bagels;
    std::vector<Item> m_donuts;
    std::vector<Item> m_sandwiches;

public:
    Inventory();
    void populate_inventory();
    void list_inventory();
    void transaction();
};

#endif