#include <stdio.h>

#define N 6

void displayList(int ar[N])
{
    for(int i = 0; i < N; i++) {
        printf("%d, ", ar[i]);
    }
    printf("\n");
}

int partition(int ar[N], int lo, int hi)
{
    int pivot = hi;
    int i = lo;
    int temp = 0;
    for(int j = lo; j < hi; j++) {
        if(ar[j] <= ar[pivot]) {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            i++;
        }
    }
    temp = ar[i];
    ar[i] = ar[pivot];
    ar[pivot] = temp;
    return i;
}

int qSort(int ar[N], int lo, int hi)
{
    if(lo < hi) {
        int p = partition(ar, lo, hi);
        qSort(ar, lo, p-1);
        qSort(ar, p+1, hi);
    }
}

int main()
{
    int ar[N] = {4, 6, 7, 3, 2, 1};
    printf("LIst before sort is : ");
    displayList(ar);
    qSort(ar, 0, N-1);
    printf("LIst after sort is : ");
    displayList(ar);
}