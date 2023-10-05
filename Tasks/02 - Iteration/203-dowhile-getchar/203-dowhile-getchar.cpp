#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this

    } while (userEnteredCharacter != 'q' && userEnteredCharacter != 'Q');            //Repeat if condition is met - note the != operator

    puts("Finished");
}

/*
* 1.
* output is what user inputs, as long as it's one character for each input
* however inputting multiple chars bugs the program a bit, to the point that it outputs every odd character in a string
* for example inputting '12435' outputs '1', '3', '5'
* inputting '1234' multiple times alternates the output from '1', '3' and '2' '4'
* 2.
* ascii code for return key is 10
* but that code changes when i input multiple chars
* 
* obviously the code only does getchar() which is why it bugs out when theres multiple chars inputted

*/