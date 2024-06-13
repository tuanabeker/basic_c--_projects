#include <iostream>
using namespace std;

int main() {
	int n=0;
	cin>>n;
	if(n>=6 && n<=8){
	    cout<<"yes"<<endl;
	}else if(n<1 || n>10){
	    cout<<"please enter a number between 1 and 10"<<endl;
	}else{
	    cout<<"no"<<endl;
	}
	return 0;
}
