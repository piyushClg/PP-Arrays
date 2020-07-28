/******************************************************************************
1.	Write a program to find largest element of given array
2.	Write a program in C to find the sum of all elements of the array.  
3.	Write a program in C to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on. 
Expected Output:
The given array is:
5 8 1 4 2 9 3 7 6
The new array is:
1 9 2 8 3 7 4 6 5
4.	Write a program in C to read n number of values in an array and display it in reverse order.
5.	Write a program in C to copy the elements of one array into another array. 
6.	Write a program in C to print all unique elements in an array.
7.	Write a program in C to count the frequency of each element of an array.
8.	Write a program in C to find the smallest and largest element in an array. 
9.	Write a program in C to insert an element at desired position in an array. 
10.	Write a program in C to delete an element at desired position from an array. 

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, a_size, i, j, arr1[100], largest, sum=0, temp, arr2[100], a2_index=0, z=0, counter=0, pos, value, rep;
    printf("\t***************************\n");
    printf("\t*Practice Problem - Arrays*\n");
    printf("\t***************************\n");
    do{
        printf("\t\t    Menu\n");
        printf("1. Find largest element of the array. \n");
        printf("2. Find the sum of all elements of the array.\n");
        printf("3. To rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on. \n");
        printf("4. To read n number of values in an array and display it in reverse order. \n");
        printf("5. To copy the elements of one array into another array. \n");
        printf("6. To print all unique elements in an array. \n");
        printf("7. To count the frequency of each element of an array. \n");
        printf("8. To find the smallest and largest element in an array. \n");
        printf("9. To insert an element at desired position in an array. \n");
        printf("10. To delete an element at desired position from an array.\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch(n) {
            case 1:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                }
                
                largest = arr1[0];
     
                for (i = 1; i < a_size; i++) 
                {
                    if (largest < arr1[i])
                    largest = arr1[i];
                }
         
                printf("\nlargest element present in the given array is : %d", largest);
                printf("\n");
                break;
                
            case 2:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                    sum += arr1[i];
                }
                printf("Sum of all the elements of the given array is: %d", sum);
                printf("\n");
                break;
                
            case 3:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                }
                for (i = 0; i < a_size-1; i++)
            	{   
                   for (j = 0; j < a_size-i-1; j++)
                   {
                       if (arr1[j] > arr1[j+1])
                       {
                           temp = arr1[j]; 
                           arr1[j] = arr1[j+1]; 
                           arr1[j+1] = temp;
                       }
                   }
            	}
            	j=1;
            	for(i=0; i<a_size; i++){
            	    if(i%2 == 0){
                	    arr2[a2_index] = arr1[z];
                	    a2_index++;
                	    z++;
            	    }
            	    else{
            	        arr2[a2_index] = arr1[a_size-j];
            	        a2_index++;
            	        j++;
            	    }
            	}
            	printf("The new array is:  \n");
                for (i=0; i<a_size; i++) 
                    printf("%d ",arr2[i]); 
                printf("\n");
                break;
            
            case 4:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                }
                j = a_size - 1;
                printf("Your reversed array is: ");
                for(i=0; i<a_size; i++) {
                    printf("%d ", arr1[j]);
                    j--;
                }
                printf("\n");
                break;
            
            case 5:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                    arr2[i] = arr1[i];
                }
                printf("Your copied array is: ");
                for(i=0; i<a_size; i++) {
                    printf("%d ", arr2[i]);
                }
                printf("\n");
                break;
                
            case 6:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                }
                for (i = 0; i < a_size; i++){
            		counter = 1;
            		for(j = i + 1; j < a_size; j++){
                		if(arr1[i] == arr1[j]){
                			counter++;
                			arr2[j] = 0;
                		}
                	}
                	if(arr2[i] != 0){
                		arr2[i] = counter;
            		}
            	}
            
             	printf("\n List of Unique Array Elemnts in this Array are : ");
             	for (i = 0; i < a_size; i++){
              		if(arr2[i] == 1){
              			printf("%d ", arr1[i]);
            		}		
              	}
                printf("\n");
                break;
            
            case 7:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                    arr2[i] = 2;
                }
                for(i=0; i<a_size; i++){
                    counter = 1;
                    for(j=i+1; j<a_size; j++){
                        if(arr1[i]==arr1[j]){
                            counter++;
                            arr2[j] = 0;
                        }
                    }
            
                    if(arr2[i]!=0){
                        arr2[i] = counter;
                    }
                }
                printf("\nThe frequency of all elements of array : \n");
                for(i=0; i<a_size; i++){
                    if(arr2[i]!=0){
                        printf("%d occurs %d times\n", arr1[i], arr2[i]);
                    }
                }
                printf("\n");
                break;
            
            case 8:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                }
                for (i = 0; i < a_size-1; i++){   
                   for (j = 0; j < a_size-i-1; j++)
                   {
                       if (arr1[j] > arr1[j+1])
                       {
                           temp = arr1[j]; 
                           arr1[j] = arr1[j+1]; 
                           arr1[j+1] = temp;
                       }
                   }
            	}
            	printf("Smallest element of the array is: %d\n", arr1[0]);
            	printf("Largest element of the array is: %d", arr1[a_size-1]);
            	printf("\n");
            	break;
            
            case 9:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                }
                printf("Please enter the location where you want to insert an new element\n");
                scanf("%d", &pos);
                
                printf("Please enter the value\n");
                scanf("%d", &value);
                
                for (i = a_size - 1; i >= pos - 1; i--)    
                    arr1[i+1] = arr1[i];
                
                arr1[pos-1] = value;
                
                printf("the new array is: ");
                
                for (i = 0; i <= a_size; i++)    
                    printf("%d ", arr1[i]);
                printf("\n");
                break;
            
            case 10:
                printf("Enter the size of array you want: ");
                scanf("%d", &a_size);
                printf("\nEnter your array: ");
                for(i=0; i<a_size; i++) {
                    scanf("%d", &arr1[i]);
                }
                printf("\nInput the position where to delete: ");
                scanf("%d",&pos);
                i=0;
                while(i!=pos-1)
                    i++;
                while(i<a_size){
                    arr1[i]=arr1[i+1];
                    i++;
                }
                a_size--;
                printf("\nThe new array is : "); 
                for(i=0;i<a_size;i++){
                   printf("  %d",arr1[i]);
                }
                printf("\n");
                break;
        }// end of switch
        printf("Do you want to enter more(1-yes, 2-no): ");
        scanf("%d", &rep);
    }while(rep == 1);
    

    return 0;
}
