#include <stdio.h>

int main()
{
    int a[5],min,i;
    {
        printf("enter the elements");
        for(i=0;i<5;i++)
        {
        scanf("%d ",&a[i]);
        }
        
        min=a[0];
        for(i=0;i<5;i++)
        {
        
        if(min>a[i])
        min=a[i];
        }
        printf("Smallest element present in the array%d",min);
    }

    return 0;
}
