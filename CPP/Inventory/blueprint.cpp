#include "blueprint.h"
#include "inventory.h"
#include <iostream>

typedef std::tuple<std::string, int> bp_comp;

Blueprint::Blueprint(std::string ename, bp_comp elementq1, bp_comp elementq2, bp_comp elementq3)
{
    name = ename;
    element1 = elementq1;
    element2 = elementq2;
    element3 = elementq3;
}


