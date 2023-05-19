#include<iostream>
using namespace std;
int GCD(int a, int b){
	int n;
  	for(int i=1;i<=a;i++){
  		if(a%i==0 && b%i==0)	n=i;
  	}
  	return n;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
