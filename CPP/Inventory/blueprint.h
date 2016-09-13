#ifndef BLUEPRINT_H
#define BLUEPRINT_H

#include <tuple>
#include "inventory.h"

typedef std::tuple<std::string, int> bp_comp;

class Blueprint
{
public:
    std::string name;
    std::tuple<std::string, int> element1, element2, element3;
    Blueprint(){}
    //Blueprint(std::string, std::tuple<std::string, int>,std::tuple<std::string, int>,std::tuple<std::string, int>);
    Blueprint(std::string, bp_comp, bp_comp, bp_comp);

};

#endif // BLUEPRINT_H
