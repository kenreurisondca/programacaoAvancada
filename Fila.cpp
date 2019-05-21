#include "Fila.h"

Fila::Fila()
{
    ini = 0;
    fim = 0;
}

Fila::~Fila()
{

}

bool Fila::enqueue(int x){
    if(fim == MAXIMO){
        return false;
    }
    contents[fim++] = x;
    return true;
}

void Fila::dequeue(){
	if(fim == ini){
		return;
	}
	++ini;
}
int Fila::getElem(int x){
    return contents[x];
}

bool Fila::isEmpty(){
	return ((ini - fim) == 0);
}


//Funções amigas
ostream & operator << (ostream &out, const Fila &c)
{
	out << "-" << endl;
    for(int i=c.ini; i<c.fim; i++){
    	out << c.contents[i] << endl;
	}
}
 
istream & operator >> (istream &in,  Fila &c)
{
    return in;
}

int tamanho(const Fila &c){
	return c.fim- c.ini;
}

