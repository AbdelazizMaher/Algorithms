#include <stdio.h>

void QuickSort(int arr[],int size);

int PartitionARR(int arr[],int Lb,int Ub);

void Swap(int *a , int *b);

int main()
{
    int unSortedARR[] = { 20 , 5 , 1 , 101 , 9 , 57 , 36 };
    int ARRsize = sizeof(unSortedARR)/sizeof(int);

    QuickSort(unSortedARR,ARRsize);

    printf("SortedARR : ");
    for( int i = 0 ; i < ARRsize ; i++ )
        printf("%d  ",unSortedARR[i]);

    return 0;
}

void QuickSort(int arr[],int size)
{
    int Lb = 0 , Ub = size - 1;
    int Loc;

    if( Lb < Ub )
    {
        Loc = PartitionARR(arr,Lb,Ub);

        QuickSort(arr + Lb, Loc - Lb);
        QuickSort(arr + Loc + 1 , size - Loc -1);
    }
}

int PartitionARR(int arr[],int Lb,int Ub)
{
    int Pivot = arr[Lb];
    int Start = Lb , End = Ub;

    while( Start < End )
    {
        while( arr[Start] <= Pivot )
            Start++;
        while( arr[End] > Pivot )
            End--;

        if( Start < End )
            Swap(&arr[Start],&arr[End]);        
    }

    Swap(&arr[Lb],&arr[End]);

    return End;
}

void Swap(int *a , int *b)
{
    int Temp;

    Temp = *a;
    *a = *b;
    *b = Temp;
}