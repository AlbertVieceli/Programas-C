#include<stdio.h>
#include<stdlib.h>

typedef struct Agenda{

char nome[50];
char email[50];
char  telefone[50];

} agenda;


agenda* criar_contado(){
    agenda* contato;
    char ch;
    contato = malloc(sizeof(agenda));
    printf("\n............Digite o nome do contato da  agenda ...........\n");
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
    fgets(contato->nome,40,stdin);


    printf("\n............Digite o email do contado da agenda ..................\n");
    fflush(stdin);
    fgets(contato->email,40,stdin);

    printf("\n........Digite o telefone do contato.......\n");
    fflush(stdin);
    fgets(contato->telefone,40,stdin);


    printf("\n--------Lendo os dados da struct-----------\n");

    printf("O nome do contato e : %s \n",contato->nome);
    printf("O email do contato e : %s \n",contato->email);
    printf("O telefone do contato e : %s \n",contato->telefone);

    return contato;
}
void mostrar_contato(agenda* contato){
    printf("O nome do contato e : %s \n",contato->nome);
    printf("O email do contato e : %s \n",contato->email);
    printf("O telefone do contato e : %s \n",contato->telefone);
}


int main (){
    agenda* contatos[20];
    int tamanho = 1, op;
    for(int i =0; i<20; i++){
        contatos[i] = NULL;
    }

    do{
        printf("0 - Encerrar programa\n");
        printf("1 - add novo contato:\n");
        printf("2 - Remover contato:\n");
        printf("3 - Editar contato:\n");
        printf("4 - mostrar os contatos:\n");
        scanf("%d", &op);
        switch(op){
            case 1:{
                if(tamanho <= 20){
                    contatos[tamanho - 1] = criar_contado();
                    tamanho++;
                }else{
                    printf("lista cheia, impossivel adicionar mais contato \n");
                }
            }break;
            case 2:{
                int pos;
                printf("informe a posição que deseja deletar(entre 1 e 20): ");
                scanf("%d", &pos);
                mostrar_contato(contatos[pos-1]);
                if(pos > 0 && pos< tamanho){
                    free(contatos[pos-1]);
                    contatos[pos-1] = NULL;
                    for(int i = pos-1; i < tamanho-1; i++){
                        contatos[i] = contatos[i+1];
                    }
                    tamanho--;
                }
            }break;
            case 3:{
                int pos, opc;
                char ch;
                printf("informe a posição que deseja editar(entre 1 e 20): ");
                scanf("%d", &pos);
                mostrar_contato(contatos[pos-1]);
                printf("oq dejesa editar: \n");
                printf("1- O nome\n");
                printf("2- O email \n");
                printf("3- O telefone: \n");
                scanf("%d", &opc);
                if(opc == 1){
                    printf("digite o novo nome:");
                    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
                    fgets(contatos[pos-1]->nome,40,stdin);
                }else if( opc == 2){
                    printf("digite o novo email:");
                    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
                    fgets(contatos[pos-1]->email,40,stdin);
                }else if(opc == 3){
                    printf("digite o novo telefone:");
                    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
                    fgets(contatos[pos-1]->telefone,40,stdin);
                }
            }break;
            case 4:{
                for(int i =0; i<tamanho-1; i++){
                    printf("contato %i\n", i);
                    mostrar_contato(contatos[i]);
                }
            }break;
            case 0:{
                for(int i =0; i<tamanho; i++){
                    free(contatos[i]);
                }
            }break;
        }
    }while(op != 0);

    return 0;
}
