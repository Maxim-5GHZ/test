#include "IPrintable.h"
#pragma once
class Animal:public IPrintable{
public:
    virtual void Print()override;
    ~Animal();
};

