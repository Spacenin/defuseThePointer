#include "../headers/Module.h"

//Constructors
Module::Module() {
    title = "N/A";
}

Module::Module(string title) {
    this->title = title;
}

//Getters and setters
string Module::getTitle() {
    return(title);
}

void Module::setTitle(string title) {
    this->title = title;
}

void Module::init() {
    std::cout << "initialized parent" << std::endl;
}