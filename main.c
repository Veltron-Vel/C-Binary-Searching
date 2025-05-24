#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[],int n,int element);

int main()
{
    int arr[10] = {1,12,24,38,45,56,61,79,83,90},element;
    int n = sizeof(arr) / sizeof(int);
    printf("Which element do you want to search for:\n");
    scanf("%d",&element);
    BinarySearch(arr,n,element);

    return 0;

}

int BinarySearch(int arr[],int n,int element)
{
    int lo = 0,hi=n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/ 2;
        if(arr[mid] == element){printf("Number found in %d position\n",mid);return 0;}
        if(element>arr[mid]){lo = mid + 1;}
        if(element<arr[mid]){hi = mid-1;}
    }
    printf("Element was not found\n");
    return -1;

}

