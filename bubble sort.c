#include<stdio.h>
void main ()
int a {3,8,5,7,42}, n;
{
int i ,j ,t;
for (i=0;i<n;i++)
  {
 	for (j=0;j<n-1-i;j++)
	 {
 	if(a[j] > a[j+1])
 	 {
 		t=a[j];
 		a[j]=a[j+1];
 		a[j+1]=t;
	 }
  }
  }
 printf("%d",a[i]);
}
