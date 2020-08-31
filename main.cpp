#include <iostream>

#include "DerivedClass.h"

using namespace std;

void asBase(const BaseClass& baseObj) {
    cout << "\"Base\" object:" << endl;
    baseObj.nonVirtualMethod();
    baseObj.virtualMethod();
    baseObj.pureVirtualMethod();
}

void asDerived(const DerivedClass& derivedObj) {
    cout << "Derived object:" << endl;
    derivedObj.nonVirtualMethod();
    derivedObj.virtualMethod();
    derivedObj.pureVirtualMethod();
}

int main() {
    DerivedClass myDerived;

    asBase(myDerived);
    asDerived(myDerived);

    return 0;
}
