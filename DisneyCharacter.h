#ifndef DISNEYCHARACTER_H
#define DISNEYCHARACTER_H

#include <iostream>
#include <stdio.h>
#include <cstdio>

using namespace std;

class DisneyCharacter {
private:
	string name;
	string creationDate;
	int numMovies;
	char whichPark;

public:
    // Constructors
    DisneyCharacter(const string& name, const string& creationDate, int numMovies, char whichPark);
    DisneyCharacter(const string& name, const string& creationDate);

    // Destructor
    ~DisneyCharacter();

    // Accessors
    string getName() const;
    string getCreationDate() const;
    int getNumMovies() const;
    char getWhichPark() const;

    // Mutators
    bool setNumMovies(int numMovies);
    bool setWhichPark(char whichPark);

    // Public methods
    void ShowInfo() const;
    bool PlaceCharacter(char whichPark);
    void SameMovies(DisneyCharacter& anotherCharacter);
};

#endif // DISNEYCHARACTER_H