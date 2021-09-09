#include<stdio.h>
int main()
{
    int n;

    printf("Enter the array size of data : ");
        scanf("%d",&n);
    int data[n],loc,item,i;
    for(i=1;i<=n;i++)
    {
        printf("Enter the data of array is %d :",i);
        scanf("%d",&data[i]);
    }
      printf("Enter the search data of array is : ");
      scanf("%d",&item);
      data[n+1]=item;
      loc =1;
      while(data[loc]!=item)
      {
          loc++;
      }
      if(loc == n+1)
      {
          loc =0;
          printf("The data of array at location is  not found %d\n",loc);

      }
      else
      {
          printf("The data of array at location is %d\n",loc);
      }
      return 0;

}
