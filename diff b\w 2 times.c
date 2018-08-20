#include<stdio.h>
void main()
{
    int h1,h2,m1,m2,s1,s2,dh,dm,ds;
    printf("start time: ");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Stop time: ");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    if(s2>s1)
    {
        --m1;
        s1=s1+60;
    }
    ds=s1-s2;
    if(m2>m1)
    {
        --h1;
        m1=m1+60;
    }
    dm=m1-m2;
    if(h2>h1)
    {
        h1=h1+24;
    }
    dh=h1-h2;
    printf("%d:%d:%d",dh,dm,ds);
}
