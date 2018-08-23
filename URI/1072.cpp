#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0, b=0, in=0, out=0;
		
	cin>>a;
	
	while(a--){
		cin>>b;
		if(b>=10 && b<=20){
			in++;
		}else{
			out++;
		}
	}


	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	
	return 0;
}
