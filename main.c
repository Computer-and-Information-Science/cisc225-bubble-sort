// Bubble Sort
#include <stdio.h>

void bubblepass (int a[], int size);
void bubblesort (int a[], int size);

void print_array (const int a[], int size);

void swap (int *a, int *b);

int main () {
	int array[] = { 51, 39, 44, 17, 9, 26, 31, 19 };
	const int array_size = sizeof(array) / sizeof(int);

	print_array(array, array_size);
	bubblesort(array, array_size);
	print_array(array, array_size);

	return 0;
}

void bubblepass (int a[], int size) {
	// For each pair of adjacent elements of the array, if they are out
	// of order, swap them.
	for (int i = 0; i < size - 1; i++)
		if (a[i + 1] < a[i])
			swap(&a[i], &a[i + 1]);
}

void bubblesort (int a[], int size) {
	// Perform SIZE-1 bubble passes on the array.
	for (int i = 0; i < size - 1; i++)
		bubblepass(a, size);
}

void print_array (const int a[], int size) {
	// Print all values of the array.
	for (int i = 0; i < size; i++)
		printf("%3d", a[i]);
	printf("\n");
}

void swap (int *a, int *b) {
	// Eachange the integers pointed to by a and b.
	int tmp = *a;
	*a = *b;
	*b = tmp;
}