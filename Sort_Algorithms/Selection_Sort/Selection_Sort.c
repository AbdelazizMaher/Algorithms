#include <stdio.h>

void SelectionSort(int arr[],int size);

int main()
{
    int unSortedARR[] = { 20 , 5 , 1 , 101 , 9 , 57 , 36 };
    int ARRsize = sizeof(unSortedARR)/sizeof(int);

    SelectionSort(unSortedARR,ARRsize);

    printf("SortedARR : ");
    for( int i = 0 ; i < ARRsize ; i++ )
        printf("%d  ",unSortedARR[i]);

    return 0;
}

void SelectionSort(int arr[],int size)
{
    int min , Temp;

   for( int i = 0 ; i < size - 1 ; i++ )
   {
        min = i;

        for( int j = i + 1 ; j < size ; j++ )
        {
            if( arr[j] < arr[min] )
            {
                min = j;
            }
        }

        if( min != i )
        {
            Temp =  arr[i];
            arr[i] = arr[min];
            arr[min] = Temp;
        }
         
   } 
}
