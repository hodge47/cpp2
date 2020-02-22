#include "input.hpp"
#include <iostream>

Input::Input()
{
}

std::string Input::get_item_input()
{
    std::string _itemName = "";
    std::cin >> _itemName;
    return _itemName;
}

int Input::get_item_count()
{
    int _itemCount = 0;
    std::cin >> _itemCount;
    return _itemCount;
}