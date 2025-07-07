#include"/home/maxim/Рабочий стол/test/Headers/Animal.h"
#include"/home/maxim/Рабочий стол/test/Headers/Fish.h"
#include"/home/maxim/Рабочий стол/test/Headers/Bird.h"
#include"/home/maxim/Рабочий стол/test/Headers/IPrintable.h"
#include<vector>

using namespace std;
int main(){
    
    std::vector<IPrintable*> list;
    Animal cow, wolf;
    Fish shark,cod,tuna;
    Bird parrot,eagle,sparrow, penguin;
    
    list.push_back(&cow);
    list.push_back(&wolf);
    list.push_back(&tuna);
    list.push_back(&cod);
    list.push_back(&shark);
    list.push_back(&parrot);
    list.push_back(&eagle);
    list.push_back(&sparrow);
    list.push_back(&penguin);

    for(int i=0;i<list.size();i++){
        list[i]->Print();
    }

    while(list.size()!=0){
        list.pop_back();
    }
    
    return 0;
}