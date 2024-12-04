#include <stdio.h>

int Cadastro()
{
    struct dados{
    
    int salvaer_numero;
    char codigo;
    char nome[20];
    int populacao ,ponto_turistico;
    float area,pib;
    float calculo_densidade,calculo_pib;
    };

    struct dados User[0];
    

    for (int incremento = 0;incremento <= 7 ;incremento++ )
    {
        for(int i = 1;i <= 4;i++)
    {

        printf("Digite a letra da carta : ");
	    scanf("%c", &User[incremento].codigo);

        printf("Nome da cidade : ");
        scanf("%s",&User[incremento].nome);


        printf("\nPopulação : ");
        scanf(" %d",&User[incremento].populacao);


        printf("Área : ");
        scanf(" %f", &User[incremento].area);

        printf("Pib : ");
        scanf(" %f", &User[incremento].pib);

        printf("Quantidade de pontos turísticos : ");
        scanf(" %d",&User[incremento].ponto_turistico);

        User[incremento].calculo_densidade = (float) User[incremento].populacao / User[incremento].area;

        User[incremento].calculo_pib =  User[incremento].calculo_pib  / User[incremento].populacao;

        //Salvando valores referentes ao código da carta 
        User[incremento].salvaer_numero = i;

        printf("\n----------------------------------\n");


        printf("Estado : %c\n",User[incremento].codigo);

        printf("Código da carta : %c0%d\n",User[incremento].codigo,User[incremento].salvaer_numero);
        printf("Nome da cidade : %s\n",User[incremento].nome);

        printf("População : %d\nÁrea : %.2f km²\n",User[incremento].populacao,User[incremento].area);
        printf("Densidade Populacional : %.2f\n",User[incremento].calculo_densidade);
        printf("PIB : %.2f bilhões de reais\nPIB per Capita : %.2f\n",User[incremento].pib,User[incremento].calculo_pib);
        printf("Número de Pontos Turísticos : %d",User[incremento].ponto_turistico);

        printf("\n----------------------------------\n");

    }

    }

}



int main()
{
    int entrar ;

    printf("##### Jogo super triunfo #####\n\n");

    printf("OPÇÕES DO JOGO :\n");
    printf("1.Entrar\n");
    printf("2.Regras\n");
    printf("3.Sair\n");

    printf("Escolha uma das opções :: ");
    scanf("%d",&entrar);

    if (entrar == 1)
    {
        Cadastro();
    }
    



    return 0;
}
