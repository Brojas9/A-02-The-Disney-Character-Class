#ifndef DISNEYCHARACTER_H
#define DISNEYCHARACTER_H

#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996) // required by Visual Studio

using namespace std;

//Constants
const int nameMax = 50;
const int dateMax = 50;

/* -- this is a CLASS COMMENT --
    NAME	:	DisneyCharacter
    PURPOSE :	The purpose of this class is to represent
                a character from the Disney universe.
*/
class DisneyCharacter 
{
    /* ====================================== */
    /*              PRIVATE                   */
    /* ====================================== */
private:
    /* -------------- CONSTANTS ------------- */
    /* -------------- ATTRIBUTES ------------ */
	char name[nameMax + 1];
	char creationDate[dateMax + 1];
	int numMovies;
	char whichPark;

    /* ---------- METHOD PROTOTYPES --------- */
    char* getName();
    char* getCreationDate();
    int getNumMovies();
    char getWhichPark();

    /* ====================================== */
    /*              PUBLIC                    */
    /* ====================================== */
public:
    /* -------------- ATTRIBUTES ------------ */
    /* ---------- METHOD PROTOTYPES --------- */
    void ShowInfo();
    bool PlaceCharacter(char whichPark);
    void SameMovies(DisneyCharacter& anotherCharacter);
    
    DisneyCharacter(const char* name, const char* creationDate, int numMovies, char whichPark); // Constructors
    DisneyCharacter(const char* name, const char* creationDate);                                // Constructors
    ~DisneyCharacter();                                                                         // Destructor

    
    bool setNumMovies(int numMovies);                                                           // Mutator
    bool setWhichPark(char whichPark);                                                          // Mutator 
};

#endif // DISNEYCHARACTER_H