#include<stdio.h>
int main()
{
    int i,j,l;
    
    for (i=5;i>=1;i--)
    {
        for(j=0;j<5-i;j++)
        {
        printf("\t");
        }
        for(j=i;j<=((2*i)-1);j++)
        {
            printf("%d\t",j);
            l=(2*i-2);
        }
      for(j=l;j>=i;j--)

        {
            printf("%d\t",j);
        }
        l=0;
        printf("\n");
    }
    return 0;
}
