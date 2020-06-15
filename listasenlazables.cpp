#include <iostream>
#include "LinkedList.h"
#include "nodo.h"
using namespace std;

int main(){
	LinkedList *Cadena=new LinkedList();
	//cout<<"agregar"<<endl;
	/*Aux= new Nodo();
	Aux->setInt(8);
	Aux->imprimir();
	Aux1=new Nodo();
	Aux1->setInt(10);
	Aux1->imprimir();*/
	Cadena->IngresaInt(8);
	Cadena->IngresaInt(10);
	Cadena->IngresaInt(12);
	Cadena->IngresaInt(9);
	Cadena->Imprimir();
	cout<<endl;
	Cadena->Eliminar(1);
	Cadena->Imprimir();
	cout<<endl<<Cadena->GetSize();
	
	return 0;
}