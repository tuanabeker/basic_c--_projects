#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a+b==c){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
