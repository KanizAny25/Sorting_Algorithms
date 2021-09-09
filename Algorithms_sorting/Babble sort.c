#include<stdio.h>
int main()
{
    int A[10] ={3,7,9,5,8,4,1,6,2,10};
    int i,j,k,l=1;
    for(i=0;i<10;i++)
    {
        for(j=0;j<=10-1;j++)
        {
           if(A[j]>A[j+1])
           {
               k=A[j];
               A[j]=A[j+1];
               A[j+1]=k;

           }
        }
        l++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
