#include <stdio.h>
#include <conio.h>
void main()
{
    int num1 = 5, num2 = 10;
    int *ptr1, *ptr2, temp;
    clrscr();
    ptr1 = &num1;
    ptr2 = &num2;

    printf("Before swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    getch();
}
