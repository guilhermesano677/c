 <stdio.h>


int idade;
char sexo;


void leitura() {
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Digite M para masculino e F para feminino: ");
    scanf(" %c", &sexo); 
}


int alistamento() {
    if ((sexo == 'M' || sexo == 'm') && idade == 18) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    leitura(); 

    
    int alist = alistamento();
    int cont = 0;

    printf("O retorno da função alistamento = %d\n", alist);

    if (alistamento() == 1) {
        printf("\tAlistamento obrigatório\n");
        cont++;
    } else {
        printf("\n\tAlistamento não obrigatório\n");
    }

    
    printf("\nQuantos devem se alistar? %d\n", cont);

    return 0; 
}
