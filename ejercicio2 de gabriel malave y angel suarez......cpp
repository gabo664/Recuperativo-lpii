#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int a,b;
	int menu;
	int suma,dividir ,multiplicar,resta;
	char continuar;
	do{
		cout<<"Bienvenido a Calculadora pro max ,eliga dentro de estas opciones :"<<endl;
		cout<<"1) Suma:"<<endl;
		cout<<"2) resta:"<<endl;
		cout<<"3) multiplicacion:"<<endl;
		cout<<"4) Division:"<<endl;
		cout<<"seleccione del (1/4):"<<endl;
		cin>>menu;
	
		switch(menu){
			case 1:
		cout<<"Ingrese tu primera cantidad:"<<endl;
	      cin>>a;
	    cout<<"ahora tu segunda cantidad:"<<endl;
	    cin>>b;
	     suma=a+b;
	       cout<<"resultado:"<<suma<<endl;
	       
			break;
			case 2:
		cout<<"Ingrese tu primera cantidad:"<<endl;
	      cin>>a;
	    cout<<"ahora tu segunda cantidad:"<<endl;
	    cin>>b;
	     resta=a-b;
	     cout<<"resultado:"<<resta<<endl;
			break;
			
			case 3:
		 cout<<"Ingrese tu primera cantidad:"<<endl;
	      cin>>a;
	    cout<<"ahora tu segunda cantidad:"<<endl;
	     cin>>b;
	      multiplicar=a*b;
	         cout<<"resultado:"<<multiplicar<<endl;
			break;
			case 4:
			 cout<<"Ingrese tu primera cantidad:"<<endl;
	      cin>>a;
	    cout<<"ahora tu segunda cantidad:"<<endl;
	     cin>>b;
		
			  if(b==0){
			
			  	cout<<"es indeterminado,no se puede dividir:"<<endl;
		}
		else{
				 dividir=a/b;
			  cout<<"resultado:"<<dividir<<endl;
		}
		   
		}
	    
	     cout<<"quieres continuar o prefieres salir , (s/n)"<<endl;
        cin>>continuar;
    }
        while(continuar=='s'|| continuar=='S');
        return 0;
    }
