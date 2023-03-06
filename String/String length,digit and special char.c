#include <stdio.h>


int main()
{
    char str[100];
    int alphabets, digits, others, i;

    alphabets = digits = others = i = 0;


    /* Input string from user */
    printf("Enter any string : ");
    gets(str);

     /*
      Check each character of string for alphabet, digit or special character
     */
    while(str[i]!='\0') // at the end of the program
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}
