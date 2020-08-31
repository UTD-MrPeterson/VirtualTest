//
// Created by Erik Peterson on 8/31/20.
//

#ifndef UNTITLED1_DERIVEDCLASS_H
#define UNTITLED1_DERIVEDCLASS_H

#include "BaseClass.h"

class DerivedClass : public BaseClass {
public:
    void nonVirtualMethod() const;

    void virtualMethod() const override;

    void pureVirtualMethod() const override;
};


#endif //UNTITLED1_DERIVEDCLASS_H
