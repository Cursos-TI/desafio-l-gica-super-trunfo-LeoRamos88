#include <stdio.h>

void Cadastro()
{

    int opcao;

    //Variáveis que irá contar a quantidade de pontos de cada carta
    int number_carta1 =0;
    int number_carta2 = 0;

//Essa estrutura Guarda dos dados da carta 
struct dados{
    
    int salvaer_numero;
    char codigo;
    char nome[20];
    int populacao ,ponto_turistico;
    float area,pib;
    float calculo_densidade,calculo_pib;
    float super_poder;
    };

    struct dados User[1];

    //Loop for que implementa um loop em cima dos dados da  carta
    for (int  i = 1; i <= 2; i++)
    {
        printf("Digite a letra da carta : ");
	    scanf(" %c", &User[i].codigo);

        printf("Nome da cidade : ");
        scanf("%s",&User[i].nome);


        printf("\nPopulação : ");
        scanf(" %d",&User[i].populacao);


        printf("Área : ");
        scanf("%f",&User[i].area);

        printf("Pib : ");
        scanf("%f",&User[i].pib);

        printf("Quantidade de pontos turísticos : ");
        scanf("%d",&User[i].ponto_turistico);

        User[i].calculo_densidade = (float) User[i].populacao / User[i].area;

        User[i].calculo_pib =  User[i].calculo_pib  / User[i].populacao;

        User[i].super_poder = User[i].populacao + User[i].area + User[i].pib + User[i].ponto_turistico;
        //Salvando valores referentes ao código da carta 
       

        printf("\n----------------------------------\n");


        printf("Estado : %c\n",User[i].codigo);

        printf("Código da carta : %c0%d\n",User[i].codigo,User[i].salvaer_numero);
        printf("Nome da cidade : %s\n",User[i].nome);

        printf("População : %d\nÁrea : %.2f km²\n",User[i].populacao,User[i].area);
        printf("Densidade Populacional : %.2f\n",User[i].calculo_densidade);
        printf("PIB : %.2f bilhões de reais\nPIB per Capita : %.2f\n",User[i].pib,User[i].calculo_pib);
        printf("Número de Pontos Turísticos : %d",User[i].ponto_turistico);

        printf("\n----------------------------------\n");


    }

    //O usuário dev escolher uma das 2 propriedades 
    printf("Deseja comparar as duas cartas ?\n ");
    printf("1.Sim\n");
    printf("2.Não\n");

    scanf("%d",&opcao);


    if (opcao == 1 )
    {
        if (User[0].populacao > User[1].populacao)
        {
            printf("A carta A0%d tem a maior população\n",User[0].salvaer_numero);
            number_carta1 +=1;
        }else{
            printf("A carta A0%d tem a maior população\n",User[1].salvaer_numero);
            number_carta2 +=1;
        }
        if (User[0].area > User[1].area)
        {
            printf("A carta A0%d possui a maior área\n",User[0].salvaer_numero);
            number_carta1 +=1;
        }else{
            printf("A carta A0%d possui a maior área\n",User[1].salvaer_numero);
            number_carta2 +=1;
        }
        
        if (User[0].pib > User[1].pib)
        {
            printf("A carta A0%d possui o maior pib\n",User[0].salvaer_numero);
            number_carta1 +=1;
        }else{
            printf("A carta A0%d possui o maior pib\n",User[1].salvaer_numero);
            number_carta2 +=1;
        }
        if (User[0].ponto_turistico > User[1].ponto_turistico)
        {
            printf("A carta A0%d possui mais pontos turísticos\n",User[0].salvaer_numero);
            number_carta1 +=1;
        }else{
            printf("A carta A0%d possui mais pontos turísticos\n",User[1].salvaer_numero);
            number_carta2 +=1;
        }

        if (User[0].calculo_densidade > User[1].calculo_densidade)
        {
            printf("A carta A0%d possui a menor densidade\n",User[0].salvaer_numero);
            number_carta1 +=1;
        }else{
            printf("A carta A0%d possui a menor densidade\n",User[1].salvaer_numero);
            number_carta2 +=1;
        }
        
        if (User[0].calculo_pib > User[1].calculo_pib)
        {
            printf("A carta A0%d possui o maior pib per capita\n",User[0].salvaer_numero);
            number_carta1 +=1;
        }else{
            printf("A carta A0%d possui o maior pib per capita\n",User[1].salvaer_numero);
            number_carta2 +=1;
        }

       if (User[0].super_poder > User[1].super_poder)
        {
            printf("A carta A0%d  venceu no super poder \n",User[0].salvaer_numero);
            number_carta1 +=1;
        }else{
            printf("A carta A0%d venceu no super poder \n",User[1].salvaer_numero);
            number_carta2 +=1;
        }
        
        printf("A carta vencedora é : ");

        if (number_carta1 > number_carta2)
        {
            printf("A carta AO1 venceu !!\n ");
            printf("Total de pontos : %d",number_carta1);
        }else if (number_carta2 > number_carta1)
        {
            printf("A carta AO2 Venceu !!\n ");
            printf("Total de pontos : %d",number_carta2);
        }
        else if (number_carta1 == number_carta2)
        {
            printf("EMPATE!!");
        }
        else{
            printf("Programa error!!!");
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