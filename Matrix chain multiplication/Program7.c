#include<stdio.h> 

int matrixChainOrder(int p[], int i, int j) 
    {
        if(i==j)
            return 0;
        int k, matrixCost;
        int min=9999;
        for(k=i;k<j;k++)
            {
                matrixCost = matrixChainOrder(p,i,k)+matrixChainOrder(p,k+1,j)+
                p[i-1]*p[k]*p[j];
                if(matrixCost<min)
                    min=matrixCost;
            }
        return min;
    } 
  
int main() 
{ 
    int arr[] = {10, 100, 5, 50};
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Minimum no of Scalar Multiplication is %d\n", matrixChainOrder(arr, 1, n-1 )); 

    return 0; 
} 
