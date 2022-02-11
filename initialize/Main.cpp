#include "../headers/Main.h"

Player::Player() {

    playerName = "";
    playerScore = 0;

}

Player::Player(string name, int score) {
    
    playerName = name;
    playerScore = score;

}

string Player::getName() {
    return(playerName);
}

int Player::getScore() {
    return(playerScore);
}

void Player::setName(string newName) {
    playerName = newName;
}

void Player::setScore(int newScore) {
    playerScore = newScore;
}