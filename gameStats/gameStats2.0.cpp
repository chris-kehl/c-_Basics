// Game Stats 2.0
// Demonstrates arithmetic operations with variables

#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    unsigned int score = 5000;
    cout << "score: " << score << endl;

    // alternating the values of a variable
    score = score + 100;
    cout << "score: " << score << endl;

    // combined assignment operator
    score += 100;
    cout << "score: " << score << endl;

    //increment operators
    // note you can put ++ before or after 
    
    int lives = 3;
    ++lives;
    cout << "lives: " << lives << endl;

    lives = 3;
    lives++;
    cout << "lives: " << lives << endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    lives = 3;
    bonus = lives++ * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    // integer wrap around
    // int max value it can hold is 4294967295
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;

    return 0;

}