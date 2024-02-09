#include "DisneyCharacter.h"
#include <iostream>

// Constructor with all data members
DisneyCharacter::DisneyCharacter(const string& name, const string& creationDate, int numMovies, char whichPark)
    : name(name), creationDate(creationDate), numMovies(numMovies) {
    // Truncate name if longer than 50 characters
    if (name.length() > 50)
        this->name = name.substr(0, 46) + " ...";
    // Validate whichPark and set to 'N' if invalid
    if (whichPark != 'M' && whichPark != 'S' && whichPark != 'A' && whichPark != 'E' && whichPark != 'C' && whichPark != 'N')
        this->whichPark = 'N';
    else
        this->whichPark = whichPark;
    // Ensure numMovies is non-negative
    if (numMovies < 0)
        this->numMovies = 0;
}

// Constructor with default values for numMovies and whichPark
DisneyCharacter::DisneyCharacter(const string& name, const string& creationDate)
    : DisneyCharacter(name, creationDate, 0, 'N') {}

// Destructor
DisneyCharacter::~DisneyCharacter() {
    cout << name << " destroyed." << endl;
}

// Accessors
string DisneyCharacter::getName() const {
    return name;
}

string DisneyCharacter::getCreationDate() const {
    return creationDate;
}

int DisneyCharacter::getNumMovies() const {
    return numMovies;
}

char DisneyCharacter::getWhichPark() const {
    return whichPark;
}

// Mutators
bool DisneyCharacter::setNumMovies(int numMovies) {
    if (numMovies >= 0) {
        this->numMovies = numMovies;
        return true;
    }
    return false;
}

bool DisneyCharacter::setWhichPark(char whichPark) {
    if (whichPark == 'M' || whichPark == 'S' || whichPark == 'A' || whichPark == 'E' || whichPark == 'C' || whichPark == 'N') {
        this->whichPark = whichPark;
        return true;
    }
    return false;
}

// Public methods
void DisneyCharacter::ShowInfo() const {
    cout << "Name: " << name << endl;
    cout << "Creation Date: " << creationDate << endl;
    cout << "Number of Movies: " << numMovies << endl;
    cout << "Which Park: " << whichPark << endl;
}

bool DisneyCharacter::PlaceCharacter(char whichPark) {
    if (whichPark == 'M' || whichPark == 'S' || whichPark == 'A' || whichPark == 'E' || whichPark == 'C' || whichPark == 'N') {
        this->whichPark = whichPark;
        return true;
    }
    return false;
}

void DisneyCharacter::SameMovies(DisneyCharacter& anotherCharacter) {
    numMovies = anotherCharacter.getNumMovies();
}