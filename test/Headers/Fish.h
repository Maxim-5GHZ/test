#include "IPrintable.h"
#pragma once
class Fish:public IPrintable{
public:
    virtual void Print()override;
    ~Fish();
};

