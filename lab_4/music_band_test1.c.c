#include <stdio.h>
#include <stdlib.h>

int main()
{
    int band;
    char first_letter;
    printf("Select a Band (1-5): ");
    scanf(" %d",&band);
    switch(band)
    {

case 1:
    printf("\nEnter the starting letter of the song: ");
    scanf(" %c",&first_letter);
    printf("\nThe band name is Linkin Park");

                switch(first_letter)
                {

            case 'I':
            case 'i':
                printf("\nSong name is In the End.");
                break;

            case 'N':
            case 'n':
                printf("\nSong name is Numb.");
                break;
            default:
                printf("\nSong not found for this letter.");
                }
    break;


case 2:

    printf("\nEnter the starting letter of the song: ");
    scanf(" %c",&first_letter);
    printf("\nBand name is Imagine Dragon");

                switch(first_letter)
                {

            case 'B':
            case 'b':
                printf("\nThe song name is Believer");
                break;

            case 'R':
            case 'r':
                printf("\nThe song name is Radioactive");
                break;

            default:
                printf("\nSong not found for this letter");
                break;
                }

    break;



case 3:
    printf("\nEnter the starting letter of the song: ");
    scanf(" %c",&first_letter);
    printf("\nBand name is BTS");

    switch(first_letter)
    {

            case 'D':
            case 'd':
                printf("\nThe song name is Dynamite");
                break;

            case 'M':
            case 'm':
                printf("\nThe song name is My Universe");
                break;

            default:
                printf("\nSong not found for this letter");
                break;
    }
     break;



case 4:
     printf("\nEnter the starting letter of the song: ");
    scanf(" %c",&first_letter);
    printf("\nBand name is Arctic Monkey");

    switch(first_letter)
    {

            case 'A':
            case 'a':
                printf("\nThe song name is A Certain Romance");
                break;

            case 'I':
            case 'i':
                printf("\nThe song name is Do I Wanna Know?");
                break;

            default:
                printf("\nSong not found for this letter");
                break;
    }
     break;



case 5:
     printf("\nEnter the starting letter of the song: ");
     scanf(" %c",&first_letter);
     printf("\nBand name is Local Train");

    switch(first_letter)
    {

            case 'A':
            case 'a':
                printf("\nThe song name is Aaoge Tum Kabhi");
                break;

            case 'C':
            case 'c':
                printf("\nThe song name is Choo Lo");
                break;

            default:
                printf("\nSong not found for this letter");
    }

     break;

default:
    printf("\nInvalid Band Selection");

    }
    return 0;
}
