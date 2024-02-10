#include "DisneyCharacter.h"
/*  -- Method Header Comment
    Name	: DisneyCharacter -- CONSTRUCTOR
    Purpose : to instantiate a new DisneyCharacter object - given a set of attribute values
    Inputs	:	newName			String		name of the DisneyCharacter
                newBreed		String		breed of the dog
                newHairLength	int			hairless, short, medium, long
                newSize			int			Toy, Small, Medium, Large
    Outputs	:	NONE
    Returns	:	Nothing
*/

// Constructor with all data members
DisneyCharacter::DisneyCharacter(const char* name, const char* creationDate, int numMovies, char whichPark): numMovies(numMovies), whichPark(whichPark)
{   
    // Truncate name if longer than 50 characters
    strncpy(this->name, name, 50);
    this->name[50] = '\0';
   
    strncpy(this->creationDate, creationDate, 10);
    this->creationDate[10] = '\0';
   
    // Ensure whichPark is valid, mark character as not placed if invalid
    if (whichPark != 'M' && whichPark != 'S' && whichPark != 'A' && whichPark != 'E' && whichPark 
        != 'C' && whichPark != 'N') 
    {
        this->whichPark = 'N';
    }
}

// Constructor with default values for numMovies and whichPark
DisneyCharacter::DisneyCharacter(const char* name, const char* creationDate)
    : DisneyCharacter(name, creationDate, 0, 'N') {}

// Destructor
DisneyCharacter::~DisneyCharacter()
{
    printf("%s destroyed.\n", name);
}

// Accessors
char* DisneyCharacter::getName(void) 
{
    return name;
}

char* DisneyCharacter::getCreationDate(void) 
{
    return creationDate;
}

int DisneyCharacter::getNumMovies() 
{
    return numMovies;
}

char DisneyCharacter::getWhichPark() 
{
    return whichPark;
}

// Mutators
bool DisneyCharacter::setNumMovies(int numMovies) 
{
    if (numMovies >= 0) 
    {
        this->numMovies = numMovies;
        return true;
    }
    return false;
}

bool DisneyCharacter::setWhichPark(char whichPark) 
{
    if (whichPark == 'M' || whichPark == 'S' || whichPark == 'A' 
        || whichPark == 'E' || whichPark == 'C' || whichPark == 'N') 
    {
        this->whichPark = whichPark;
        return true;
    }
    return false;
}

// Public methods
void DisneyCharacter::ShowInfo() 
{
    printf("Name: %s\n", name);
    printf("Creation Date: %s\n", creationDate);
    printf("Number of Movies: %d\n", numMovies);
    printf("Which Park: %c\n\n", whichPark);
}

bool DisneyCharacter::PlaceCharacter(char whichPark) 
{
    if (setWhichPark(whichPark)) 
    {
        return true;
    }
    return false;
}

void DisneyCharacter::SameMovies(DisneyCharacter& anotherCharacter) 
{
    numMovies = anotherCharacter.getNumMovies();
}