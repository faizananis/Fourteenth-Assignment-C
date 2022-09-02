#include <stdio.h>
int main()
{
    int i=0;
    int sumEven=0;
    int sumOdd=0;
    int a[10]={0};
    printf("Please Enter any 10 Numbers: \n\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sumEven=sumEven+a[i];
        }
        else if(a[i]%2==1)
        {
            sumOdd=sumOdd+a[i];
        }
    }
    printf("\nThe Sum of all Even Numbers is: %d\n",sumEven);
    printf("\nThe Sum of all Odd Numbers is: %d\n",sumOdd);
    return 0;
}
