#include<iostream>
#include<cmath>
using namespace std;

int main(){
		while(true){
	char op;
	float numum, numdois, numtres, numquatro;
	
	cout << "digite aqui sua operacao: " << endl;
	cin >> numum >> op >> numdois;
	
	switch(op){
		case '+':
			cout << numum + numdois << endl;
		break;
		
		case '-':
			cout << numum - numdois << endl;
		break;
	
		case '*':
			cout << numum * numdois  << endl;
		break;
			
		case '/':
			cout << numum / numdois << endl;
		break;		
		
		case '^':
			cout << pow(numum, numdois) << endl;
		break;
		
		default: 
			cout << "dai vc me complica patraokkkkkkk" << endl;
		break;
	}
 
}
}
