#include<bits/stdc++.h>
using namespace std;
int maxdc(int nume,int deno){
	if(deno == 0){
		return nume;
	}else{
		return maxdc(deno,nume%deno);
	}
}
int main(){
	int a,b,c,d;
	char op;
	int x;
	int nume,deno,mdc;
	
	cin>>x;
	
	while(x--){
		scanf("%i / %i %c %i / %i",&a,&b,&op,&c,&d);
		
		//res = numerador E max = denominador;
		
		// A = N1	B = D1	C = N2	D = D2
		if(op=='+'){
			//(N1*D2 + N2*D1) / (D1*D2)
			nume = (a*d) + (c*b);
			deno = (b*d);
		}else if(op=='-'){
			//(N1*D2 - N2*D1) / (D1*D2)
			nume = (a*d) - (c*b);
			deno = (b*d);
		}else if(op=='*'){
			//(N1*N2) / (D1*D2)
			nume = a*c;
			deno = b*d;
		}else if(op=='/'){
			//(N1*D2)/(N2*D1);
			nume = a*d;
			deno = b*c;
		}
		
		//mdc = mdc(res,max);
		mdc = maxdc(nume, deno);
		
		mdc = abs(mdc);
		
		cout<<nume<<"/"<<deno<<" = "<<nume/mdc<<"/"<<deno/mdc<<endl;
	}
	return 0;
}
