#ifndef MAGICALEXCEPTION_HPP
#define MAGICALEXCEPTION_HPP

using namespace std;
#include <exception>
#include <cstring>

class MagicalException : public exception{
    char * msg;
    public:
        MagicalException(const char* m){
            msg = new char[strlen(m)+1];
            strcpy(msg, m); 
        }
        char * what(){return msg;}

};

#endif