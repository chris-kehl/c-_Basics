//
//  main.cpp
//  Elven_Interger_game
//
//  Created by Chris Kehl on 7/23/20.
//  Copyright © 2020 Chris Kehl. All rights reserved.
//

#include <iostream>

int main(void)
{
    using std::cout;
    using std::cin;
    int intWarriors;
    double doubleWarriors;
    float floatWarriors;
    cout << "The village of the elves is being attacked by dragons.";
    cout << "In order to save them, you must create each kind of "
         << "data type warrior to defend the elven city.\n\n";
    cout << "How many int warriors do you want to send out?";
    cin >> intWarriors;
    cout << "\nLuckily, each int warrior has a strength of " <<
            sizeof(intWarriors) << ". \nwhich almost defeats the " <<
            "blue dragons.\n";
    cout << "\nQuick! How many double warriors should we send?";
    cin >> doubleWarriors;
    cout << "\n" << doubleWarriors;
    cout << "double warriors attack the last few bluw dragons.\n"
         << "They kill " << sizeof(doubleWarriors) << " blue dragons."
         << "All of the blue dragons are now dead.\n\n";
    cout << "How many float warriors do you send out?";
    cin >> floatWarriors;
    cout << "\nEach of the " << floatWarriors <<" float warrior shoots ";
    cout << sizeof(floatWarriors) << " arrows.\n";
    cout << "This is just enough to kill the green dragons.\n";
    cout << "Congradulations, you have saved the elves!\n";
    
    
    
    return 0;
}
