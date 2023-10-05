#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press n then return to quit");
    puts("enter y to get voice line");
    
    char userEnteredCharacter;
    char returnKey;
    char meme;


    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        //printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this
        meme = getchar();


    } while (userEnteredCharacter != 'n');            //Repeat if condition is met - note the != operator
    if (meme = 'y');
    puts("wow it actually worked, huh, should have made a joke...");

    puts("Finished");
}
