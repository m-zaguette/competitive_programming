#include<bits/stdc++.h>
#define s(x) scanf("%i",x)
#define pb(x) printf("%i ",(*x));
#define p(x) printf("%i ",x);
using namespace std;
int main(){
	int valor[5],*p_valor;
	int i=0,contador=0;
	
		for(i = 0 , p_valor = valor; i<5; i++, p_valor++){
			s(p_valor);
		}
		
		for(i = 0 , p_valor = valor; i<5; i++, p_valor++){
			if((*p_valor)%2==0){
				contador++;
			}
		}
		
		cout<<contador<<" valores pares"<<endl;
		
	return 0;
}
