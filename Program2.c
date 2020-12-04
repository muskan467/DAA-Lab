//C program to implement Binary Search 

#include <stdio.h> 
  
int main() 
{ 
    int first,last,mid,n,key,arr[100]; 
    
    printf("Enter no of elements:\n");
    scanf("%d", &n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    first=0;
    last=n-1;
    while(first<=last)
    {
      mid=(first+last)/2;
      if(arr[mid]>key)
        last=mid-1;
       else if(arr[mid]==key)
       {
        flag=1;
        break;
       }
      else
        first=mid+1;
     }
     if(flag==1)
      printf("Element found");
     }
    return 0; 
}
