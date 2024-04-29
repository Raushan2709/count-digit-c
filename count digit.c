#include<stdio.h>
int main()
{
    int n;
    printf("enter digit : ");
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("count %d",count);

    return 0;
    
}