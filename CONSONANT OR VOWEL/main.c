#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }
    getch();
    return 0;
}
