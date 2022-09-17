#include <stdio.h>

int main(void) {

  int T,N;
  

  scanf("%d",&T);
  
  for(int i=0;i<T;i++){
      scanf("%d",&N);
      
      if(N%2==0){
          
          for(int j=0;j<N;j++){
              
              if(j==0 || j==N-1){
                  printf("0");
              }
              else{
                  printf("1");
              }
          }
      }
      else{
          
          for(int k=1;k<=N;k=k+2){
            
              if(k==N){
                  printf("0");
                  break;
              }
              
              printf("01"); 
              
          }
             
          
          
      }
      
      printf("\n");
  }


	return 0;
}
