#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
	int x, y, t, d;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    d=x-y;
	    cout<<abs(d)<<endl;
	}
	return 0;
}
