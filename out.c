#include<stdio.h>


int a[100];
int n, i;

void asd(int l,int r)
{
int t, m, i, j;
i=l;
j=r;
m=a[(l + r) / 2];
do
{
while(m < a[i])
{
i=i + 1;
}
while(m > a[j])
{
j=j - 1;
}
if(i <= j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
i=i + 1;
j=j - 1;
}
}while(!(i > j));
if(j > l)
{
asd(l,j);
}
if(i < r)
{
asd(i,r);
}
}

int main()
{
scanf("%d",&n);
for(i = 1; i <=n; i++)
{
scanf("%d",&a[i]);
}
asd(1,n);
return 0;
}

