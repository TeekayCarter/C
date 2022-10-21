#include <stdio.h>

int main(void)
{
    char fname[255], lname[255];

    // printf("To enable us serve you better, we will require a few details\n");

    // printf("Please input your first name: "); //Here we ask you to enter your name
    // scanf("%s", fname);

    printf("To enable us serve you better, we will require a few details\n");

    

    printf("Please input your first name: "); //Here we ask you to enter your name
    fgets(fname, 255, stdin);

    printf("Please input your last name: "); //Here we ask you to enter your name
    scanf("%s", lname); //This is a formatted input function

    printf("Welcome to Greatness Academy, %s %s.", fname, lname); //This is a formatted output function
    
    return (0);

}