#include"/home/maxim/Рабочий стол/test/Headers/Bird.h"

void Bird::Print() {
    std::cout<<"Bird"<<std::endl;
};

Bird::~Bird(){
    std::cout<<"sub"<<std::endl;
}