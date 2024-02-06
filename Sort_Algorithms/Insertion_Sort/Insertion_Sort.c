#include <stdio.h>

void InsertionSort(int arr[],int size);

int main()
{
    int unSortedARR[] = { 20 , 5 , 1 , 101 , 9 , 57 , 36 };
    int ARRsize = sizeof(unSortedARR)/sizeof(int);

    InsertionSort(unSortedARR,ARRsize);

    printf("SortedARR : ");
    for( int i = 0 ; i < ARRsize ; i++ )
        printf("%d  ",unSortedARR[i]);

    return 0;
}

void InsertionSort(int arr[],int size)
{
    int Temp = 0;
    int i , j;

    for( i = 1 ; i < size ; i++ )
    {
        Temp = arr[i];

        for( j = i - 1 ; j >= 0 ; j-- )
        {
            if( arr[j] > Temp )
                arr[j+1] = arr[j];
            else
                break;    
        }

        arr[j+1] = Temp;
    }
}