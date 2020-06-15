#ifndef	__NODO_H_
#define __NODO_H_
#include <string>
using namespace std;
class Nodo{
private:
	int elem;
	Nodo *next;
public:
	
	Nodo();
	Nodo(int);
	void setInt(int);
	void setSiguiente(Nodo *);
	int getint();
	Nodo* getSiguiente();
	void imprimir();
	virtual ~Nodo();
};
Nodo::Nodo(){
	elem=0; 
	next=NULL;
}
Nodo::Nodo(int a){
	elem=a;
	next=NULL;
}
void Nodo::imprimir(){
	cout<<elem<<"->";
}

void Nodo::setInt(int n){
	elem=n;
}

void Nodo::setSiguiente(Nodo *a){
	next=a;
}
int Nodo::getint(){
	return elem;
}
Nodo* Nodo::getSiguiente(){
	return next;
}
Nodo::~Nodo() {}
#endif //!__NODO_H_

