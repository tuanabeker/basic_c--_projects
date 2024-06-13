#include <iostream>
using namespace std;

int main() {
	int x, y, t;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y){
	        cout<<"loss"<<endl;
	    }else if(x<y){
	        cout<<"profit"<<endl;
	    }else{
	        cout<<"neutral"<<endl;
	    }
	        
	}
	return 0;
}
