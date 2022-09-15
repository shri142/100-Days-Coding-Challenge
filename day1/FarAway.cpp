#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,m,sum=0;
	    cin>>n>>m;
	    long long int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        if(A[i]<=m/2){
	            sum+= abs(m-A[i]);
	        }
	        else{
	            sum+= abs(A[i]-1);
	        }
	   }
	  
	    cout<<sum<<endl;
	}
	return 0;
}