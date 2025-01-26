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

        //getters
        int getHunger(){return hunger;}
        int getHappiness(){return happiness;}

        //setters
        void setHunger(int dHun){hunger = dHun;}
        void setHappiness(int dHap){happiness = dHap;}
};


#endif