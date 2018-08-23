#include<bits/stdc++.h>
#define s(x) scanf("%i",p_valor)
using namespace std;
int main(){
	int a,b;
	int i=0, contimpar=0;
	
	cin>>a>>b;

	if(a<b){
		for(i=a+1;i<b;i++){
			if(i%2!=0){
				contimpar+=i;
			}
		}
	}else{
		for(i=b+1;i<a;i++){
			if(i%2!=0){
				contimpar+=i;
			}
		}
	}
	cout<<contimpar<<endl;
	return 0;
}
