#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(n+1<=k){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
