#include <stdio.h>

void BubbleSort(int arr[],int size);

int main()
{
    int unSortedARR[] = { 20 , 5 , 1 , 101 , 9 , 57 , 36 };
    int ARRsize = sizeof(unSortedARR)/sizeof(int);

    BubbleSort(unSortedARR,ARRsize);

    printf("SortedARR : ");
    for( int i = 0 ; i < ARRsize ; i++ )
        printf("%d  ",unSortedARR[i]);

    return 0;
}

void BubbleSort(int arr[],int size)
{
    int Temp = 0 , Flag = 0;

    for( int i = 0 ; i < size - 1 ; i++ )
    {
        for( int j = 0 ; j < size - 1 - i ; j++ )
        {
            Flag = 0;

            if( arr[j] >= arr[j+1] )
            {
                Temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = Temp;
            
                Flag  = 1;
            }
        }
        if ( Flag == 0 ) // No swapping happened
            break;
    }
}