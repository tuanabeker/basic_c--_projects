#include <iostream>
using namespace std;

int main() {
	int n, x, t;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n<=x){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
