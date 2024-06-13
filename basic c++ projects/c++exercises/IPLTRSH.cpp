#include <iostream>
using namespace std;

int main() {
	int n=0, t=0, tickets=0;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>tickets;
	    if(tickets>=n){
	        cout<<"0"<<endl;
	    }else{
	        cout<<n-tickets<<endl;
	    }
	}
	return 0;
}
