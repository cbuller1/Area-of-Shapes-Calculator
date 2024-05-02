
//  Created by Cody Buller
// THIS PROGRAM IS USED TO CALCULATE THE AREA OF DIFFERENT OBJECTS

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
//Variables
    double length;
    double width;
    double radius;
    int shape;
    double base;
    double height;
//Constants
    const double pi = 3.14159; // pi for finding area of circle

// Get user to select shape
    cout << right << "--------This program will help you find the area of various shapes--------\n\n";
    cout << "Please enter a number for the following shapes then press enter\n";
    cout << "1: Square" << endl;
    cout << "2: Circle" << endl;
    cout << "3: Right Triangle" << endl;
    cout << "4: Quit Program" << endl;
// Switch-Case Selection of Shape
    cin >> shape;
    switch (shape)
    {
        // Find area of square and display it to user
        case 1: cout << "You Selected 'Square'.\n";
                cout << "Please enter the width, followed by the length (eg:2 4)\n";
                cin >> length >> width;
                cout << "The Area of your square is: " << length*width << endl;break;
        // Find area of circle and display to user
        case 2: cout << "You Selected 'Circle'.\n";
                cout << "Please enter the radius of your circle: \n";
                cin >> radius;
                cout << "The Area of your circle is: " << setprecision(2) << fixed << pi*(pow(radius,2.00)) << endl; break;
        
        // Find area of right triangle and display to user
        case 3: cout << "You Selected 'Right Triangle\n";
                cout << "Please enter the base, followed by the height (eg:6 4 )\n";
                cin >> base >> height;
                cout << "The area of your right triangle is: " << base*height/2 << endl; break;
        
        // Quit the Program
        case 4: cout << "You Selected 'Quit Program'\n"; break;
    }
    return 0;
}
