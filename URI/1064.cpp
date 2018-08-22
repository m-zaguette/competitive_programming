#include<bits/stdc++.h>
#define s(x) scanf("%f",x)
#define pb(x) printf("%f ",(*x));
#define p(x) printf("%f ",x);
using namespace std;
int main(){
	float valor[6],*p_valor, media=0;
	int i=0,contador=0;
	
		for(i = 0 , p_valor = valor; i<6; i++, p_valor++){
			s(p_valor);
		}
		
		for(i = 0 , p_valor = valor; i<6; i++, p_valor++){
			if((*p_valor)>0){
				media = media + (*p_valor);
				contador++;
			}
		}
		
		cout<<contador<<" valores positivos"<<endl;

		media = media / contador;
		
		printf("%.1f\n",media);
		
	return 0;
}
