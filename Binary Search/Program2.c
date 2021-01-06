//C program to implement Binary Search 

#include <stdio.h> 
  
int main() 
{ 
    int first,last,mid,flag=0; 
    
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int key = 4;
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(array[mid]>key)
            last=mid-1;
        else if(array[mid]==key)
        {
            flag=mid;
            break;
        }
        else
            first=mid+1;
    }
    if(flag==0)
        printf("Not found");
    else
        printf("Element is found at index %d", flag);
    return 0; 
}
