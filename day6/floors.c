#include <stdio.h>

int main(void) {

  int T,X,Y,dif,higher,lower,ans,hr,lr;

  scanf("%d",&T);
  
  for(int i=0;i<T;i++){
      scanf("%d",&X);
      scanf("%d",&Y);
      
      if(X>Y){
          higher=X;
          lower=Y;
      }
      else{
          higher=Y;
          lower=X;
      }
      
      if(higher%10!=0){
          
          hr=(higher/10)+1;
      }
      else{
          hr=(higher/10);
      }
      
      
      if(lower%10!=0){
          
          lr=(lower/10)+1;
      }
      else{
          lr=(lower/10);
      }

       printf("%d\n",hr-lr);
      
      
      
  }


	return 0;
}

