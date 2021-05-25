#include<stdio.h>
#include<conio.h>


void choices(){
	printf("\n\n");
	printf("1.Buble sOrt.....\n");
	printf("2.Isertion sOrt.....\n");
	printf("3.seelction Sort.....\n");
	printf("4.Merge Sort.....\n");
	printf("5.radix sort Sort.....\n");
	printf("6.Quick sort Sort.....\n");

}

int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=(low-1);
    int temp,j;
    for ( j = low; j < high; j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return(i+1);
}

void quicksort(int arr[],int low ,int high){
    if (low<high){
        int pi=partition(arr,low,high);

        quicksort(arr,low,pi-1);

        quicksort(arr,pi+1,high);
    }
}

int getMax(int arr[], int n) {
    int mx = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void countSort(int arr[], int n, int exp) {
    int output[n]; // output array
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n) {
    int m = getMax(arr, n);

    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
void bUbleSort(int arr[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

	}
	printf("Array is :::\n");
    for(j=0;j<size;j++){
        printf(" %d ",arr[j]);
	}
    printf("\n\n_____-------------------_____\n\n");
	cases(arr,size);
}
int min(int arr[],int k ,int size){

	int j,loc,Min;
	Min=arr[k];
	loc=k;
	for(j=k+1;j<=size-1;j++){
		if(Min>arr[j]){
			Min=arr[j];
			loc=j;
		}
	}
	return loc;
}
void selectionSort(int arr[],int size){
	int i,temp,loc;
	for(i=0;i<=size-2;i++){
		loc=min(arr,i,size);
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}

	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);

	}
}
void InsertionSort(int arr[],int size){
    int i,j,temp;

	for(i=1;i<size;i++){
		temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--)
			arr[j+1]=arr[j];
		arr[j+1]=temp;
	}
	printf("Array is :::\n");
    for(j=0;j<size;j++){
        printf(" %d ",arr[j]);
	}
	printf("\n\n_____-------------------_____\n\n");
	cases(arr,size);

}

void merge(int A[],int n1,int index1 ,int B[],int n2,int index2,int C[],int index){


	while (n1&&n2){
		if(A[index1]<B[index2]){
			C[index]=A[index1];
			index++;
			index1++;
			n1--;
		}
		else{
			C[index]=B[index2];
			index++;
			index2++;
			n2--;
		}
	}// ENd of while loop

	while(n1){
		C[index]=A[index1];
		index++;
		index1++;
		n1--;
	}
	while(n2){
		C[index]=B[index2];
		index++;
		index2++;
		n2--;
	}
}
void mergepass(int A[],int N,int L,int B[]){
	int j,LB; // LB is the lower bound
	int Q,S,R;

	Q=N/(2*L);  // Q is the total pair of array to be merged
	S=2*L*Q;  // S is the total no element in pairing  of the array
	R=N-S; // r is the residue element

	for (j=0;j<Q;j++){
		LB=(2*j)*L;  // LB is the lower bound
		merge(A,L,LB,A,L,LB+L,B,LB);   // MERgeing the two array and copying to B
	}
	if (R<=L){    //if only one subarray left
		for(j=0;j<R;j++){
			B[S+j]=A[S+j];  // copy last array to B
		}
	}
	else{ // if two unequal array are in last pair
		merge(A,L,S,A,R-L,S+L,B,S);
	}

}
void mergesort(int A[],int N){
	int j;
	int L=1;  // no of elements in the subarray
	int B[N];
	while(L<N){
		mergepass(A,N,L,B);
		mergepass(B,N,2*L,A);
		L=L*4;
	}
	printf("Array is :::\n");
    for(j=0;j<N;j++){
        printf(" %d ",A[j]);
	}
	printf("\n\n_____-------------------_____\n\n");



}

void cases(int arr1[],int size){
	int choice;
	printf("enter your choice ....(n)");
	scanf("%d",&choice);
	switch (choice){

		case 1 : bUbleSort(arr1 ,size);
				break;
		case 2 : InsertionSort(arr1,size);
				break;
		case 3 : selectionSort(arr1,size);
				break;
		case 4 : mergesort(arr1,size);
				break;
		case 5: radixsort(arr1,size);
				print(arr1,size);
				break;
		case 6: quicksort(arr1,0,size-1);
				print(arr1,size);
				break;
	}
}

void main(){
	int i,j;
	int size=0;
	char ch;
	int low,high;
	printf("Enter the size of the array ");
	scanf("%d",&size);
	int arr[size];
	printf("Do you want to enter thr elements of the array by yourself 0r randomly genrated by the computer...(y/n)");
	fflush(stdin);
	scanf("%c",&ch);
	if (ch=='Y'||ch=='y'){
		printf("Enter the elements of the array\n");
		for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		}
	}
	else{
		printf("Enter the Lower value for the random range ");
		fflush(stdin);
		scanf("%d",&low);
		printf("Enter the higher  value  for the random range ");
		scanf("%d",&high);
		fflush(stdin);

		for(i=0;i<size;i++){
			int num=(rand()%(high-low+1))+low;
			arr[i]=num;
		}
	}
	printf("Array is :::\n");
    for(  j=0;j<size;j++){
        printf(" %d ",arr[j]);
	}

    printf("\n\nSelct Amongst the following cHoices for SoRting::\n\n");
    choices();
    cases(arr,size);


}
