#include <stdio.h>

int linearSearch(int arr[],int size,int Val);

int main()
{
    int SearchARR[] = { 3 , 5 , 20 , 36 , 9 , 100 , 1 };
    int index = 0;
    int ARRsize = sizeof(SearchARR)/sizeof(int);
    
    index = linearSearch(SearchARR,ARRsize,3);

    ( index > -1 ) ? printf(" The Value is at index : %d \n",index) : printf(" The Value is not found\n");

    return 0;
}

int linearSearch(int arr[],int size,int Val)
{
    for( int i = 0 ; i < size ; i++ )
    {
        if( arr[i] == Val )
            return i;
    }
    return -1;
}