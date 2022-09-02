#include <stdio.h>
int main()
{
    int i=0;
    int n=0;
    printf("Please Enter that how many integers you want to store in an Array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("\nPlease Enter %d integers in an Array:\n\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("\nNow your given Array is copied to another Array. Following is the Output of another Array:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
