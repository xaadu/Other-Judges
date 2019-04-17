#include<stdio.h>
int main()
{
    int x=0,i=0;
    char line[]="Competitive programming is a mind sport usually held over the Internet or a local network, involving participants trying to program according to provided specifications. Contestants are referred to as sports programmers. Competitive programming is recognized and supported by several multinational software and Internet companies, such as Google, and Facebook. There are several organizations who host programming competitions on a regular basis.";
    while(line[i]!='\0')
    {
        if(line[i]=='a')
            x++;
        i++;
    }
    printf("%d\n",x);
}
