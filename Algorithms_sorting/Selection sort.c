#include<stdio.h>
int main()
{
    int A[10]={3,1,4,2,7,9,-1,8,10,5},i,j,k,l;
    for(i=1;i<10;i++)
    {
        k = A[i];
        for(j=i+1;j<10;j++)
        {
            if(k>A[j])
            {
               k= A[j];
               l=j;
            }
        }
        if(A[i-1]>A[l])
        {
            A[l]=A[i-1];
            A[i-1]=k;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
