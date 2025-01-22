#ifndef MAGICALPET_HPP
#define MAGICALPET_HPP

class MagicalPet{
    
    public:
        // MagicalPet();
        // ~MagicalPet();

        //Pure virtual methods: 
        virtual void feed(int amount) = 0;
        virtual void play() = 0;
        virtual void heal() = 0;
        virtual void train() = 0;
        virtual void showStatus() = 0;
};

//MagicalPet::~MagicalPet(){}

#endif