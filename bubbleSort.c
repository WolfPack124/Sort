#include <stdio.h>

void displayList(int array[100], int n)
{
    for(int i = 0; i < n; i++) {
        printf(" %d,", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[100], int n)
{
    int temp = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++) {
            if(array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            displayList(array, n);
        }
    }
}

int main()
{
    int  array[100], n = 0;
    printf("Enter the no of elements : ");
    scanf(" %d", &n);
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) {
        scanf(" %d", &array[i]);
    }
    printf("\nList before sort : "); 
    displayList(array, n);
    bubbleSort(array, n);
    printf("List After sort : ");
    displayList(array, n);
    return 0;
}