#include <stdio.h>
void swap(int* a, int* b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}

int partition(int arr[], int left, int right) {
 int pivot = arr[right];
 int i = left - 1;
 int j;
 for ( j = left; j <= right - 1; j++) {
 if (arr[j] <= pivot) {
 i++;
 swap(&arr[i], &arr[j]);
 }
 }
 swap(&arr[i + 1], &arr[right]);
 return (i + 1);
}

void quickSort(int arr[], int left, int right) {
 if (left < right) {
 int pivotIndex = partition(arr, left, right);
 quickSort(arr, left, pivotIndex - 1);
 quickSort(arr, pivotIndex + 1, right);
 }
}
void printArray(int arr[], int size) {
    int i;
 for ( i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}
int main() {
int n, arr[100],i;
printf("Enter the Size of Array :");
scanf("%d",&n);

 printf("Enter the elements :\n");
 for (i = 0; i<n; i++) {
 scanf("%d", &arr[i]);
 }
 printf("\n");
 printf("Original array: \n");
 printArray(arr, n);
 quickSort(arr, 0, n - 1);
 printf("Sorted array: \n");
 printArray(arr, n);
 return 0;
}
