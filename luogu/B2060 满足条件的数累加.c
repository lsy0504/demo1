#include <stdio.h>
int main()
{
    int m,n;
    int sum=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%17==0)
        {
            sum+=i;
        }else{
            continue;
        }
    }
    printf("%d",sum);
    return 0;
}
