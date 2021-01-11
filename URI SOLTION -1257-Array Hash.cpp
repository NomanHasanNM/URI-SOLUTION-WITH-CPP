#include <stdio.h>

int main(){
    int a, z, f, d, n;
    char noman[51];
    int love;

    scanf("%d",&a);
    for(z = 0; z < a; z++){
        scanf("%d%*c",&d);
        love = 0;
        for(f = 0; f < d; f++){
            scanf("%[^\n]%*c",&noman);
            for(n = 0; noman[n] != '\0'; n++){
                love += noman[n] - 65 + f + n;
            }
        }
        printf("%d\n", love);
    }
    return 0;
}
