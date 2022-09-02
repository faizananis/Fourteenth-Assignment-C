#include <stdio.h>
int main()
{
    int i=0;
    int n=0;
    printf("Please Enter that how many integers you want to store in an Array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nPlease Enter %d integers in an Array:\n\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe Given Array in the Reverse Order will be:\n\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
