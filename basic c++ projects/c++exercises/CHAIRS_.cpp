#include <iostream>
using namespace std;

int main() {
	int x, y, t;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y){
	        cout<<x-y<<endl;
	    }else {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
