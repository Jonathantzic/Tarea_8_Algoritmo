#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	
	private : string nit;
	
	public : 
	Cliente (){
	}
	Cliente(string nom, string ape, string dir,int tel,string n) : Persona(nom,ape,dir){
		nit = n;
		
		}
		void setNit(string n){nit = n;}
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setTelefono(int tel){telefono = tel;}
		
		string getNit(){
			return nit;
		}
		
		void mostrar(){
			cout<<"_________________"<<endl;
			cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		}
};
