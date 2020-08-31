//
// Created by Erik Peterson on 8/31/20.
//

#include "BaseClass.h"
#include <iostream>

using namespace std;

void BaseClass::nonVirtualMethod() const {
    cout << "BASE CLASS nonVirtualMethod()" << endl;
}

void BaseClass::virtualMethod() const {
    cout << "BASE CLASS virtualMethod" << endl;
}
