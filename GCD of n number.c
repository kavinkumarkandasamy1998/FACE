#include<stdio.h>
void main()
{
    int a,b[100],i,n=0,j,count=0,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
        if(n<b[i])
        {
            n=b[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<a;j++)
        {
            if(b[j]%i==0)
            {
                count++;
            }
        }
        if(count==a)
        {
            k=i;
        }
        count=0;
    }
    printf("%d",k);
}
