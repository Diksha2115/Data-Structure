#include <stdio.h>

int main()
{
    int a[5],lar,i;
    {
        printf("enter the elements");
        for(i=0;i<5;i++)
        {
        scanf("%d ",&a[i]);
        }
        
        lar=a[0];
        for(i=0;i<5;i++)
        {
        
        if(lar<a[i])
        lar=a[i];
        }
        printf("largest element present in the array%d",lar);
    }

    return 0;
}
