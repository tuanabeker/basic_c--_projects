#include <iostream>
using namespace std;

int main() {
	int x, y, a, b, m, r;
	cin>>a>>b>>x>>y;
	m=(2*a)+b;
    r=(2*x)+y;
	if(m>r){
	    cout<<"messi"<<endl;
	}else if(m<r){
	    cout<<"ronaldo"<<endl;
	}else{
	    cout<<"equal"<<endl;
	}
	    
	return 0;
}
