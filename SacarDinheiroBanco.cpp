/******************************************************************* 
* Integrantes: Paulo H. Lopes e Juliana Andrielle * 
* Trabalho Pr�tico 1 
*******************************************************************/ 

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Valor total do �suario
	int l,i=0,p=0,u=0,k=0; // Contadores das c�dulas de 100,50,20 e 10 na respectiva ordem.
	printf("Insrira Valor total\n");
	scanf ("%d", &l);
	while(l>=100){	//Se o numero for maior que 100 entra nesse la�o
		l=l-100;		//A cada vez que ele roda, diminui 100 do valor e soma um no contador
		i++;
	}
	while(l>=50){	// Quando n�o for mais acessivel no while de cima, ele desce
		l=l-50;		// Realiza as opera��es e as somat�rias nos contadores at� n�o haver mais c�dulas dispon�veis.
		p++;
	}
	while(l>=20){
		l=l-20;
		u++;
	}
	while(l>=10){
		l=l-10;
		k++;
	}
	printf ("O senhor(a) possui:\n %d notas de 100;\n %d notas de 50;\n %d notas de 20;\n %d notas de 10;\n\n Obrigado e volte sempre.\n",i,p,u,k);
	system ("PAUSE"); // Ao final, imprime o numero de c�dulas de cada tipo na tela na ordem de maior para menor.
	
}
