#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item
{
private:
    std::string m_name;
    double m_cost;
public:
    Item();
    void set_name(std::string _name);
    void set_cost(double _cost);
    std::string get_name();
    double get_cost();
};

#endif