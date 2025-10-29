#include<iostream>
using namespace std;

int main(){

int deposito=0;

int retiro=0;

int saldo=500;

int op;

int i=0;

cout<<"su saldo disponible es: "<<saldo<<endl<<endl;

do{

    cout<<"1-deposito bancario"<<endl<<endl;
	cout<<"2-retiro de fondos"<<endl<<endl;
	cout<<"3-consulta de saldo"<<endl<<endl;
	
	
	cout<<"elija una opcion"<<endl;
    cin>>op;
	
	
	switch(op){
		
		case 1:
		cout<<"cuanto desea depositar"<<endl;
		cin>>deposito;
		
		saldo=deposito+saldo;
		break;
		
		case 2:
		cout<<"cuanto desea retirar"<<endl;
		cin>>retiro;
		
		saldo=saldo-retiro;
		
		if(retiro>500){
			
			cout<<"no pude llevarse a cabo esta operacion"<<endl;
		}
		
		break;
		
		case 3:
		cout<<"tu saldo es :"<<saldo<<endl<<endl;
		break;
		
		default:
			cout<<"no es una de las opciones "<<endl;
		break;	
	}
	
	cout<<"retornar"<<endl;
	i++;
	
		
}while(i=1);


return 0;

}

