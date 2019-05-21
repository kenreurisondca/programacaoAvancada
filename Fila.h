#ifndef FILA_H
#define FILA_H
#define MAXIMO 50
#include <iostream>

using namespace std;

class Fila
{
    public:
        Fila();
        virtual ~Fila();
        bool enqueue(int);
        bool isEmpty();
        void dequeue();
    	friend ostream & operator << (ostream &out, const Fila &c);
    	friend istream & operator >> (istream &in,  Fila &c);
    	friend int tamanho(const Fila&);
    protected:
        int contents[MAXIMO];
    private:
    	int ini;
        int fim;
        int getElem(int);
};

#endif // FILA_H
