#include <stdio.h>
#include <stdlib.h>

int escolhaOpcao(int op){
    printf ("\nEscolha a opção para formar a figura:\n1=Figura 01\n2=Figura 02\n3=Figura 03\n4=Figura 04\n0=Para sair do programa\n");
    scanf("%d", &op);
    return op;
}
//Figura 01
void formarFigura1(){
    int i, j, left, right;
    left=9;
    right=5;
    for (i=0;i<5;i++){ // i é o número de linhas
        printf("\n");
        for (j=0;j<=9;j++){
            if (j>left || j<right) printf(" ");
            else printf("*");
        }
        right--;//Decrementa para direita
        left--; //Decrementa para a esquerda
    }
}
//Figura 02
void formarFigura2(){
    int i, j, left, right;
    left=5;
    right=5;
    for (i=0;i<5;i++){
        printf("\n");
        for (j=1;j<=9;j++){
            if (j<left || j>right) printf(" ");
            else printf("*");
        }
        left--; // Decrementa para a esquerda
        right++; //Aumenta para a direita
    }
}
//figura 03
void formarFigura3(){
    int i, j, left, right;
    left=5;
    right=5;
    for (i=0;i<4;i++){
        printf("\n");
        for (j=1;j<=9;j++){
            if (j==left || j==right) printf("*");
            else printf(" ");
        }
        left++; // Aumenta para a esquerda
        right--; //Decrementa para a direita
    }
    printf("\n*********");
}
//Figura 04- parte 01
void formarFigura4P1(){
    int i, j, op, left, right;
    left=5;
    right=4;
    for (i=0;i<4;i++){ // i é o número de linhas
        printf("\n");
        for (j=1;j<=9;j++){
            if (j<left || j<right) printf("  ");
            else printf("*");
        }
        left++; //Aumenta
        right--;//decrementa
    }
}
//Figura 04- parte 02
void formarFigura4P2(){
    int i, j, op, left, right;
        left=0;
        right=9; 
        for (i=0;i<5;i++){ // i é o número de linhas
            printf("\n");
            for (j=1;j<=9;j++){
                if (j<left || j<right) printf("  ");
                else printf("*");
            }
            left++; //Aumenta
            right--;//Decrementa
        }        
}

int main(){
    int i, j, op, left, right;
    do{
        op=escolhaOpcao(op);
        system("clear");
        switch (op){
            case 1:
                formarFigura1();
                break;
            case 2:
                formarFigura2();
                break;
            case 3:
                formarFigura3();
                break;
            case 4:
                formarFigura4P1();
                formarFigura4P2();
                break;
        }
        if (op>4) printf("Opção inválida\n");
    }while (op!=0);
    
    printf("\nPrograma encerrado...");
    return 0;
}