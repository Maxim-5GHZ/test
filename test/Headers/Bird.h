#include "IPrintable.h"
#pragma once
class Bird:public IPrintable{
public:
    virtual void Print()override;
    ~Bird();
};

