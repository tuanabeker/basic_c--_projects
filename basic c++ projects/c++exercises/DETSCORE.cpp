#include <iostream>
using namespace std;

int main() {
	int t=0, x=0, n=0, score=0;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>n;
	    score=(x/10)*n;
	    cout<<score<<endl;
	}
	return 0;
}
