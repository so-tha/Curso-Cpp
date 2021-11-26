#include<iostream>

int main ()
{
	//Operadores binarios e unarios;
	int n1,n2;
	float resultado;
	
	n1 = 10;
	n2 = 20;
	resultado = (float)n1 / n2;
	//apenas a n1 é float, fazendo com que o resultado possa ser float tambem.
	std::cout<<resultado;
	return 0;	
}

// n = n - 1 é igual a n -= 5, valendo para todos os operadores;