#include<iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main (){
	
	int n_secreto;
	
	int con_intentos=0;
	
	int intento=0;
	
	char JugarDeNuevo;
	
	int i;
	
	do{
		
		
		srand(time(0));
		
		n_secreto=rand() % 100 + 1;
		
		cout<<"bienvenido al juego"<<endl;
		cout<<"intenta ganar,elige un numero de 1 al 100"<<endl;
		
		do{
			cout<<"cual eliges"<<endl;
			cin>>intento;
			intento++;
			
			if(intento<n_secreto){
				
				cout<<"no es el numero indicado"<<endl;
				
			}
			else if (intento>n_secreto){
			
			 cout<<"no es el numero indicado"<<endl;
			
			}
			else if(intento=n_secreto){
			
			 cout<<"felicidades lo lograste!!"<<endl;
			
			}
			else{
			
			 cout<<"no lo lograste"<<endl;
			 cout<<"el numero secreto es"<<n_secreto<<endl;
			
			}
			
			
			
				}while(i=1);
				
				cout<<"intentelo de nuevo"<<endl;
				i++;
			
		}while(intento=5);
		

		return 0;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	




	



































