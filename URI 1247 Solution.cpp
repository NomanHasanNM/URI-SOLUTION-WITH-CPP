#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
      int D,VF,VG,ami=12;
      double yeah,yoo,tmi;
                  while(scanf("%d %d %d",&D,&VF,&VG)==3){
                        tmi= (double )sqrt((ami*ami+(D*D)));
                        yeah= (double)ami/VF;
                        yoo=(double) (tmi/VG);
                  if(yoo>yeah)
                  printf("N\n");
                  else
                  printf("S\n");
                  }
      return 0;
}
