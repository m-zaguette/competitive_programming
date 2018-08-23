#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0;
		
	cin>>a;
	
	for(int i=1;i<=a;i++){
		if(i%2==0){
			cout<<i<<"^2 = "<<(long long)(pow(i,2))<<endl;
		}
	}
	
	return 0;
}
