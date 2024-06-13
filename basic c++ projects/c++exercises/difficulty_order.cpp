#include <iostream>
using namespace std;


void order(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    order();
	}
	return 0;
}
