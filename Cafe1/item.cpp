#include "item.hpp"

Item::Item()
{
    m_name = "NO NAME";
    m_cost = 0.00;
}

void Item::set_name(std::string _name)
{
    m_name = _name;
}

void Item::set_cost(double _cost)
{
    m_cost = _cost;
}

std::string Item::get_name()
{
    return m_name;
}

double Item::get_cost()
{
    return m_cost;
}