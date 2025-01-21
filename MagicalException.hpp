#ifndef MAGICALEXCEPTION_HPP
#define MAGICALEXCEPTION_HPP


class MagicalException : public std::exception{
    public:
        MagicalException();
        ~MagicalException();
        void negativeFeed();
        void feedTooHigh();
        void hungryToPlay();
        void healError();
        void trainError();
};

#endif