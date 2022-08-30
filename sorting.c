#include <stdio.h>

// Lab 2

void display_array(int len,int arr[len]){
    printf("The sorted array is -: \n");
    for (int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

void ascending_order(int len,int arr[len]){
    int temp;
    for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
    display_array(len,arr);
}

void descending_order(int len,int arr[len]){
    int temp;
    for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
    display_array(len,arr);
}

int main(){
    int len,i;
    int arr[len];
    printf("Enter the len of the array : ");
    scanf("%d",&len);
    printf("Enter %d numbers for the array : ",len);
    for (i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    while(1){
        int choice;
        printf("\nType 1 for asc order\nType 2 for desc order\nType 3 to exit ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                ascending_order(len,arr);
                break;
            case 2:
                descending_order(len,arr);
                break;
            case 3:
                return 0;
        }
    }


}
