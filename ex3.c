#include <stdio.h>

int main(void) {
  char opc;

  printf("Digite o modo de lavagem: ");
  opc = getchar();
  getchar();

  int LES = 0;
  int ES = 0;
  int S = 0;

    switch (opc) {
      case 'L':
	LES++;
	printf("Sua roupa vai ser lavada, secada e enxaguada");
	break;
      case 'E': 
	ES++;
	printf("Sua roupa vai ser secada e enxaguada");
	break;
      case 'S':
	S++;
	printf("Sua roupa vai ser secada");
	break;
    }

  return 0;
}