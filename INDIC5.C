#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
 {
    char inputString[100];
    clrscr();
    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Length of the string: %d\n", stringLength(inputString));

    getch();
}
 int stringLength(const char *str)
 {
    int length = 0;
    while (*str != '\0') {
	length++;
	str++;
    }
    return length;
}
