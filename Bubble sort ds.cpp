// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;





void fun()
{

    cout <<" 1 . bubble sort \n";
    cout <<" 2 . insertion  sort \n";
    cout <<" 3 . selection sort \n";
    cout <<" 4 . merge sort \n";
    cout <<" 5 . radix sort \n";
    cout <<" 6 . quick sort  \n";


    cout <<" enter your choice \n";
    int m;
cin>>m;
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)


    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    cout <<" enter the size of array";
   int n,m;
   cin>>n;
   int arr[n];
   cout<<" enter the array";
   for( int i=0;i<n;i++)
    cin>>arr[i];
   fun();

    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
