#include <iostream>
#include "DragonGotchi.hpp"


DragonGotchi::~DragonGotchi(){
    std::cout << "DragonGotchi destructor called\n";
}

void DragonGotchi::feed(int amount){
    if(amount < 0 )
        throw MagicalException("Error: Negative feed amount");
    else if(amount > 10)
        throw MagicalException("Error: Feed amount too high for Dragon!");
    else if(hunger <= 20 && happiness <= 50){
        hunger += amount;
        happiness += amount/2;
    }
}

void DragonGotchi::play(){
    if(hunger >= 15)
        throw MagicalException("Error: Dragon is too hungry to play!");
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
    std::cout << " === DragonGotchi Status === ";
    std::cout << "Hunger: [" << hunger << "] ";
    std::cout << "Happiness: [" << happiness << "]\n";
}