#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {

    private:
        string playerName;
        unsigned int playerScore;

    public:
        Player();
        Player(string, int);

        // Methods
        string getName();
        int getScore();
        void setName(string);
        void setScore(int);

};

class VectorList {

    private:
        vector<int> list;

};

#endif