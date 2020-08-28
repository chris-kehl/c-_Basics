//
//  main.cpp
//  weaponStoreGame
//
//  Created by Chris Kehl on 7/25/20.
//  Copyright © 2020 Chris Kehl. All rights reserved.
//

#include <iostream>
#include <string>

//includes the code for the weapons store game.

int main(void)
{
    using std::cout;
    using std::cin;
    using std::string;
    string name;
    cout << "Welcome to the weapon store, nobel knight."
         << " Come to equip the army again?\n"
         << "What is your name? ";
    cin >> name;
    cout << "Well then, Sir " << name.c_str()
    << ", let's get shopping\n";
    double gold = 50.0;
    int silver = 8;
    const double SILVERPERGOLD = 6.7;
    const double BROADSWORDCOST = 3.6;
    unsigned short broadswords;
    cout << "You have " << gold << " gold pieces and "
         << silver << " silver." << "\nThat is equal to ";
    gold += silver / SILVERPERGOLD;
    cout << gold << " gold.\n";
    cout << "How many broadswords would you like to buy?"
         << " (3.6 gold each) ";
    cin >> broadswords;
    gold = gold - broadswords * BROADSWORDCOST;
    cout << "\nThank you. You have " << gold << " left.\n";
    silver = (int)((gold - (int)gold) * SILVERPERGOLD);
    gold = (double)((int)(gold));
    cout << "That is equal to " << gold << " gold and "
         << silver << " silver. \n"
         << "thank you for shopping at the Weapon Store. "
         << "Have a nice day, Sir " << name.c_str() << "\n";
    return 0;
}
