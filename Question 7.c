#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int t=0;
    int check=0;
    int s_largest=0;
    int a[10]={0};
    printf("Please Enter any 10 Numbers: \n\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        check=0;
        t=-1;
        for(j=0;j<10;j++)
        {
            if(a[i]<a[j]&&a[j]!=t)
            {
                t=a[j];
                check++;
            }
        }
        if(check==1)
            s_largest=a[i];
    }
    printf("\nThe Second Largest Number in the given 10 Numbers is: %d\n",s_largest);
    return 0;
}
