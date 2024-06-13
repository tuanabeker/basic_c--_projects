#include <iostream>
using namespace std;

int main() {
	int x, h, t;
	cin>>t;
	while(t--){
	    cin>>x>>h;
	    if(x>=h){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
