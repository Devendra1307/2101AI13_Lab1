#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void Printarray(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int size)
{
    int i, j;
    for (i = 0 ;  i < size;i++)
    {
        for (j = i ; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}
void insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++) 
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) 
        {
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Choose your desired sorting algorithm:\n");
    printf("1. Selection Sort\n");
    printf("2. Insertion Sort\n");
    printf("3. Bubble Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    int select;
    scanf("%d",&select);
    if(select==1){
        selectionSort(a,n);
        Printarray(a,n);

    }
    else if(select==2){
        insertionSort(a,n);
        Printarray(a,n);
    }
    return  0;
}