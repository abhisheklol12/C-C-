#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter table n=\n");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        j=n*i;
        printf("table is%d\n",j);
        
    }
    return 0;
}