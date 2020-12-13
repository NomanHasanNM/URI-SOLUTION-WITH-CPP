#include<stdio.h>
#include<iostream>
int main()
{
    int m,x,y;
    char moni[50];
    char noman[50];
    scanf("%d",&m);
    for(int i = 0; i < m; i++)
    {
        scanf("%s %s",&moni,&noman);
        x = 0;
        y =0;
        for(int j =0; j < 50; j++)
        {
            if(moni[j] == '\0') x = 1;
            if(noman[j] == '\0') y = 1;
            if(x == 1 && y ==1) break;
            if(x == 0)
                printf("%c",moni[j]);
            if(y == 0)
                printf("%c",noman[j]);

        }
        printf("\n");
    }
    return 0;
}
