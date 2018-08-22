#include<bits/stdc++.h>
using namespace std;
int main(){
	int valor[10],*p_valor, i;
	
	for(i = 0 , p_valor = valor; i<10; i++, p_valor++){
		scanf("%i",p_valor);
	}
	for(i = 0 , p_valor = valor; i<10; i++, p_valor++){
		cout<<(*p_valor)<<" ";
		if(i==9){
			cout<<endl;
		}
	}
}
