#include <stdio.h>
#include <stdlib.h>

int main ()
{
float a, b;
char sign;
                    /* okay, so I wanted to modify my code into an infinite calculator, as in it will be able to do
                    continous operations in a single run. So i used while loop and put 1 as the condition since in
                    while loop any non-zero integar is determined as true.
                    so its able to run infinte times in a single go*/
while (1) {
        system("cls");

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
scanf(" %c", &sign);
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
    printf("Result = %.2f\n", a/b);  /* while writing this part, I learned that you only
                                    use '' when you are telling your code about a character */
    }
    else {
     printf("Undefined");
    }
}
else {
    printf("invalid sign");
}
printf("\n Press Enter to start again...");
getchar();
getchar();
} /* I had to use getchar(); twice cause when my code finishes its first operation
  it needs to show me the result first. But using only one getchar(); was not accomplishing
  that task, it was directly initiating the code again. so I used getchar(); twice and got my workdone.
  turns out the first getchar(); is being used for the enter i was pressing after giving my last input and
  the second getchar(); is being used for that press enter bla bla.*/
return 0;
}
