#ifndef DISNEYCHARACTER_H
#define DISNEYCHARACTER_H
#include <string.h>
#include <stdio.h>
#pragma warning(disable: 4996) // required by Visual Studio

//Constants
const int maxLenN = 50;
const int maxLenD = 10;
const int nullT = 1;


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
	char name[maxLenN + nullT];
	char creationDate[maxLenD + nullT];
	int numMovies;
	char whichPark;

    /* ---------- METHOD PROTOTYPES --------- */
    char* getName(void);
    char* getCreationDate(void);
    int getNumMovies(void);
    char getWhichPark(void);

    /* ====================================== */
    /*              PUBLIC                    */
    /* ====================================== */
public:
    /* -------------- ATTRIBUTES ------------ */
    /* - MEMBER FUNCTIONS/METHOD PROTOTYPES - */
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