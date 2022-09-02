#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int a[10]={0};
    int b[10]={0};
    printf("Please Enter any 10 Numbers: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    for(i=0;i<10;i++)
    {
        k=0;
        for(j=0;j<10;j++)
        {
            if(a[i]>a[j])
            {
                k++;
            }
        }
        if(b[k]==-1)
        b[k]=a[i];
        else
        b[++k]=a[i];
    }
    printf("\nThe Given Array after Sorting is: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
