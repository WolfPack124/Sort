#include <stdio.h>

int Search(int Array[100], int x, int min, int max)
{
    // if(min == max)
    int mid = (min+max)/2;
    if(Array[mid] == x) {
        return mid;
    } else if(Array[mid] > x) {
        return Search(Array, x, min, mid-1);
    } else {
        return Search(Array, x, mid+1, max);
    }
    return -1;
}

int main()
{
    int Array[100];
    int i = 0, n = 0, x = 0;
    printf("Enter no of elements: ");
    scanf(" %d", &n);
    printf("n is %d\n", n);
    printf("Enter the elements : ");
    for(i = 0; i < n ; i++) {
        scanf(" %d", &Array[i]);
    }
    printf("Enter element to search : ");
    scanf(" %d", &x);
    int result = Search(Array, x, 0, n-1);
    printf("Result is %d \n", result);
    return 0;
}