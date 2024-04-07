#include <iostream>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};

main(){
    Estudiante estudiante;
	
	int fila =0,columna = 0;
	cout<<"cuantos Estudiantes desea agregar:";
	cin>>fila;	
	
	cout<<"Cuantas notas por Estudiante dese agregar:";
	cin>>columna;
	
	estudiante.codigo = new int [fila];
	estudiante.nombre = new string[fila];
	estudiante.notas = new int *[fila];
	for (int i=0;i<fila;i++){
	    cout<<"Codigo["<<i<<":]";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<":]";
		getline(cin,estudiante.nombre[i]);	
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"] :";
			cin>>*(*(estudiante.notas+i)+ii);
		}
		cout<<"_______________________________"<<endl;
	}
	cout<<"___________Mostrar Datos______________"<<endl;
	
	for (int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<":]"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<":]"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"] :"<<*(*(estudiante.notas+i)+ii)<<endl;
			}
		cout<<"________________________________________________"<<endl;
		
	}
	
	for (int i=0;i<fila;i++){
		delete[] estudiante.notas[i] ;
		}
	    delete[] estudiante.codigo ;
	delete [] estudiante.nombre ;
	delete [] estudiante.notas ;
	
	system("pause");
	
}
