/* Quest�es da Prova
   Quet�o 03 */
   #include <stdio.h>
   #include <stdlib.h>
   #include <math.h>
   // Chico, fiz meu programa, mas n�o est� rodando com a formula certa de transforma��o de Fahrenheit em Celcius.
   int n=4,o=5;		// Vari�veis globais com o tamanho das matrizes. Mas f�cil trabalhar assim.
   int main(){
   	float C[n][o],F[n][o];	// Defini��o das duas matrizes.
   	int i,j;
   	for(i=0;i<n;i++){
   		for(j=0;j<o;j++){			// 2 For pra agregar vari�veis na Matriz C.
   			printf("Qual o valor em Celcius?\n");
   			scanf("%f",&C[i][j]);
   		   }
   	}
   	for(i=0;i<n;i++){
   		for(j=0;j<o;j++){
		   F[i][j]=2*C[i][j];//Essa formula de transforma��o de Fahrenheit em Celcius [5/9*(C[i][j]-32);] N�o est� dando certo, mas o algoritmo ta certo.
		   }
	   } 
	for(i=0;i<n;i++){
		printf("\n");		// 2 For pra mostrar o resultado final.
		for(j=0;j<o;j++){
			printf("%.1f ",F[i][j]);
		}
		printf("\n");
	}  	
   	system("PAUSE");
   }
