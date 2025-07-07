#include"/home/maxim/Рабочий стол/test/Headers/IPrintable.h"
void IPrintable::Print(){
    std::cout<<"IPrintable";
}
IPrintable::~IPrintable(){
    std::cout<<"Base"<<std::endl;
}