#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    int a[10]={0};
    int greatest=0;
    printf("Please Enter any 10 Numbers: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]<a[j])
            {
                break;
            }
        }
        if(j==10)
        {
            greatest=a[i];
            break;
        }
    }
    printf("\nThe greatest Number in the given 10 Numbers is: %d\n",greatest);
    return 0;
}
