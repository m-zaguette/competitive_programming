#include<bits/stdc++.h>
#define s(x) scanf("%i",p_valor)
#define p(x) printf("%i",p_valor)
#define ps(x) printf("%i",(*p_valor))
using namespace std;
int main(){
	int valor[5],*p_valor;
	int i=0, contpar=0, contimpar=0, contposi=0, contnega=0;
	
	for(i=0, p_valor=valor;i<5;i++, p_valor++){
		s(p_valor);
	}
	
	for(i=0, p_valor=valor;i<5;i++, p_valor++){
		if((*p_valor)%2==0){
			contpar++;
		}else{
			contimpar++;
		}
		if((*p_valor)>0){
			contposi++;
		}
		if((*p_valor)<0){
			contnega++;
		}
	}
	
	cout<<contpar<<" valor(es) par(es)"<<endl;
	cout<<contimpar<<" valor(es) impar(es)"<<endl;
	cout<<contposi<<" valor(es) positivo(s)"<<endl;
	cout<<contnega<<" valor(es) negativo(s)"<<endl;
	
	
	return 0;
}
