#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
 
	int n;
	char primeira_coluna[5];
	char ultima_coluna[5];
	
	int contador_colunas = 0;
	
	char matring[5][81];
	
	for (int i = 0; i<4; i++){
		scanf("%s", &matring[i]);
		primeira_coluna[i] = matring[i][0];
		
		for (int j = 0; matring[i][j] != '\0'; j++){
			if (matring[i][j+1] == '\0'){
				ultima_coluna[i] = matring[i][j];
				break;
			}
		}
	}
	
	int f = atoi(primeira_coluna);
	int l = atoi(ultima_coluna);
	contador_colunas = strlen(matring[0]);
	
	char coluna[5];
	for (int j = 1; j<contador_colunas-1; j++){
		
		for (int i = 0; i<4; i++){
			coluna[i] = matring[i][j];
		}
		
		int m = atoi(coluna);
		
		int c = (f*m + l) % 257;
		
		printf("%c", c);
	}
}
