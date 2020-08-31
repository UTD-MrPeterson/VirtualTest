//
// Created by Erik Peterson on 8/31/20.
//

#ifndef UNTITLED1_BASECLASS_H
#define UNTITLED1_BASECLASS_H


class BaseClass {
public:
    void nonVirtualMethod() const;
    virtual void virtualMethod() const;
    virtual void pureVirtualMethod() const = 0;
};


#endif //UNTITLED1_BASECLASS_H
