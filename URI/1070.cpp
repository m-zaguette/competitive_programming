#include<bits/stdc++.h>
using namespace std;
int main(){
	int j=0, i=0;
	
	cin>>j;
	
	if(j%2==0){
		j++;
	}
	
	for(i=j;i<j+127;i+=2){
		cout<<i<<endl;
	}
	
	return 0;
}
