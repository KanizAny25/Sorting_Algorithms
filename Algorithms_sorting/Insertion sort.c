#include<stdio.h>
int main()
{
    int n;
    printf("Enter the data of array size is : ");
    scanf("%d",&n);
    int A[n],temp,ptr,k,i;
    for(i=1;i<=n;i++)
    {
        printf("Enter the data of array is %d : ",i);
        scanf("%d",&A[i]);
    }
    for(k=2;k<=n;k++)
    {
        temp = A[k];
        ptr = k-1;
        while(temp<A[ptr] &&ptr>0)
        {
            A[ptr+1]= A[ptr];

            ptr = ptr-1;
        }
        A[ptr+1]=temp;
    }
    for(i=1;i<=n;i++)
    {
        printf("The insertion sort is : %d\n",A[i]);
    }
    return 0;


}
