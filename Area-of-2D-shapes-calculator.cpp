#include <iostream>
#include <cmath> // Used for math functions included in this program. 
using namespace std;

/* This program calculates the areas of 2D shapes and returns the results
to the user. 
*/

// Function prototypes:
// Displays shape menu and takes input. 
void select_shape(const string prompt, int & shapeNum);
// 1st parameter is for user entry, 2nd is for user entered shape. 

// Computes area of a rectangle. 
double area_rect(double l, double w);
// 1st parameter is length, 2nd is width.  

// Computes area of a triangle. 
double area_triangle(double b, double h);
// 1st paramter is base, 2nd is height. 

// Computes area of a square. 
double area_square(double l); 
// 1st parameter is the side length. 

// Computes area of a trapezoid.
double area_trapezoid(double b1, double b2, double h);
// 1st parameter is base 1, 2nd is base 2, 3rd is height. 

// Computes area of a parallelogram. 
double area_pgram(double b, double h);
// 1st parameter is base, 2nd is height. 

// Computes area of a circle.
double area_circle(double r);
// 1st parameter is radius. 

// Computes area of a ellipse. 
double area_ellipse(double r1, double r2); 
// 1st parameter is radius 1, 2nd is radius 2.

// Exits or continues program. 
void exit_or_continue(const string & prompt, int & exitNum); 
// 1st parameter is user prompt, 2nd is user entered number. 

int main()
{
    // Program variables. 
    int shapeNum; // Number user enters for area computation. 
    int exitNum; // Number to continue or exit program. 
    double l; // For length. 
    double w; // For width. 
    double b1, b2; // For base 1 and 2 (trapezoid). 
    double r; // For radius. 
    double r1, r2; // For radius 1 and 2(ellipse).
    double b; // For base. 
    double h; // For height. 
    
    // Call function for user entry. 
    select_shape("Enter number from menu: ", shapeNum); 
    
    // Create branching for selections.
    // Rectangle branch. 
    if(shapeNum == 1) { 
        // User prompt. 
        cout << "Enter length and width: ";
        // Take user input 
        cin >> l >> w; 
        
        // While loop to make sure values are positive. 
        while(l <= 0 || w <= 0)
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter length and width: "; 
            cin >> l >> w;
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of rectangle: " << area_rect(l, w) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Triangle branch. 
    else if(shapeNum == 2) {
        // User prompt. 
        cout << "Enter base and height: ";
        // Take user input. 
        cin >> b >> h;
        
        // While loop to make sure values are positive. 
        while(b <= 0 || h <= 0)
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter base and height: "; 
            cin >> b >> h; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of triangle is: " << area_triangle(b,h) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Square branch. 
    else if(shapeNum == 3) {
        // User prompt. 
        cout << "Enter length: ";
        // User input. 
        cin >> l; 
        
        // While loop to make sure value is positive. 
        while (l <= 0)
        {
            cout << "Must enter positive, non-zero number." << endl;
            cout << "Enter length: "; 
            cin >> l; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of square is: " << area_square(l) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Trapezoid branch. 
    else if(shapeNum == 4) {
        // User prompt. 
        cout << "Enter base 1, base 2, and height: ";
        // User input. 
        cin >> b1 >> b2 >> h; 
        
        // While loop to make sure values are positive. 
        while (b1 <= 0 || b2 <= 0 || h <= 0) 
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter base 1, base 2, and height: ";
            cin >> b1 >> b2 >> h; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of trapezoid is: " << area_trapezoid(b1, b2, h) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Parallelogram branch. 
    else if(shapeNum == 5) {
        // User prompt. 
        cout << "Enter base and height: "; 
        // User input. 
        cin >> b >> h; 
        
        // While loop to make sure values are positive. 
        while(b <= 0 || h <= 0)
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter base and height: ";
            cin >> b >> h; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of parallelogram is: " << area_pgram(b, h) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Circle branch. 
    else if(shapeNum == 6) {
        // User prompt. 
        cout << "Enter radius: "; 
        // User input. 
        cin >> r; 
        
        // While loop to make sure value is positive. 
        while (r <= 0)
        {
            cout << "Must enter positive, non-zero number." << endl;
            cout << "Enter radius: "; 
            cin >> r; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of circle is: " << area_circle(r) / M_PI;
        cout << "π (" << area_circle(r) << ") square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Ellipse branch. 
    else if(shapeNum == 7) {
        // User prompt. 
        cout << "Enter radius 1 and radius 2: "; 
        // User input.
        cin >> r1 >> r2; 
        
        // While loop to make sure values are positive. 
        while(r1 <= 0 || r2 <= 0)
        {
            cout << "Must enter positive, non-zero number." << endl;
            cout << "Enter radius 1 and radius 2: ";
            cin >> r1 >> r2; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of ellipse is: " << area_ellipse(r1, r2) / M_PI;
        cout << "π (" << area_ellipse(r1, r2) << ") square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }

    return 0;
}

void select_shape(const string prompt, int & shapeNum) 
{
    // User greeting and menu.  
    cout<<"Welcome to the 2D shape area calculator!" << endl;
    cout << "Shapes available:" << endl;
    cout << "Enter 1 for Rectangle." << endl;
    cout << "Enter 2 for Triangle." << endl;
    cout << "Enter 3 for Square." << endl;
    cout << "Enter 4 for Trapezoid." << endl;
    cout << "Enter 5 for Parallelogram." << endl;
    cout << "Enter 6 for Circle." << endl;
    cout << "Enter 7 for Ellipse." << endl;
    
    // User prompt. 
    cout << prompt;
    cin >> shapeNum; 
    
    // Loop to make sure user input is valid. 
    while(shapeNum < 1 || shapeNum > 7)
    {
        cout << "Invalid number. Enter number from menu: " << endl;
        cin >> shapeNum; 
    }
}

// Function definitions: 
double area_rect(double l, double w)
{
    return l*w; 
}

double area_triangle(double b, double h)
{
    return (1/2)*b*h; 
}

double area_square(double l)
{
    return pow(l, 2);
}

double area_trapezoid(double b1, double b2, double h)
{
    return ((b1+b2)/2)*h; 
}

double area_pgram(double b, double h)
{
    return b*h; 
}

double area_circle(double r)
{
    return pow(r,2)*M_PI; 
}

double area_ellipse(double r1, double r2)
{
    return M_PI*r1*r2; 
}

void exit_or_continue(const string & prompt, int & exitNum)
{
    int shapeNum; // Number from menu. 
    // User prompt. 
    cout << prompt; 
    cin >> exitNum; 
    
    // While loop to make sure number entered is correct. 
    while(exitNum <= -1 || exitNum >= 2)
    {
        cout << "Invalid number." << endl;
        cout << "Enter 0 to exit program, 1 to find the area of another shape: ";
        cin >> exitNum;
    }
    
    cout << endl;
    
    // Branching for decision. 
    if(exitNum == 0) {
        cout << "Thank you for using this program! Goodbye!" << endl; 
    }
    
    else {
        // Call select_shape to start process over. 
        select_shape("Enter number from menu: ", shapeNum); 
    
    // Program variables. 
    int exitNum; // Number to continue or exit program. 
    double l; // For length. 
    double w; // For width. 
    double b1, b2; // For base 1 and 2 (trapezoid). 
    double r; // For radius. 
    double r1, r2; // For radius 1 and 2(ellipse).
    double b; // For base. 
    double h; // For height. 
    
    // Create branching for selections.
    // Rectangle branch. 
    if(shapeNum == 1) { 
        // User prompt. 
        cout << "Enter length and width: ";
        // Take user input 
        cin >> l >> w; 
        
        // While loop to make sure values are positive. 
        while(l <= 0 || w <= 0)
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter length and width: "; 
            cin >> l >> w;
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of rectangle: " << area_rect(l, w) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Triangle branch. 
    else if(shapeNum == 2) {
        // User prompt. 
        cout << "Enter base and height: ";
        // Take user input. 
        cin >> b >> h;
        
        // While loop to make sure values are positive. 
        while(b <= 0 || h <= 0)
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter base and height: "; 
            cin >> b >> h; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of triangle is: " << area_triangle(b,h) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Square branch. 
    else if(shapeNum == 3) {
        // User prompt. 
        cout << "Enter length: ";
        // User input. 
        cin >> l; 
        
        // While loop to make sure value is positive. 
        while (l <= 0)
        {
            cout << "Must enter positive, non-zero number." << endl;
            cout << "Enter length: "; 
            cin >> l; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of square is: " << area_square(l) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Trapezoid branch. 
    else if(shapeNum == 4) {
        // User prompt. 
        cout << "Enter base 1, base 2, and height: ";
        // User input. 
        cin >> b1 >> b2 >> h; 
        
        // While loop to make sure values are positive. 
        while (b1 <= 0 || b2 <= 0 || h <= 0) 
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter base 1, base 2, and height: ";
            cin >> b1 >> b2 >> h; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of trapezoid is: " << area_trapezoid(b1, b2, h) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Parallelogram branch. 
    else if(shapeNum == 5) {
        // User prompt. 
        cout << "Enter base and height: "; 
        // User input. 
        cin >> b >> h; 
        
        // While loop to make sure values are positive. 
        while(b <= 0 || h <= 0)
        {
            cout << "Must enter positive, non-zero number(s)." << endl;
            cout << "Enter base and height: ";
            cin >> b >> h; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of parallelogram is: " << area_pgram(b, h) << " square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Circle branch. 
    else if(shapeNum == 6) {
        // User prompt. 
        cout << "Enter radius: "; 
        // User input. 
        cin >> r; 
        
        // While loop to make sure value is positive. 
        while (r <= 0)
        {
            cout << "Must enter positive, non-zero number." << endl;
            cout << "Enter radius: "; 
            cin >> r; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of circle is: " << area_circle(r) / M_PI;
        cout << "π (" << area_circle(r) << ") square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    
    // Ellipse branch. 
    else if(shapeNum == 7) {
        // User prompt. 
        cout << "Enter radius 1 and radius 2: "; 
        // User input.
        cin >> r1 >> r2; 
        
        // While loop to make sure values are positive. 
        while(r1 <= 0 || r2 <= 0)
        {
            cout << "Must enter positive, non-zero number." << endl;
            cout << "Enter radius 1 and radius 2: ";
            cin >> r1 >> r2; 
        }
        
        cout << endl;
        // Display results. 
        cout << "Area of ellipse is: " << area_ellipse(r1, r2) / M_PI;
        cout << "π (" << area_ellipse(r1, r2) << ") square units." << endl;
        // Call function to prompt user to continue or exit program. 
        exit_or_continue("Enter 0 to exit program, 1 to find the area of another shape", exitNum); 
    }
    }
}