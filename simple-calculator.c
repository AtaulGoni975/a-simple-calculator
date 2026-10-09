#include <stdio.h>
#include <stdlib.h>

int main ()
{
float a, b;
char sign;

printf("Enter a number: ");
scanf("%f", &a);
system("cls");

getchar(); /*I used getchar(); because, I was facing a very silly issue.
             my code first asks for a number input but then it is supposed
             to ask for a sign input but what used to happen before using
             getchar is that after giving my number input I am supposed to press
             enter only for my code to store that value in the variable a and ask for the
             next input and following that my code used to take "enter" as a sign input. To
             avoid that I used getchar(); now I am able to give my sign input */


printf("Enter the sign: ");
scanf("%c", &sign);
system("cls");

printf("Enter a number: ");
scanf("%f", &b);
system("cls");

if (sign == '+') {
    printf("Result = %.2f\n", a+b);
}
else if (sign == '-') {
    printf("Result = %.2f\n", a-b);
}
else if (sign == '*') {
    printf("Result = %.2f\n", a*b);
}
else if (sign == '/') {
    if ( b != 0) {
    printf("Result = %.2f\n", a/b);  /* while writing this part, I learned that you only use '' when you are telling your code about a character */
    }
    else {
     printf("Undefined");
    }
}
else {
    printf("invalid sign");
}
return 0;
}
