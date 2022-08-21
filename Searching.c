#include <stdio.h>

void linear_search(int len,int arr[len]){
    int search,flag=0;
    printf("Enter the number you want to search\n");
    scanf("%d",&search);
    for (int i=0;i<len;i++){
        if (arr[i]==search){
            printf("The number was found at index %d\n",i);
            flag=1;
        }
    }
    if (flag==0){
        printf("The number was not found in the array");
    }   
}

void binary_search(int len,int array[]){
    int search,flag=0;
    int start=0,end=len-1;

    int temp;
    //sorting array...
    for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			
		}
	}
    printf("The sorted array is -: \n");
    for (int i=0;i<len;i++){
        printf("%d ",array[i]);
    }

    printf("\nEnter the number you want to search\n");
    scanf("%d",&search);
    while (start <= end){
        int middle = start + (end- start )/2;
        if (array[middle] == search){
            printf("The number was found at index %d\n",middle);
            flag=1;
        }
        if (array[middle] < search){
            start = middle + 1;}
        else{
            end = middle - 1;}
   }
   if (flag==0){
        printf("The number was not found in tha array");
   }
}

int main(){
    int len,i;
    int arr[len];
    printf("Enter the len of the arrray : ");
    scanf("%d",&len);
    printf("Enter %d numbers for the array : ",len);
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    while(1){
        int choice;
        printf("Type 1 for Linear search\nType 2 for binary search\nType 3 to exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                linear_search(len,arr);
                break;
            case 2:
                binary_search(len,arr);
                break;
            case 3:
                return 0;
        }
    }
    return 0;
}