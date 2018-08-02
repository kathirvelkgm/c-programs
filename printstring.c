#include<stdio.h>
int main()
{
int i,n;char a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
for(i=0;i<n;i++)
{
printf(:"%s",a[i]);
}
return 0;
}
