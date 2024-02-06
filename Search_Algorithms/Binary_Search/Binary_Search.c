#include <stdio.h>

int BinarySearch(int arr[],int size,int Val);

int main()
{
    int SearchARR[] = { 3 , 5 , 20 , 36 , 55 , 100 , 234 }; // Must be sorted
    int index = 0;
    int ARRsize = sizeof(SearchARR)/sizeof(int);
    
    index = BinarySearch(SearchARR,ARRsize,99);

    ( index > -1 ) ? printf(" The Value is at index : %d \n",index) : printf(" The Value is not found\n");

    return 0;
}

int BinarySearch(int arr[],int size,int Val)
{
    int Left = 0 , Right = size - 1;
    int Mid;

    while( Left <= Right )
    {
        Mid = (Left + Right)/2; 
        
        if( arr[Mid] == Val)
            return Mid;
        else if( arr[Mid] > Val )
            Right = Mid - 1;
        else if( arr[Mid] < Val )
            Left = Mid + 1;                   
    }
    return -1;
}