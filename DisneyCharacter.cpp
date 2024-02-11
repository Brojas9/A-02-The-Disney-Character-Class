#include "DisneyCharacter.h"
/*  -- Method Header Comment
    Name	: DisneyCharacter -- CONSTRUCTOR
    Purpose : The purpose of this constructor is to instantiate (initialize) all 
              the member variables of the DisneyCharacter class. 
    Inputs	:	Name			    String		Name of the DisneyCharacter
                CreationDate		String		CreationDate of the DisneyCharacter
                NumMovies	        int			Number of movies
                whichPark			char		Initial of the park's name.
    Outputs	:	NONE
    Returns	:	Nothing
*/
DisneyCharacter::DisneyCharacter(const char* name, const char* creationDate, int numMovies, char whichPark): numMovies(numMovies), whichPark(whichPark)
{   
    // Truncate name if longer than 50 characters
    strncpy(this->name, name, maxLenN);
    this->name[maxLenN - nullT] = '\0';
    //If name is longer than 46 characters, append " …"
    if (strlen(name) > 46) 
    {
        strcat(this->name, " …"); 
    }

    // CreationDate not longer than 10 characters
    strncpy(this->creationDate, creationDate, maxLenD);
    this->creationDate[maxLenD - nullT] = '\0';
   
    // Checking if the initial of whichpark is valid.
    if (whichPark != 'M' && whichPark != 'S' && whichPark != 'A' && whichPark != 'E' && whichPark != 'C' && whichPark != 'N') 
    {
        this->whichPark = 'N';
    }
}


/*  -- Method Header Comment
    Name	: DisneyCharacter -- CONSTRUCTOR
    Purpose : Constructor for numMovies and whichPark
    Inputs	:	NumMovies	        int			 0
                whichPark			char	    'N'
    Outputs	:	NONE
    Returns	:	Nothing
*/
DisneyCharacter::DisneyCharacter(const char* name, const char* creationDate): DisneyCharacter(name, creationDate, 0, 'N') {}


/*  -- Method Header Comment
    Name	: DisneyCharacter -- DESTRUCTOR
    Purpose : The purpose is to destroy the DisneyCharacter object - free up the memory associated with the object
    Inputs	:	NONE
    Outputs	:	outputs a final message from the object before being destroyed
    Returns	:	Nothing
*/
DisneyCharacter::~DisneyCharacter()
{
    printf("%s destroyed.\n", name);
}


/*  -- Method Header Comment
    Name	:	getName
    Purpose :	is to provide access to the private member variable name, which stores the name of the Disney character.
    Inputs	:	NONE
    Outputs	:	NONE
    Returns	:	char* name
*/
char* DisneyCharacter::getName(void) 
{
    return name;
}


/*  -- Method Header Comment
    Name	:	getCreationDate
    Purpose :	is to provide access to the private member variable CreationDate, which stores the CreationDate of the Disney character.
    Inputs	:	NONE
    Outputs	:	NONE
    Returns	:	char* CreationDate
*/
char* DisneyCharacter::getCreationDate(void) 
{
    return creationDate;
}


/*  -- Method Header Comment
    Name	:	getNumMovies
    Purpose :	is to provide access to the private member variable numMovies, which stores the numMovies of the Disney character.
    Inputs	:	NONE
    Outputs	:	NONE
    Returns	:	int Number of Movies
*/
int DisneyCharacter::getNumMovies(void) 
{
    return numMovies;
}


/*  -- Method Header Comment
    Name	:	getWhichPark
    Purpose :	is to provide access to the private member variable whichPark, which stores the whichPark initial of the Disney character.
    Inputs	:	NONE
    Outputs	:	NONE
    Returns	:	char initial of Disney character park.
*/
char DisneyCharacter::getWhichPark(void) 
{
    return whichPark;
}


/*  -- Method Header Comment
    Name	:	setNumMovies
    Purpose :	To set the number of movies for the Disney character.****************
    Inputs	:	int numMovies
    Outputs	:	NONE
    Returns	:	bool 
*/
bool DisneyCharacter::setNumMovies(int numMovies) 
{
    if (numMovies >= 0) 
    {
        this->numMovies = numMovies;
        return true;
    }
    return false;
}


/*  -- Method Header Comment
    Name	:	setWhichPark
    Purpose :	To set the park designation for the Disney character.
    Inputs	:	char whichPark
    Outputs	:	NONE
    Returns	:	bool
*/
bool DisneyCharacter::setWhichPark(char whichPark) 
{
    if (whichPark == 'M' || whichPark == 'S' || whichPark == 'A' || whichPark == 'E' || whichPark == 'C' || whichPark == 'N') 
    {
        this->whichPark = whichPark;
        return true;
    }
    return false;
}


/*---Public methods /memeber functions
    Name	: ShowInfo
    Purpose :   To display information about the Disney character.
    Inputs	:	NONE
    Outputs	:	Displays the name, creation date, number of movies, and park designation of the Disney character.
    Returns	:	Nothing
*/
void DisneyCharacter::ShowInfo() 
{
    printf("Name: %s\n", name);
    printf("Creation Date: %s\n", creationDate);
    printf("Number of Movies: %d\n", numMovies);
    printf("Which Park: %c\n\n", whichPark);
}


/*  -- Mutator Header Comment
    Name	:	PlaceCharacter
    Purpose :	To assign a park designation for the Disney character.
    Inputs	:	char whichPark
    Outputs	:	NONE
    Returns	:	bool
*/
bool DisneyCharacter::PlaceCharacter(char whichPark) 
{
    if (setWhichPark(whichPark)) 
    {
        return true;
    }
    return false;
}


/*  -- Mutator Header Comment
    Name	:	SameMovies
    Purpose :	To set the number of movies for this Disney character equal to another character's number of movies.
    Inputs	:	DisneyCharacter& anotherCharacter
    Outputs	:	NONE
    Returns	:	bool
*/
void DisneyCharacter::SameMovies(DisneyCharacter& anotherCharacter) 
{
    numMovies = anotherCharacter.getNumMovies();
}