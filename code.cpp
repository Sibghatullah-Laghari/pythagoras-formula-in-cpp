/*
 * pythagoras.cpp
 * Calculate the hypotenuse of a right-angled triangle.
 * Last updated: 2026-07-18
 *
 * Formula: h = sqrt(p² + b²)
 * where p = perpendicular, b = base, h = hypotenuse.
 *
 * Possible improvements:
 *   - Validate input (non-negative numbers).
 *   - Allow user to choose which side to calculate.
 *   - Loop for multiple calculations.
 */

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    double h, p, b;

    cout << "Enter the perpendicular and base sides of your triangle to calculate hypotenuse:" << endl;
    cin >> p >> b;

    // Apply Pythagoras theorem
    h = sqrt(pow(p, 2) + pow(b, 2));

    cout << "The hypotenuse of your triangle is: " << h << " units" << endl;

    return 0;
}
