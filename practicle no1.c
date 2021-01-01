#include<stdio.h>
#include<conio.h>

void replace(int arr2[],int size){

	int n1,n2,i,j;
	printf("Enter no to replce \n");
	scanf("%d",&n1);
	printf("Enter no. to replace %d \n",n1);
	scanf("%d",&n2);

	for (i=0;i<size;i++){
		if(arr2[i]==n1){
			arr2[i]=n2;
		}
	}
	printf("Array is :::\n");
    for(  j=0;j<size;j++){
        printf(" %d ",arr2[j]);
	}
	printf("\n_____-------------------_____\n");
	cases(arr2,size);
}
void del(int arr[], int size){
	int i,j,no;
	printf("Enter no to dElEte \n");
	scanf("%d",&no);


	for(i=0;i<size;i++){
		if(arr[i]==no)
			 break;

	}
	if(i<size)
		{
			size=size-1;
			for(j=i;j<size;j++)
			{ arr[j]=arr[j+1];}
		}


	printf("Array is ::--\n");
    for(  j=0;j<size;j++){
        printf(" %d ",arr[j]);
	}
	printf("\n\n_____-------------------_____\n\n");
	cases(arr,size);

}
void sum(int arr[],int size){
	int i;
	int sum=0;
	for(i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("suM of the elemets of the array is %d",sum);
	printf("\n__-----------___\n");
	cases(arr,size);
}
void average(int arr[],int size){
	int i;
	int sum=0;
	for(i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("AveRage of the elemets of the array is %d",sum/size);
	printf("\n__----_____----____\n");
	cases(arr,size);
}
void linearSearch(int arr[], int size){

	int n1,i=0,a=0,b=0;
	printf("Enter no to search \n");
	scanf("%d",&n1);
    for (i=0; i < size; i++)
    {
        if(arr[i]==n1){
        	b=i+1;
            a=1;
        }
    }
    a==1?printf("No is found at position %d\n",b):printf("No not found \n");
    printf("\n\n_____-------------------_____\n\n");
	cases(arr,size);
}
void selectionSort(int arr[], int size) {
	int i,j,temp;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if (arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
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
void max(int arr[],int size){
	int i, max=0, min=0;
	max=arr[0];
	min=arr[0];
	for(i=1;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("Maxium & Minium no in the array is %d & %d\n",max,min);
	printf("\n\n_____-------------------_____\n\n");
	cases(arr,size);
}
void choices(){
	printf("\n\n");
	printf("1.RePlaCe element oF array.....\n");
	printf("2.Delete Element from array.....\n");
	printf("3.sum of all elements of array.....\n");
	printf("4.Average of all elements of array.....\n");
	printf("5.search for element in array.....\n");
	printf("6.sOrting in array.....\n");
	printf("7.find maximum & minium no in the  array.....\n");
	printf("8.ExIt.....\n");
}

void cases(int arr1[],int size){
	int choice;
	printf("enter your choice ....(n)");
	scanf("%d",&choice);
	switch (choice){

		case 1 : replace(arr1 ,size);
				break;
		case 2 : del(arr1,size);
				break;
		case 3 : sum(arr1,size);
				break;
		case 4 : average(arr1,size);
				break;
		case 5 : linearSearch(arr1,size);
				break;
		case 6 : selectionSort(arr1,size);
				break;
		case 7 : max(arr1,size);
				break;
		case 8 : printf("****_____****");
				break;
		default :printf("Inproper choice");
				break;
	}
}

void main()
{
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


	printf(" \n\nThiS iS meNudriven ProgRam which performs array functions \n  Enter proper choice for certain operation ");
	choices();
	cases(arr,size);
}
