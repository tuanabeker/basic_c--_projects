#include <iostream>
using namespace std;

int main() {
	int x, y, t;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>=y){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
