#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(5*y>2*x){
	        cout<<"candy"<<endl;
	    }else if(5*y<2*x){
	        cout<<"chocolate"<<endl;
	    }else{
	        cout<<"either"<<endl;
	    }
	}
	return 0;
}
