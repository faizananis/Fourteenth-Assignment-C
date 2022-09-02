#include <stdio.h>
int main()
{
    int i=0;
    int sum=0;
    int a[10]={0};
    printf("Please Enter any 10 Numbers you want:\n\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nThe Sum of total 10 Numbers you entered is: %d\n",sum);
    return 0;
}
