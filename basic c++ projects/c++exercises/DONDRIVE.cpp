#include <iostream>
using namespace std;

int main() {
	int t=0, aim=0, colctd=0, needed=0;
	cin>>t;
    for(int i=0; i<t; i++){
        cin>>aim>>colctd;
        needed= aim-colctd;
        cout<<needed<<endl;
    }
	return 0;
}
