#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int smallest=0;
    int a[10]={0};
    printf("Please Enter any 10 Numbers: \n\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]>a[j])
            {
                break;
            }
        }
        if(j==10)
        {
            smallest=a[i];
            break;
        }
    }
    printf("\nThe Smallest Number in the given 10 Numbers is: %d\n",smallest);
    return 0;
}
