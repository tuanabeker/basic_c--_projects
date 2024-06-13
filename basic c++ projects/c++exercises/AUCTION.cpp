#include <iostream>
using namespace std;
#include<math.h>

int main() {
	int t, a, b, c, mx, mxx;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    mx=max(a,b);
	    mxx=max(mx,c);
	    if(mxx==a){
	        cout<<"alice"<<endl;
	    }else if(mxx==b){
	        cout<<"bob"<<endl;
	    }else if(mxx==c){
	        cout<<"charlie"<<endl;
	    }
	        
	}
	return 0;
}
