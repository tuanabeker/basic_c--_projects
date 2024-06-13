#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin>>t;
	while(t--){
	  cin>>a>>b;
	  int sum;
	  sum=a+b;
	  if (sum %2==0){
	      cout<<"yes"<<endl;
	  }else{
	      cout<<"no"<<endl;
	  }
	}
	return 0;
}
