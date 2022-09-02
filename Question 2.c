#include <stdio.h>
int main()
{
    int i=0;
    int a[10]={0};
    float average=0;
    int sum=0;
    printf("Please Enter any 10 Numbers: \n\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    average=sum/10.0;
    printf("\nThe Average of total 10 Numbers that you entered is: %f\n",average);
    return 0;
}
