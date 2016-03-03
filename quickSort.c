#include <stdio.h>
#include <string.h>
#define N 6


// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int ar[N], int left, int right)
{
    int pivot = right;
    int i = left;
    int j = right-1;
    
    printf(" pivot element %d\n", ar[pivot]);
    //getchar();
    while(i < j) {
        while(ar[i] < ar[pivot])
            i++;
        while(ar[j] > ar[pivot])
            j--;
        if(i < j) {
            swap(&ar[i],&ar[j]);
        }
    }
    swap(&ar[pivot],&ar[i]);
    displayList(ar, N);
    return i;
}


void quickSort(int ar[N], int l, int h)
{
    if(l < h) {
        int p = partition(ar, l, h);
        printf("pivot is %d\n", p);
        quickSort(ar, l  , p-1);
        quickSort(ar, p+1, h);
    }
}



/* This function takes last element as pivot, places the pivot element at its
   correct position in sorted array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right of pivot */
/*
   int partition (int arr[], int l, int h)
{
    int x = arr[h];    // pivot
    int i = (l - 1);  // Index of smaller element
 
    for (int j = l; j <= h- 1; j++)
    {
        // If current element is smaller than or equal to pivot 
        if (arr[j] <= x)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);  // Swap current element with index
        }
    }
    swap(&arr[i + 1], &arr[h]);  
    return (i + 1);
}
 */
void displayList(int arr[N], int n)
{
    printf("list is : ");
    for(int i = 0; i < n; i++) {
        printf(" %d,", arr[i]);
    }
    printf("\n");
}

int main()
{
    int ar[N] = {4,5,9,2,3,1};
    quickSort(ar, 0, N-1);
    displayList(ar, N);
    return 0;
}