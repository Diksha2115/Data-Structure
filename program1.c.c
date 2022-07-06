1.	Write a program to find second minimum and second maximum elements of a given array

#include<stdio.h>
int  main( )
{
int  a[20], b[20], n, sml=0, pos, i, j, temp ;
printf(" Enter the Numbers of terms: ") ;
scanf("%d",&n) ;
printf("\n Enter the terms : \n") ;
for(i=1;i<= n;i++)
{
scanf("%d ",& a[i]) ;
b[i] = a[i] ;
}
for (i=1;i<=n; i++)
{
for (j=1;j<=n; j++)
{
if (a[i] <= a[j])
{
temp = a[i] ;
a[i] = a[j] ;
a[j] = temp ;
}}}
printf("\n The Array Elements are: \n") ;
for (i=1;i<=n;i++)
printf(" %d \t",b[i]) ;

printf("\n Second Smallest Element is : %d",a[2]) ;
printf("\n Second Largest Element is : %d",a[n-1]) ;
return (0) ;
}



