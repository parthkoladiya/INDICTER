#include <stdio.h>
#include <conio.h>
void return_multiple_values(int *value1, int *value2)
{
    *value1 = 5;
    *value2 = 10;
}

void main() {
    int result1, result2;
      clrscr();
       return_multiple_values(&result1, &result2);


    printf("Value 1: %d\n", result1);
    printf("Value 2: %d\n", result2);

    getch();
}
