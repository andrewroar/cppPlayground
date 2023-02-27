// playground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Person.h"
#include "Pokemon.h"

int main()
{

    //Person andrew(2, "Andrew123");
    //std::cout << andrew.getName() << "Hello World!\n";
    //std::cout << andrew.getPrivateName() << std::endl;
    //std::cout << andrew.randomNum << std::endl;
    //delete andrew;

    Pokemon pikachu("Pika");
    std::cout << pikachu.name << std::endl;
    std::cout << pikachu.showTrue() << std::endl;
    return 0;
}


