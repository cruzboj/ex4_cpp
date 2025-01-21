#ifndef DRAGONGOHTCHI_HPP
#define DRAGONGOHTCHI_HPP

#include "MagicalPet.hpp"
#include "MagicalException.hpp"

class DragonGotchi : public MagicalPet{
    int hunger;     //cap at 20
    int happiness;  //cap at 50

    public:
        DragonGotchi() : hunger(0), happiness(10) {};
        ~DragonGotchi();
        void feed(int amount);
        void play();
        void heal();
        void train();
        void showStatus();
};


void DragonGotchi::feed(int amount){
    if(amount < 0 )
        std::cout << "Error: Negative feed amount\n";
    else if(amount > 10)
        std::cout << "Error: Feed amount too high for Dragon!";
    else if(hunger <= 20 && happiness <= 50){
        hunger += amount;
        happiness += amount/2;
    }
}

void DragonGotchi::play(){
    if(hunger >= 15)
        std::cout << "Error: Dragon is too hungry to play!";
    else
        if(hunger -5 > 0)
            hunger -= 5;
        if(happiness + 3 <= 50)
        happiness += 3;
}

//need to fix when you heal but hunger or happy wont enter if() 
void DragonGotchi::heal(){
    if(hunger -3 > 0)
        hunger -= 3;
    if(happiness + 5 <= 50)
        happiness += 5;
}

void DragonGotchi::train(){
    if(hunger + 2 <= 20)
        hunger += 2;
    if(happiness -2 > 0)
        happiness -= 2;
}

void DragonGotchi::showStatus(){
    std::cout << " === PhoenixGotchi Status === ";
    std::cout << "Hunger: [" << hunger << "] ";
    std::cout << "Happiness: [" << happiness << "]\n";
}
#endif