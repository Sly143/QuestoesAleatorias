/* Quest�es da Prova
   Quet�o 03.b */
   #include <stdio.h>
   #include <stdlib.h>
   struct caboclo{	// struct caboclo com uma vari�vel inteira e um vetor de 20 posi��es.
   	int x;
   	int vetor[20];
   }x;
   
  	int altera(struct caboclo x, int y){		// fun��o altera que modifica o tamanho do vetor na struct caboclo.
	int vetor[y];
   }
   
   int main(){
   	int s=0; // Vari�vel  que soma o Total de pontos do candidato.
   	int y;
	printf("Qual o numero de serie?\n");
   	scanf("%d",&x.x);
   	printf("Quantas questoes voce deseja somar?\n");
   	scanf("%d",&y);			// y definir� o total de questoes que o usu�rio vai entrar.
   	altera(x,y);   	
   	for(int i=0;i<y;i++){	// For pra agregar vari�veis em x.vetor de y posi��es na struct caboclo.
   		printf("Quantos pontos voce tirou nesta questao?\n");
   		scanf("%d",&x.vetor[i]);
   		s=s+x.vetor[i];	// Contagem de pontos.
	   	}
	printf("Numero de serie:%d\nNumero de pontos total:%d\n",x.x,s); 	// Saido com o numero de s�rie, e o total de ponto.
	system("PAUSE");
   }
