#include<stdio.h>

int main()
  {
    int num,i,ele[30],j,temp;
    printf("Enter no of elements:");
    scanf("%d",&num);
    printf("Enter elements");
    for(i=0;i<num;i++)
      scanf("%d",&ele[i]);
    for(i=1;i<num;i++)
      {
        temp=ele[i];
        j=i-1;
        while(temp<ele[j] && j>=0)
          {
            ele[j+1]=ele[j];
            j-=1;
          }
        ele[j+1]=temp;
      }
    printf("Sorted elements:");
    for(i=0;i<num;i++)
        printf("%d ",ele[i]);
    return 0;
  }
