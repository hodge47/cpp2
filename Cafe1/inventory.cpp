#include "inventory.hpp"
#include <iostream>
#include "log.hpp"
#include <string>

Inventory::Inventory()
{
    
}

void Inventory::populate_inventory()
{
    // Inventory - Coffee, Tea, Soda, Bagel, Donut, Sandwich
    int numberOfCoffees = 12;
    int numberOfTeas = 9;
    int numberOfSodas = 11;
    int numberOfBagels = 10;
    int numberOfDonuts = 10;
    int numberOfSandwhiches = 5;

    // Coffees
    for(int i = 0; i < numberOfCoffees; i++)
    {
        Item* newCoffee = new Item();
        newCoffee->set_name("Coffee");
        newCoffee->set_cost(3.69);
        m_coffees.push_back(*newCoffee);
        delete(newCoffee);
    }
    // Teas
    for(int i = 0; i < numberOfTeas; i++)
    {
        Item* newTea = new Item();
        newTea->set_name("Tea");
        newTea->set_cost(2.69);
        m_teas.push_back(*newTea);
        delete(newTea);
    }
    // Sodas
    for(int i = 0; i < numberOfSodas; i++)
    {
        Item* newSoda = new Item();
        newSoda->set_name("Soda");
        newSoda->set_cost(1.69);
        m_sodas.push_back(*newSoda);
        delete(newSoda);
    }
    // Bagels
    for(int i = 0; i < numberOfBagels; i++)
    {
        Item* newBagel = new Item();
        newBagel->set_name("Bagel");
        newBagel->set_cost(2.49);
        m_bagels.push_back(*newBagel);
        delete(newBagel);
    }
    // Donuts
    for(int i = 0; i < numberOfDonuts; i++)
    {
        Item* newDonut = new Item();
        newDonut->set_name("Donut");
        newDonut->set_cost(1.49);
        m_donuts.push_back(*newDonut);
        delete(newDonut);
    }
    // Sandwiches
    for(int i = 0; i < numberOfSandwhiches; i++)
    {
        Item* newSandwich = new Item();
        newSandwich->set_name("Sandwich");
        newSandwich->set_cost(4.49);
        m_sandwiches.push_back(*newSandwich);
        delete(newSandwich);
    }
}

void Inventory::list_inventory()
{
    int coffeeCount = 0;
    int teaCount = 0;
    int sodaCount = 0;
    int bagelCount = 0;
    int donutCount = 0;
    int sandwichCount = 0;
    // Coffees
    for(auto i = m_coffees.begin(); i != m_coffees.end(); ++i)
    {
        coffeeCount++;
    }
    // Teas
    for(auto i = m_teas.begin(); i != m_teas.end(); ++i)
    {
        teaCount++;
    }
    // Sodas
    for(auto i = m_sodas.begin(); i != m_sodas.end(); ++i)
    {
        sodaCount++;
    }
    // Bagels
    for(auto i = m_bagels.begin(); i != m_bagels.end(); ++i)
    {
        bagelCount++;
    }
    // Donuts
    for(auto i = m_donuts.begin(); i != m_donuts.end(); ++i)
    {
        donutCount++;
    }
    // Sandwich
    for(auto i = m_sandwiches.begin(); i != m_sandwiches.end(); ++i)
    {
        sandwichCount++;
    }

    std::string cc = "Coffees: " + std::to_string(coffeeCount);
    std::string tc = "Teas: " + std::to_string(teaCount);
    std::string sc = "Sodas: " + std::to_string(sodaCount);
    std::string bc = "Bagels: " + std::to_string(bagelCount);
    std::string dc = "Donuts: " + std::to_string(donutCount);
    std::string sndc = "Sandwiches: " + std::to_string(sandwichCount);
    std::string sep = "    ";

    Log* _log = new Log();
    _log->log("Test log", true);
    delete(_log);
    
    std::cout << "Current Inventory - " << std::endl;
    std::cout << cc << sep << tc << sep << sc << sep << bc << sep << dc << sep << sndc << std::endl;
}