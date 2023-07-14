#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int choice;

void badMannerShameOnYOU(char c)
{
    write(1, &c, 1);
}

int simpleMathHaHa(int a, int b)
{
    return (a + b);
}

int main()
{
    void (*function)(char);
    int (*math)(int, int);
    do{
        printf("Insert a number nerd: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                function = badMannerShameOnYOU, printf("Cra"),function ? function('p'), printf("\n") : printf("Crab\n");
                break;
            case 2:
                math = simpleMathHaHa, math ? printf("%d it's that simple\n", math(2, 2)):printf("Whatever\n");
                break;
            case 3:
                printf("Coward, run away.\n"), exit(0);
            default:
                printf("PICK BETWEEN 1 OR 2 GOD DAYYUM(NO I AM NOT AN ANGRY MF NIG..)\n");
                break;
        }

    }while(1);

    return (0);
}