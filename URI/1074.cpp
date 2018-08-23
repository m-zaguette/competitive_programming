#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0, b=0;
		
	cin>>a;
	
	while(a--){
		cin>>b;
		
		if(b==0){
			cout<<"NULL"<<endl;
		}
		else if(b%2==0){
			cout<<"EVEN ";
		}else{
			cout<<"ODD ";
		}
		if(b>0){
			cout<<"POSITIVE"<<endl;
		}
		else if(b<0){
			cout<<"NEGATIVE"<<endl;
		}
	}
	
	return 0;
}
