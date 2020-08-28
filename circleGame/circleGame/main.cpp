
//  circleGame
//
//  Created by Chris Kehl on 7/25/20.
//  Copyright © 2020 Chris Kehl. All rights reserved.
//

#include <iostream>

//calculates the area and circumference of a circle
int main()
{
    using std::cout;
    using std::cin;
    typedef double d;
    const d PI = 3.141592;
    d radius, circumference, area;
    cout << "Welcome to the circle creator!\n";
    cout << "What would you like the radious of the circle to be? ";
    cin >> radius;
    
    area = PI * radius * radius;
    circumference = PI * (radius * 2);
    
    cout << "The area of the circle is: " << area << "\n";
    cout << "The circumference of the circle is " <<  circumference << "\n";
    cout << "Thank you for playing the circumference game \n";
    return 0;
}
