#include<stdio.h>
int main()
{
    int n;
    printf("Enter the data of array size  is : ");
    scanf("%d",&n);
    int data[n],beg,end,mid,loc,item,i;
    for(i=1;i<=n;i++)
    {
        printf("Enter the data of array is %d : ",i);
        scanf("%d",&data[i]);
    }
    printf("Enter the search data of array is : ");
    scanf("%d",&item);
    beg = 1;
    end = n;
    mid = (beg+end)/2;
    while(data[mid]!=item && beg<=end)
    {
        if(data[mid]>item)
        {
            end = n-1;
        }
        else
        {
            beg = n+1;
        }
        mid = (beg+end)/2;
    }
    if(data[mid]!=item)
    {
        loc =0;
        printf("The data of array at location is not found %d\n",loc);
    }
    else
    {
        loc =mid;
        printf("The data of array at location is  found %d\n",mid);
    }
}
