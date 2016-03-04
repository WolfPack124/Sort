#include <stdio.h>
#include <string.h>
#define N 7


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define N 7

void displayList(int ar[N], int left, int right)
{
    for(int i= left; i <= right; i++)
        printf("%d ", ar[i]);
    printf("\n");
    
}

int partition(int ar[N], int left, int right)
{   
    //displayList(ar, 0, N-1);
    int pivot = left;
    // printf("pivot element is %d\n", ar[left]);
    int temp = 0;
    while(left < right) {
        while(ar[left] <= ar[pivot])
            left++;
        while(ar[pivot] < ar[right])
            right--;
        if(left < right) {
            temp = ar[left];
            ar[left] = ar[right];
            ar[right] = temp;
        }
    }
    temp = ar[pivot];
    ar[pivot] = ar[right];
    ar[right] = temp;
    return right;
}

void quickSort(int ar[N], int left, int right) {
    if(left < right) {
        
        int p = partition(ar, left, right);
        
        quickSort(ar, left, p-1);
        quickSort(ar, p+1, right);
        displayList(ar, left, right);
       // displayList(ar, left, right);
    }
}
int main(void) {
    int ar[N] = {5, 8, 1, 3, 7, 9, 2};

   quickSort(ar, 0, N-1);
   // displayList(ar, 0, N-1);
   
   return 0;
}

// A utility function to swap two elements
// void swap(int* a, int* b)
// {
    // int t = *a;
    // *a = *b;
    // *b = t;
// }


// int partition(int ar[N], int left, int right)
// {
    // int pivot = left;

    // printf("%s: pivot element %d\n\n", __FUNCTION__, ar[pivot]);
    // displayList(ar, N);
    // //getchar();
    // while(left < right) {
        // while(ar[left] < ar[pivot])
            // left++;
        // while(ar[right] > ar[pivot])
            // right--;
        // if(left < right) {
            // swap(&ar[left],&ar[right]);
            // displayList(ar, N);
        // }
    // }
    // printf("%s: left %d , right %d \n",  __FUNCTION__, left, right);
    // swap(&ar[pivot],&ar[right]);
    // displayList(ar, N);
    // printf("%s: Mid-point is %d\n", __FUNCTION__, right);
    // return right;
// }


// void quickSort(int ar[N], int l, int h)
// {
    // printf("%s: left %d , right %d \n",  __FUNCTION__, l, h);
    // if(l < h) {
        // int p = partition(ar, l, h);
        // if(l < p-1)
        // quickSort(ar, l , p-1);
        // if(p+1 < h)
        // quickSort(ar, p+1, h);
    // }
// }



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
// void displayList(int arr[N], int n)
// {
    // printf("list is : ");
    // for(int i = 0; i < n; i++) {
        // printf(" %d,", arr[i]);
    // }
    // printf("\n");
// }

// int main()
// {
    // int ar[N] = {5, 8, 1, 3, 7, 9, 2};
    // // int ar[N] = {1,5,4,2,3,6};
    // quickSort(ar, 0, N-1);
    // displayList(ar, N);
    // return 0;
// }