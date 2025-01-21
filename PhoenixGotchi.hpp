#ifndef PHOENIXGOTCHI_HPP
#define PHOENIXGOTCHI_HPP

#include "MagicalPet.hpp"
#include "MagicalException.hpp"

class PhoenixGotchi : public MagicalPet{
    int hunger;     //cap at 30
    int happiness;  //cap at 40

    public:
        PhoenixGotchi() : hunger(5), happiness(5) {};
        ~PhoenixGotchi();
        void feed(int amount);
        void play();
        void heal();
        void train();
        void showStatus();
};


void PhoenixGotchi::feed(int amount){
    if(amount < 0 )
        std::cout << "Error: Negative feed amount\n";
    else if(amount > 10)
        std::cout << "Error: Feed amount too high for Dragon!";
    else if(hunger <= 30 && happiness <= 40){
        hunger += amount;
        happiness += amount/3;
    }
}

void PhoenixGotchi::play(){
    if(hunger >= 20)
        std::cout << "Error: Phoniex is too hungry to play!";
    else
        if(hunger -3 > 0)
            hunger -= 3;
        if(happiness + 5 <= 40)
        happiness += 5;
}

//need to fix when you heal but hunger or happy wont enter if() 
void PhoenixGotchi::heal(){
    if(hunger -2 > 0)
        hunger -= 2;
    if(happiness + 8 <= 40)
        happiness += 8;
}

void PhoenixGotchi::train(){
    if(hunger + 4 <= 30)
        hunger += 4;
    if(happiness -1 > 0)
        happiness -= 1;
}

void PhoenixGotchi::showStatus(){
    std::cout << " === PhoenixGotchi Status === ";
    std::cout << "Hunger: [" << hunger << "] ";
    std::cout << "Happiness: [" << happiness << "]\n";
}

#endif