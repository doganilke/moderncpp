#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    rational obj(3,6);
    rational obj2(1,3);
    rational dd=obj+obj2;
    ++dd;
    --dd;
    dd.printRationalNumber();
    dd=dd-obj;
    dd.printRationalNumber();
    dd=dd*obj;
    dd.printRationalNumber();
    dd=dd/obj;
    dd.printRationalNumber();
    std::cout<<"ilke "<<dd<<std::endl;
    std::cin>>dd;
    dd.printRationalNumber();
    return 0;
}

