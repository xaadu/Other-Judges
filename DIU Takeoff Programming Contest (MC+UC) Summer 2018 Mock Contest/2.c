#include <stdio.h>

int main()
{
    int c,b,r1,r2,i,t;
    scanf("%d %d %d",&c,&b,&t);
    r1=t;
    r2=1;
    for(i=2; i<=b; i++)
    {
        scanf("%d",&t);
        /*if(t==r1)
            continue;*/
        if(r1<t)
        {
            r1=t;
            r2=i;
        }
    }
    printf("%d\n",r2);
    return 0;
}
