#include<bits/stdc++.h>
using namespace std;


void radix_sort(int arr[] ,int n)
{
                int getMax(int arr[], int n)
                {
                    int mx = arr[0];
                    for (int i = 1; i < n; i++)
                        if (arr[i] > mx)
                            mx = arr[i];
                    return mx;
                }
                void countSort(int arr[], int n, int exp)
                {
                    int output[n];
                    int i, count[10] = {0};

                    for (i = 0; i < n; i++)
                        count[ (arr[i]/exp)%10 ]++;

                    for (i = 1; i < 10; i++)
                        count[i] += count[i - 1];
                    for (i = n - 1; i >= 0; i--)
                    {
                        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
                        count[ (arr[i]/exp)%10 ]--;
                    }
                    for (i = 0; i < n; i++)
                        arr[i] = output[i];
                }
                void radixsort(int arr[], int n)
                {

                    int m = getMax(arr, n);
                for (int exp = 1; m/exp > 0; exp *= 10)
                        countSort(arr, n, exp);
                }


                void print(int arr[], int n)
                {
                    for (int i = 0; i < n; i++)
                        cout << arr[i] << " ";
                }
}



void bubble_sort(int arr[] int n)
{


              bubbleSort(arr, n);

                printArray(arr, n);

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

}




void insertion_sort( int arr[], int n)
{
void insertionSort(int arr[], int n)
{
                    int i, key, j;
                    for (i = 1; i < n; i++)
                    {
                        key = arr[i];
                        j = i - 1;
                        while (j >= 0 && arr[j] > key)
                        {
                            arr[j + 1] = arr[j];
                            j = j - 1;
                        }
                        arr[j + 1] = key;
                    }
                }
                void printArray(int arr[], int n)
                {
                    int i;
                    for (i = 0; i < n; i++)
                        cout << arr[i] << " ";
                    cout << endl;
                }
        }




void selection_sort( int arr[] int n)
{

                    void swap(int *xp, int *yp)
                    {
                        int temp = *xp;
                        *xp = *yp;
                        *yp = temp;
                    }

                    void selectionSort(int arr[], int n)
                    {
                        int i, j, min_idx;
                        for (i = 0; i < n-1; i++)
                        {

                            min_idx = i;
                            for (j = i+1; j < n; j++)
                            if (arr[j] < arr[min_idx])
                                min_idx = j;
                            swap(&arr[min_idx], &arr[i]);
                        }
                    }
                    void printArray(int arr[], int size)
                    {
                        int i;
                        for (i=0; i < size; i++)
                            cout << arr[i] << " ";
                        cout << endl;
                    }

}




void quick_sort(int arr[], int n)
{
                    void swap(int* a, int* b)
                    {
                        int t = *a;
                        *a = *b;
                        *b = t;
                    }

                        int partition (int arr[], int low, int high)
                    {
                        int pivot = arr[high]; // pivot
                        int i = (low - 1); // Index of smaller element

                        for (int j = low; j <= high - 1; j++)
                        {

                            if (arr[j] < pivot)
                            {
                                i++;
                                swap(&arr[i], &arr[j]);
                            }
                        }
                        swap(&arr[i + 1], &arr[high]);
                        return (i + 1);
                    }


                    void quickSort(int arr[], int low, int high)
                    {
                        if (low < high)
                        {
                            int pi = partition(arr, low, high);
                            quickSort(arr, low, pi - 1);
                            quickSort(arr, pi + 1, high);
                        }
                    }
                        void printArray(int arr[], int size)
                    {
                        int i;
                        for (i = 0; i < size; i++)
                            cout << arr[i] << " ";
                        cout << endl;
                    }



}




void merge_sort( int arr[] , int n)
{
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }



    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }



    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}



void mergeSort(int arr[], int l, int r)
{
    if (l < r) {


        int m = l + (r - l) / 2;


        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}



void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}




}
}

void fun()
{

    cout <<" 1 . bubble sort";
    cout <<" 2 . insertion  sort";
    cout <<" 3 . selection sort";
    cout <<" 4 . merge sort";
    cout <<" 5 . radix sort";
    cout <<" 6 . quick sort";


    cout <<" enter your choice";
}

void fun1( int arr[] int n)
{ int choice;
    switch(choice)
    {
        case 1 : bubble_sort(arr[] , n);
         break;
         case 2: insertion_sort(arr[] , n);
         break;
          case 3 : selection_sort(arr[] , n);
         break;
         case 4: merge_sort(arr[] , n);
         break;
          case 5 : radix_sort( arr[] , n);
         break;
         case 6: quick_sort(arr[] , n);
         break;
         default :
            cout <<" invalid  entry";
    }

}




int main()
{

    int low , heigh;

    cout <<" enter the size of array";
    int n;
    cin>>n;
    int arr[n];

    fun();
    fun(arr[] ,n);
}
