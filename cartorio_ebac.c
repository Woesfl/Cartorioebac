#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <stdlib.h> // Biblioteca para alocação de memória
#include <locale.h> // Biblioteca para configuração de idioma e formato de dados

int main() {
	int opcao = 0; // Define a váriavel
	int laço = 1;

	for (laço = 1; laço = 1;) {
		system("cls");

		setlocale(LC_ALL,
		          "Portuguese_Brasil.1252"); // Define o idioma para Português, para lidar com acentuação corretamente


		printf("### Cartório da EBAC ###\n\n"); // Imprime o título do cartório na tela
		printf("Escolha a opção desejada do menu\n\n"); // Solicita ao usuário que escolha uma opção do menu
		printf("\t1 - Registrar nomes\n"); // Exibe a opção 1 do menu: registrar nomes
		printf("\t2 - Consultar nomes\n"); // Exibe a opção 2 do menu: consultar nomes
		printf("\t3 - Deletar nomes\n\n"); // Exibe a opção 3 do menu: deletar nomes
		printf("Opção: ");  // fim do menu

		scanf("%d", &opcao); //estamos armazenando as informações

		system("cls");

		switch (opcao) {
			case 1:
				printf("você escolheu o registro  de nomes!\n");
				system("pause");
				break;

			case 2:
				printf("Você escolheu consultar os nomes!\n");
				system("pause");
				break;

			case 3:
				printf("você escolheu o registro  de nomes!\n");
				system("pause");
				break;

			default:
				printf("Lamentamos pelo ocorrido, porém está opção não é válida\nEscolha entre 1 a 3\n");
				system("pause");
				break;

		}
	}

}

