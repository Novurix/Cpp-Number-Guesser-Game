#include <iostream>
using namespace std;


static void initGuess(int guessingNumber) {

    int distance;

    int randomOperator = (rand()%2)+1;

    if (randomOperator == 2) {
        int randomSpace = (rand()%5)+1;
        distance = guessingNumber;
        
        distance -= randomSpace;
        cout << "my number is very close but bigger than " + to_string(distance) << endl;

    }
    else {
        int randomSpace = (rand()%5)+1;
        distance = guessingNumber;
        
        distance += randomSpace;

        cout << "my number is very close but smaller than " + to_string(distance) << endl;
    }

    string input;
    cin >> input;

    if (input == to_string(guessingNumber)) {
        cout << "you guessed my Number" << endl;
        initGuess((rand()%100)+1);
    }
    else {
        cout << "you didn't guess my number, try again" << endl;
        initGuess(guessingNumber);
    }
}

int main() {
    int guessingNumber = (rand()%100)+1;
    initGuess(guessingNumber);
    return 0;
}