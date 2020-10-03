#include <iostream>
#include "Coda.h"

using namespace std;

int inserisci(coda &c, int e)

/*
 * Inserisce in coda l'elemento e
 * Implementare anche il controllo di coda piena.
 * restituisce 0 se l'inserimento è avvenuto
 * restituisce -1 se non è stato possibile inserire il nuovo 
 * elemento
 */
{
	int temp = -1;
	if(c.fine<N){
    c.queue[c.fine]=e;
    c.fine++;
    temp=0;
  }
	
	return temp;
}

void scorri( coda &c){
	int i;
	int pos=c.testa;
	for(i=c.testa;i<c.fine;i++){
		c.queue[i-pos]=c.queue[i];
		c.fine=c.fine-pos;
		c.testa=0;
	}
}

int estrai(coda &c)
/*
 * Estrae e restituisce il primo elemento in coda
 * Restituisce 0 se la coda è vuota
 */
{
	int temp = 0;
	if(c.testa!=N){
    		temp=c.queue[c.testa];
   		 c.testa++;
		scorri(c);
  }
	
	return temp;
}

void stampa (coda c)
/*
 * Stampa tutti gli elementi presenti in coda oppure 
 * un messaggio di coda vuota nel caso in cui non ci
 * siano elementi in coda.
 */
{
	if(c.fine==0){
    cout<<endl<<"tutte le posizioni della coda sono vuote"<<endl;
  }
  else{
    for(int i=0;i<N;i++){
      cout<<"in posizione "<<i<<" è presente"<<c.queue[i]<<endl;
    }
  }
  }

