// week-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Animal.h"
#include"Frisian.h"
#include"Sheep.h"
#include<vector>

int main()
{
    Animal* con;
    int num = 0;

    con = new Sheep();

    std::cout << "Enter the number of objects you want to create" << std::endl;

    std::cin >> num;
    
    std::vector<Animal*> container(num);

    for (int i = 0; i < container.size();){
        container[i] = new Sheep();
        if (i + 1 >= container.size()) {
            break;
        }
        container[i + 1] = new Cow();
        if(i + 2 >= container.size()){
        
            break;
        }
        container[i + 2] = new Frisian();
        i+= 3;
    }

    for (auto x : container) {
        x->speak();
    }

    for (auto x : container) {
        delete x;
    }

    return 0;
    
}


