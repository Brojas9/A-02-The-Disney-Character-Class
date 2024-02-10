/* -- this is a FILEHEADER COMMENT --
    NAME	:	TestDisneyCharacter
    PURPOSE :	This comment space is meant to indicate the purpose of
                this application.  In the description, you can indicate which
                supporting classes you are using - but the bulk of this
                comment is meant to indicate the purpose of this program
                (i.e. what the user is able to do with this program, etc.)

*/
#include "DisneyCharacter.h"

int main() 
{
    DisneyCharacter mickey("Mickey", "1929-01-01", 100, 'M');
    DisneyCharacter minnie("Minnie", "1930-01-01");

    // Set number of Minnie's movies equal to Mickey's
    minnie.SameMovies(mickey);

    // Dump member values for Mickey and Minnie
    printf("Mickey's Info: \n");
    mickey.ShowInfo();

    printf("Minnie's Info: \n");
    minnie.ShowInfo();

    // Place Minnie in Epcot park
    minnie.PlaceCharacter('E');
    minnie.ShowInfo();

    return 0;
}