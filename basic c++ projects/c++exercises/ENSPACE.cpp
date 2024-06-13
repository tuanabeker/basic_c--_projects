#include <iostream>
using namespace std;

int main() {
	int t, n, x, y;
	cin>>t;
	while(t--){
	    cin>>n>>x>>y;
	    if(n>=2*y+x){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
