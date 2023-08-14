#include <stdio.h>
#include <conio.h>
void reverseArray(int *arr, int size)
 {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
	int temp = *start;
	*start = *end;
	*end = temp;

	start++;
	end--;
    }
}

int main()
{
    int i,arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
     clrscr();
    printf("Original array: ");
    for ( i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for ( i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");

    getch();
}
