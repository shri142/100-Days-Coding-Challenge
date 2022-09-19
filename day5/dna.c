#include <stdio.h>
#include <stdio.h>

int main() {
	    int T,N;
	
	    scanf("%d\n",&T);
		
		for (int i=0;i<T ;i++ ){
		
		scanf("%d\n",&N);
		   
		   char str[N];
		  
		   
		   for (int j=0;j<N ;j++ ){
		       
		      scanf("%c\n",&str[j]);
		       
		   } 
		    
		  
		  
		   
		   for (int k=0;k<N ;k++ ){
		       if (str[k]=='0' && str[k+1]=='0') {
		           printf("A");
		       }
		       if (str[k]=='0' && str[k+1]=='1') {
		           printf("T");
		       }
		       if (str[k]=='1' && str[k+1]=='0') {
		           printf("C");
		       }
		       if(str[k]=='1' && str[k+1]=='1'){
		            printf("G");
		       }
		       
		       k++;

               	       

		   }
		   
		   printf("\n");
		   }
	
	return 0;
}
