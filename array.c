#include <stdio.h>

float calculateAverage(int arr[], int size) 
{
    int sum = 0;
    
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return (float)sum / size;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; ++i) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    float average = calculateAverage(arr, size);
    printf("The average of the array is: %.2f\n", average);

}
