#include <iostream>
#include <string>
#include <limits>

using namespace std;

void menu();

class Materia{
	private:
		int clave;
		string nombre;
		string profesorTit;
		string libroTexto;
	public:
		
		Materia(){
			clave=0;
			nombre="";
			profesorTit="";
			libroTexto="";
		}
		
		void imprime(){
			cout<<"Clave: "<<clave<<endl;
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Titulo del Profesor: "<<profesorTit<<endl;
			cout<<"Libro de Texto: "<<libroTexto<<endl;
		}
		
		void cambiarClave(int c){
			clave = c;
		}
		
		void cambiarProfe(string np){
			nombre = np;
		}
};

int main(){
	menu();
	return 0;
}

void menu(){
	Materia Programacion,BasesDatos;
	int op,cm;
	string dato;
	
		do{
			cout<<"1. Cambiar la clave de la materia Programacion\n";
			cout<<"2. Cambiar el nombre del maestro de BasesDatos\n";
			cout<<"3. Imprimir todos los datos de la materia BasesDatos\n";
			cout<<"4. Salir\n";
			cout<<"Opcion: ";cin>>op;
			
			switch(op){
				case 1:
					cout<<"Ingrese la nueva clave: ";cin>>cm;
					Programacion.cambiarClave(cm);
				break;
				case 2:
					cout<<"Ingrese el nuevo nombre: ";
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
					getline(cin,dato);
					BasesDatos.cambiarProfe(dato);
				break;
				case 3:
					BasesDatos.imprime();
				break;
				case 4:
					cout<<"Saliendo...";
				break;
				default:
					cout<<"Opcion Invalida\n";
				break;
			}
		}while(op!=4);
	
	
}
