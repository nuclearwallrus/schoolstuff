//*****************
//Program Name: GeometryCalculatorMenu
//Author: Austin Turner
//IDE Used: cloud9
//Cloud9 username: nuclearwalrus
//Cloud9 workspace name: intro
//Cloud9 folder: Weekly Assignments
//Cloud9 C++ file: geomcalcmenu.cpp
//Program description: Menu program for calculating area of different shapes.
//*****************

#include <iostream>
#include <cmath>
using namespace std;

int main() {

//constant PI
    const float PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912983367336244065664308602139494639522473719070217986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815981362977477130996051870721134999999837297804995105973173281609631859502445945534690830264252230825334468503526193118817101000313783875288658753320838142061717766914730359825349042875546873115956286388235378759375195778185778053217122680661300192787661119590921642019893809525720106548586327886593615338182796823030195203530185296899577362259941389124972177528347913151557485724245415069595082953311686172785588907509838175463746493931925506040092770167113900984882401285836160356370766010471018194295559619894676783744944825537977472684710404753464620804668425906949129331367702898915210475216205696602405803815019351125338243003558764024749647326391419927260426992279678235478163600934172164121; //1429 digits for accuracy
    
//Startup message
    cout << "This program will calculate the area of a shape!\n"
         << "Please choose from the menu below:\n\n";
    
//start of input loop
    bool kill = false;
 
    while (kill == false) {
    int choice;

//menu
    cout << "Geometry Calculator\n"
         << "1. Calculate the area of a circle\n"
         << "2. Calculate the area of a rectangle\n"
         << "3. Calculate the area of a triangle\n"
         << "4. Calculate the area of a square\n"
         << "5. Calculate the area of an ellipse\n"
         << "6. Calculate the area of a trapezoid\n"
         << "7. Quit\n"
         << "Enter your choice (1-7): ";
         //secret menu option 42
    cin >> choice;
   
//runs area calculation based on input choice
    if (choice == 1) { //circle calculation
        float rad;

        cout << "\n~~Circle Calculation~~ \n"
             << "Please enter the radius of the circle --> ";
        cin >> rad;
    
        cout << "\nThe area of the circle is " << PI*pow(rad,2) << endl << endl;
    }
    else if (choice == 2) { //rectangle calculation
        float length, width;
    
        cout << "~~\nRectangle Calculation~~ \n"
             << "Enter the length of the rectangle --> ";
        cin >> length;
    
        cout << "\nEnter the width of the rectangle --> ";
        cin >> width;

        cout << "\nThe area of the rectangle is " << length*width << endl << endl;
    }
    else if (choice == 3) { //triangle calculation
        float base, height;
    
        cout << "\n~~Triangle Calculation~~ \n"
             << "Enter the base of the triangle --> ";
        cin >> base;
    
        cout << "\nEnter the height of the triangle --> ";
        cin >> height;

        cout << "\nThe area of the triangle is " << (base)*(height)/2 << endl << endl;
    }
    else if (choice == 4) { //square calculation
        float side;

        cout << "\n~~Square Calculation~~ \n"
             << "Please enter the side length of the square --> ";
        cin >> side;

        cout << "\nThe area of the square is " << pow(side,2) << endl << endl;
    }
    else if (choice == 5) {
        float sMajor, sMinor;
        cout << "\n~~Ellipse Calculation~~ \n"
             << "Enter length of semi-major axis --> ";
        cin >> sMajor;
        
        cout << "\nEnter length of semi-minor axis --> ";
        cin >> sMinor;
        
        cout << "\nThe area of the ellipse is " << PI * sMajor * sMinor << endl << endl;
    }
    else if (choice == 6) {
        float base1, base2, height;
        cout << "\n~~Ellipse Calculation~~ \n"
             << "Enter length of base 1 --> ";
        cin >> base1;
        
        cout << "\nEnter length of base 2 --> ";
        cin >> base2;
        
        cout << "\nEnter height of trapezoid --> ";
        cin >> height;
        
        cout << "\nThe area of the ellipse is " << 0.5 * (base1 + base2) * height << endl << endl;
    }
    else if (choice == 7) kill = true; //quits the program
    else if (choice == 42) {
        cout << "\nThe answer to the ultimate question... but what is the question?\n";
        break;
    }
    else cout << "\nThat was not a choice, please select 1-7: \n\n"; //stupid proofing
    }
    
//End of program message
    cout << "\nGoodbye.";

    return 0;
}







/*
    
    cout << "******************************\n\n";
    
    
//square calculation
    float side, areaS;

    cout << "~~Square Calculation~~ \n"
         << "Please enter the side length of the square --> ";
    cin >> side;
    //calculates area for square
    areaC = pow(side,2); 
        
    cout << "\n\n The area of the square is " << areaC << endl << endl;
    
    cout << "******************************\n\n";
    
    
//triangle calculation
    float base, height, areaT;
    
    cout << "~~Triangle Calculation~~ \n"
         << "Enter the base of the triangle --> ";
    cin >> base;
    
    cout << "\nEnter the height of the triangle --> ";
    cin >> height;
    //calculates area for triangle
    areaT = (base)*(height)/2; 
    
    cout << "\n\n The area of the triangle is " << areaT << endl << endl;
    //triangles are the worst shape imo
    cout << "******************************\n\n";

//rectangle calculation
    float length, width, areaR;
    
    cout << "~~Rectangle Calculation~~ \n"
         << "Enter the length of the rectangle --> ";
    cin >> length;
    
    cout << "\nEnter the width of the rectangle --> ";
    cin >> width;
    //calculates area for rectangle
    areaR = length*width; 
    
    cout << "\n\n The area of the rectangle is " << areaR << endl << endl;
    
    cout << "******************************\n\n";

*/