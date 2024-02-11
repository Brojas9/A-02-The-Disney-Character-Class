/* -- this is a FILEHEADER COMMENT --
    NAME	:	DisneyCharacter
    PURPOSE :	The purpose of this application is to demonstrate 
                the use of object-oriented programming concepts in C++. 
                This program implement a class named DisneyCharacter which
                represent characters from the Disney universe.
*/
#include "DisneyCharacter.h"
#include <stdio.h>
int main() 
{
    DisneyCharacter mickey("Mickey", "1929-01-01", 100, 'M');
    DisneyCharacter minnie("Minnie", "1930-01-01");

    // Number of Minnie's movies equal to Mickey's
    minnie.SameMovies(mickey);

    printf("Mickey's Info: \n");
    mickey.ShowInfo();

    printf("Minnie's Info: \n");
    minnie.ShowInfo();

    // Placing Minnie in Epcot park
    minnie.PlaceCharacter('E');
    minnie.ShowInfo();

    return 0;
}