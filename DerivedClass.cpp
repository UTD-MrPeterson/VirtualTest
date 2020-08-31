//
// Created by Erik Peterson on 8/31/20.
//

#include "DerivedClass.h"
#include <iostream>

using namespace std;

void DerivedClass::nonVirtualMethod() const {
    cout << "Derived class nonVirtualMethod()" << endl;
}

void DerivedClass::virtualMethod() const {
    cout << "Derived class virtualMethod()" << endl;
}

void DerivedClass::pureVirtualMethod() const {
    cout << "Derived class pureVirtualMethod" << endl;
}
