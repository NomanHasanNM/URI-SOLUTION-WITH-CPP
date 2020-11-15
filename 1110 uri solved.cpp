
#include <stdio.h>
#include <deque>

int main(){
    int a, j;

    while(1){
             scanf("%d",&a);
             if(a == 0) break;
             std::deque<int> noman;
             for(j = 1; j <= a; j++){
                   noman.push_back(j);
             }

             printf("Discarded cards: ");
             while(noman.size() > 1){
                  if(noman.size() != 2) printf("%d, ", noman.front());
                  else printf("%d\n", noman.front());
                  noman.pop_front();
                  noman.push_back(noman.front());
                  noman.pop_front();
             }
             printf("Remaining card: %d\n",noman.front());
    }
    return 0;
}
