#include "DisneyCharacter.h"
#include <iostream>

int main() {

    DisneyCharacter mickey("Mickey", "1929-01-01", 100, 'M');
    DisneyCharacter minnie("Minnie", "1930-01-01");

    // Set number of Minnie's movies equal to Mickey's
    minnie.SameMovies(mickey);

    // Dump member values for Mickey and Minnie
    cout << "Mickey's Info:" << endl;
    mickey.ShowInfo();

    cout << "\nMinnie's Info:" << endl;
    minnie.ShowInfo();

    // Place Minnie in Epcot park
    minnie.PlaceCharacter('E');

    return 0;
}