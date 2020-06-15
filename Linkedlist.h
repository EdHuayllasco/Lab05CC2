#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_
#include "nodo.h"
using namespace std;

class LinkedList
{
public:
	LinkedList();
	void set_head(Nodo *);
	Nodo* get_head();
	Nodo* Buscar(int);
	void Eliminar(int);
	void  IngresaInt(int);
	void Imprimir();
	int GetSize();
	~LinkedList();

private:
	int size;
	Nodo *head;
};

LinkedList::LinkedList()
{
	size = 0;
	head = NULL;
}
void LinkedList::set_head(Nodo *C){
	head=C;
}

Nodo* LinkedList::get_head(){
	return head;
}

void LinkedList::IngresaInt(int nuevo){
	Nodo *nuevo_nodo= new Nodo(nuevo);
	Nodo *temp=head;
	if(!head){
		head=nuevo_nodo;
	}else{
		while((temp->getSiguiente())!=NULL){
			temp=temp->getSiguiente();
		}
		temp->setSiguiente(nuevo_nodo);
	}
	size++;
}

void LinkedList::Eliminar(int pos){
	Nodo *Temp=head;
	Nodo *Temp1=Temp->getSiguiente();
	if(pos<1 || pos > size){
		cout<<"No se Encuentra, mentirosin"<<endl;
	}
	else{ 
		for(int i=2;i<=pos;i++){
			if(i==pos){
				Nodo *aux=Temp1;
				Temp->setSiguiente(Temp1->getSiguiente());
				delete aux;
				size--;
			}
			Temp=Temp->getSiguiente();
			Temp1=Temp1->getSiguiente();
		}
	}
	if(pos==1){
		Nodo *aux=Temp;
		head=Temp1;
		delete aux;
		size--;
	}

}
void LinkedList::Imprimir(){
	Nodo *temp=head;
	if(!head){
		cout<<"cadena vacia"<<endl;
	}
	else{
		while(temp){
			temp->imprimir();
			if(!temp->getSiguiente())cout<<"NULL";
			temp=temp->getSiguiente();
		}
	}
}
int LinkedList::GetSize(){
	return size;
}

LinkedList::~LinkedList()
{
	Nodo *p = head;
	Nodo *ac;
	while (p!=NULL){
		ac=p->getSiguiente();
		delete p;
		p=ac;
	}
	head = NULL;
}
#endif // !__LINKEDLIST_H_
