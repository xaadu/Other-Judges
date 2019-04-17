#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x<1||x>100)
        return 0;
    (x<=71)?printf("Ghumao\n"):printf("Varsity Jao\n");
    return 0;
}
