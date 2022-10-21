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

    char name[20]; 

    printf("Please input your full name: "); //Here we ask you to enter your name

    gets(name), //This takes a single character input and jumps to the next line displaying the output. The E reprsents the ENTER command. 

    printf("Welcome aboard, %s.", name);

    getch(); //getch is used to hold the screen to ensure result is displayed correctly without the screen closing

    return (0);

}
