#include "inventory.hpp"
#include <iostream>
#include "log.hpp"
#include <string>
#include "input.hpp"

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
    for (int i = 0; i < numberOfCoffees; i++)
    {
        Item *newCoffee = new Item();
        newCoffee->set_name("Coffee");
        newCoffee->set_cost(3.69);
        m_coffees.push_back(*newCoffee);
        delete (newCoffee);
    }
    // Teas
    for (int i = 0; i < numberOfTeas; i++)
    {
        Item *newTea = new Item();
        newTea->set_name("Tea");
        newTea->set_cost(2.69);
        m_teas.push_back(*newTea);
        delete (newTea);
    }
    // Sodas
    for (int i = 0; i < numberOfSodas; i++)
    {
        Item *newSoda = new Item();
        newSoda->set_name("Soda");
        newSoda->set_cost(1.69);
        m_sodas.push_back(*newSoda);
        delete (newSoda);
    }
    // Bagels
    for (int i = 0; i < numberOfBagels; i++)
    {
        Item *newBagel = new Item();
        newBagel->set_name("Bagel");
        newBagel->set_cost(2.49);
        m_bagels.push_back(*newBagel);
        delete (newBagel);
    }
    // Donuts
    for (int i = 0; i < numberOfDonuts; i++)
    {
        Item *newDonut = new Item();
        newDonut->set_name("Donut");
        newDonut->set_cost(1.49);
        m_donuts.push_back(*newDonut);
        delete (newDonut);
    }
    // Sandwiches
    for (int i = 0; i < numberOfSandwhiches; i++)
    {
        Item *newSandwich = new Item();
        newSandwich->set_name("Sandwich");
        newSandwich->set_cost(4.49);
        m_sandwiches.push_back(*newSandwich);
        delete (newSandwich);
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
    for (auto i = m_coffees.begin(); i != m_coffees.end(); ++i)
    {
        coffeeCount++;
    }
    // Teas
    for (auto i = m_teas.begin(); i != m_teas.end(); ++i)
    {
        teaCount++;
    }
    // Sodas
    for (auto i = m_sodas.begin(); i != m_sodas.end(); ++i)
    {
        sodaCount++;
    }
    // Bagels
    for (auto i = m_bagels.begin(); i != m_bagels.end(); ++i)
    {
        bagelCount++;
    }
    // Donuts
    for (auto i = m_donuts.begin(); i != m_donuts.end(); ++i)
    {
        donutCount++;
    }
    // Sandwich
    for (auto i = m_sandwiches.begin(); i != m_sandwiches.end(); ++i)
    {
        sandwichCount++;
    }

    std::string cc = "Coffee: " + std::to_string(coffeeCount);
    std::string tc = "Tea: " + std::to_string(teaCount);
    std::string sc = "Soda: " + std::to_string(sodaCount);
    std::string bc = "Bagel: " + std::to_string(bagelCount);
    std::string dc = "Donut: " + std::to_string(donutCount);
    std::string sndc = "Sandwiche: " + std::to_string(sandwichCount);
    std::string sep = "    ";

    std::cout << "Current Inventory - " << std::endl;
    std::cout << cc << sep << tc << sep << sc << sep << bc << sep << dc << sep << sndc << std::endl;
}

void Inventory::transaction()
{
    // Create input
    Input *_input = new Input();
    Log *_log = new Log();

    // Ask the user if they want to buy anything
    _log->log("Would you like to buy anything?", true);
    _log->log("Please enter the item you wish to get.", true);
    std::string _item = _input->get_item_input();
    _log->log("Please enter the quatity.", true);
    int _quantity = _input->get_item_count();

    double _totalPrice = 0;

    if (_item == "Coffee")
    {
        if (_quantity <= m_coffees.size())
        {
            for (int i = 0; i < _quantity; i++)
            {
                m_coffees.erase(m_coffees.begin());
            }
            // Set the total price and log it to the console
            double _price = m_coffees[0].get_cost();
            _totalPrice = _price * _quantity;
            std::string _totalPriceMessage = "Your total is: $" + std::to_string(_totalPrice);
            _log->log(_totalPriceMessage, true);
        }
    }
    else if (_item == "Tea")
    {
        if (_quantity <= m_teas.size())
        {
            for (int i = 0; i < _quantity; i++)
            {
                m_teas.erase(m_teas.begin());
            }
            // Set the total price and log it to the console
            double _price = m_teas[0].get_cost();
            _totalPrice = _price * _quantity;
            std::string _totalPriceMessage = "Your total is: $" + std::to_string(_totalPrice);
            _log->log(_totalPriceMessage, true);
        }
    }
    else if (_item == "Soda")
    {
        if (_quantity <= m_sodas.size())
        {
            for (int i = 0; i < _quantity; i++)
            {
                m_sodas.erase(m_sodas.begin());
            }
            // Set the total price and log it to the console
            double _price = m_sodas[0].get_cost();
            _totalPrice = _price * _quantity;
            std::string _totalPriceMessage = "Your total is: $" + std::to_string(_totalPrice);
            _log->log(_totalPriceMessage, true);
        }
    }
    else if (_item == "Bagel")
    {
        if (_quantity <= m_bagels.size())
        {
            for (int i = 0; i < _quantity; i++)
            {
                m_bagels.erase(m_bagels.begin());
            }
            // Set the total price and log it to the console
            double _price = m_bagels[0].get_cost();
            _totalPrice = _price * _quantity;
            std::string _totalPriceMessage = "Your total is: $" + std::to_string(_totalPrice);
            _log->log(_totalPriceMessage, true);
        }
    }
    else if (_item == "Donut")
    {
        if (_quantity <= m_donuts.size())
        {
            for (int i = 0; i < _quantity; i++)
            {
                m_donuts.erase(m_donuts.begin());
            }
            // Set the total price and log it to the console
            double _price = m_donuts[0].get_cost();
            _totalPrice = _price * _quantity;
            std::string _totalPriceMessage = "Your total is: $" + std::to_string(_totalPrice);
            _log->log(_totalPriceMessage, true);
        }
    }
    else if (_item == "Sandwich")
    {
        if (_quantity <= m_sandwiches.size())
        {
            for (int i = 0; i < _quantity; i++)
            {
                m_sandwiches.erase(m_sandwiches.begin());
            }
            // Set the total price and log it to the console
            double _price = m_sandwiches[0].get_cost();
            _totalPrice = _price * _quantity;
            std::string _totalPriceMessage = "Your total is: $" + std::to_string(_totalPrice);
            _log->log(_totalPriceMessage, true);
        }
    }
    else
    {
        _log->log("Sorry, we do no have that.", true);
    }

    // Delete allocs
    delete (_input);
    delete (_log);
}