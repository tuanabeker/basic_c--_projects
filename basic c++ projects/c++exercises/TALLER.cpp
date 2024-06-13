#include <iostream>
using namespace std;

int main() {
	int x=0, y=0, t=0;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y;
	    if(x<y){
	        cout<<"b"<<endl;
	    }else if(x>y){
	        cout<<"a"<<endl;
	    }
	}
	return 0;
}
