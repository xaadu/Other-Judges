#include<stdio.h>
int main()
{
    int n,l,r,t,y,x,j,a;
    scanf("%d",&t);
    for(x=1; x<=t; x++)
    {
        y=0;
        scanf("%d %d %d",&n,&l,&r);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&a);
            if(j>=l&&j<=r)
                    y^=a;
        }
        printf("Case #%d: %d\n",x,y);
    }
}
