#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,*ptr,arr[500];
     clrscr();
    printf("Enter the size of the array: ");
    scanf("%d", &n);

     ptr =&arr[n];
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
	scanf("%d", ptr);
	ptr++;
    }

       ptr = arr;
    printf("Array elements are:\n");
    for ( i = 0; i< n; i++)
    {
	printf("%d ", *ptr);
	ptr++;
    }

    getch();
}
