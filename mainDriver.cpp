#include "headers/Main.h"
using namespace std;

int main() {
    
    Player player("Steve", 0);
    player.setScore(15);
    cout << player.getName() << endl;
    cout << player.getScore() << endl;

    return(0);
}