#ifndef MODULE_H
#define MODULE_H
#include <iostream>
#include <string>
using namespace std;

class Module {
    private:
        string title;
    public:
        //Constructors
        Module();
        Module(string);

        //Getters and setters
        string getTitle();
        void setTitle(string);

        //Parent class stuff
        virtual void init();
};

#endif