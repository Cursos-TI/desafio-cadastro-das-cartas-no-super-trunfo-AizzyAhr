#include <stdio.h>

int main (){

char estado;
char codcarta[20];
char cidade[20];
float populacao;
float area;
float pib;
int pontosturisticos;

printf("Seja bem-vindo ao super trunfo cartas, escolha um estado abaixo. \n");

printf("A) Minas Gerais \n" "B) São Paulo \n" "C) Mato Grosso \n" "D) Bahia \n" "E) Manaus \n" "F) Rio de Janeiro \n" "G) Acre \n" "H) Rio Grande Do Sul \n");
scanf(" %c", &estado);

printf("Escolha o código da sua carta: \n" " %c01, %c02, %c03, %c04: ", estado, estado, estado, estado );
scanf("%s", codcarta);

printf("Escolha um nome para a sua cidade:");
scanf("%s", cidade);

printf("População da sua cidade:");
scanf("%f", &populacao);

printf("Área da sua cidade:");
scanf("%f", &area);

printf("Pib da sua cidade:");
scanf("%f", &pib);

printf("Pontos turisticos:");
scanf("%d", &pontosturisticos);


printf("Carta 1 \n" "Estado: %c\n" "Código da carta:%s\n" "Nome da cidade:%s\n" "População:%2.f\n" "Área:%2.fkm²\n" "Pib:%1.f Bilhões\n" "Número de pontos turisticos:%d\n",estado,codcarta,cidade,populacao,area,pib,pontosturisticos );


printf("Carta 2\n");


printf("A) Minas Gerais \n" "B) São Paulo \n" "C) Mato Grosso \n" "D) Bahia \n" "E) Manaus \n" "F) Rio de Janeiro \n" "G) Acre \n" "H) Rio Grande Do Sul \n");
scanf(" %c", &estado);

printf("Escolha o código da sua carta: \n" " %c01, %c02, %c03, %c04: ", estado, estado, estado, estado );
scanf("%s", codcarta);

printf("Escolha um nome para a sua cidade:");
scanf("%s", cidade);

printf("População da sua cidade:");
scanf("%f", &populacao);

printf("Área da sua cidade:");
scanf("%f", &area);

printf("Pib da sua cidade:");
scanf("%f", &pib);

printf("Pontos turisticos:");
scanf("%d", &pontosturisticos);



printf("Carta 2 \n" "Estado: %c\n" "Código da carta:%s\n" "Nome da cidade:%s\n" "População:%2.f\n" "Área:%2.fkm²\n" "Pib:%1.f Bilhões\n" "Número de pontos turisticos:%d",estado,codcarta,cidade,populacao,area,pib,pontosturisticos );
}
