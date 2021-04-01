
#include <stdio.h>
int main()
{
    int noman,nahima,moni,loved;
    scanf("%d%d%d", &noman, &nahima, &moni);
    loved = noman+nahima+moni;
    if(loved < 0) loved = 24 + loved;
    printf("%d\n",loved%24);
    return 0;
}
