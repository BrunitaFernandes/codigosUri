#include<iostream>

//Algoritmo de Fibonaccil, se alguem tiver sugestao usando recursao me fala :-)

int main(){
	int a[15] = {0,1}; //iniciando em zero
	int i = 0;	

	while(i < 12){ //rodando de o at� 12 nesse caso
		a[i+2] += a[i] + a[i+1]; 
		printf("%i + %i = %i\n", a[i+1], a[i], a[i+2]); //exibindo soma dos termos e resultado da soma para o terceiro termo
		i++;
	}

    return 0;
}

 
   
