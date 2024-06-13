#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<=4 && x>=1){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
