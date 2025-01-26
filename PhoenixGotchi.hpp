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

        //geters
        int getHunger(){return hunger;}
        int getHappiness(){return happiness;}

        //setters
        void setHunger(int pHun){hunger = pHun;}
        void setHappiness(int pHap){happiness = pHap;}
};



#endif