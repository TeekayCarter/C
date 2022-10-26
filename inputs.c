#include <stdio.h>
#include <conio.h> //conio.h helps with the getchar(), getch(), getche() and the gets() functions

int main(void)
{
    // char name, password;
    // printf("Please input your password: ");
    // password = getch(), //This takes a single character input and jumps to the next line without displaying the output, unless print function is invoked. The This can be used for passwords.
    // getch();
    // printf("");

    // name = getche(), //This takes a single character input and jumps to the next line displaying the output. The E reprsents the ENTER command. 
    // printf("");

/* 
 *  Annother input function is scanf("%s", name); which captures the input. Here is a snippeet
*/
    // char name[2];
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Your name is: %s", name);
    // getch();

/*  There is a flaw in this concept:
 *  1. Any other name after the space bar is ignored when initiating the print function. To mitigate this, consider the code below:
*/
    // char name[50];
    // printf("Enter syour name: ");
    // scanf("%[^\n]s", name); //The %[^\n]s helps us to stop taking inputs as soon as a new line is met.
    // scanf("%s", &arg1, &arg2, &arg3); //The & tells us that its a variable name and not the actual data its self.
    // printf("Your name is: %s", name);
    // getch();

/*
 *   The GETS function
 *   There is a flaw in this concept:
 *   1. Memory allocated to name is [2], if name is more, it will still print out name. But this takes space from the system
 *     which isn't accounted for and may obstruct the operation of other functions.
*/

    char name[5]; 
    printf("Please input your full name: "); //Here we ask user to enter name
    gets(name), //This takes a single character input and jumps to the next line displaying the output. The E reprsents the ENTER command. 
    printf("Welcome aboard, %s.", name);
    getch(); //getch is used to hold the screen to ensure result is displayed correctly without the screen closing

/* 
 *  The FGETS function
 *  With this input function we can allocate the memory for input while dictacting how much memory is allocated.
*/

    // char name[100];
    // printf("Please enter your full name: ");
    // fgets(name, 100, stdin);
    // printf("Welcome aboard, %s'.' ", name);
    // getch();


    return (0);
}

