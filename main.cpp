#include <iostream>
#include "Fila.cpp"
using namespace std;

int main(){
	
    Fila f = Fila();
    
	int i=0;
    while(f.enqueue(++i));
    
	while(!f.isEmpty()){	
    	cout << f;
    	f.dequeue();
    }
    
}
