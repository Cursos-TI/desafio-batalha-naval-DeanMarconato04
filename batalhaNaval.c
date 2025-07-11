    #include <stdio.h>

    int main (){

        int Tabuleiro [10][10] = {0}; //Matriz do tabuleiro 10x10 e inicialização em valor 0 (agua)

        char letras[10] = {'A','B','C','D','E','F','G','H','I', 'J'}; //Vetor das Letras do tabuleiro

        //Navios

            //Navio1 (vertical)
                for (int i = 0; i < 3; i++) {
                    Tabuleiro [i] [5] = 3;
                }

            //Navio2 (horizontal)
                for (int j = 1; j < 4; j++){
                    Tabuleiro [1][j] = 3;
                }

            //Navio3 (diagonal <=)
                for (int i = 0; i < 3; i++){ //Inicialmente define apenas o tamanho do navio
                    Tabuleiro [5 + i][3 - i] = 3; //Define que o navio3 inicia em linha [5(6)] e coluna [3(C)] e continua 1 posição à esquerda a cada impressão 
                }

            //Navio4 (diagonal =>)
                for (int i = 0; i < 3; i++){ //Inicialmente define apenas o tamanho do navio
                    Tabuleiro [7 + i][5 + i] = 3;
                }

        //Tabuleiro = Matriz 10x10 e exibição
            printf ("TABULEIRO BATALHA NAVAL \n"); // Exibe uma mensagem de apresentação do tabuleiro
            printf (" "); // Adiciona um espaço em branco para posteriormente imprimir a primeira coordenada ('A') espaçada

            for (int i = 0; i < 10; i++){ //Cria o Loop que incrementa i de 0 a 9 (i < 10). i será usado para representar as coordenadas verticais (colunas)
                
                printf (" %c", letras[i]); // A medida que i incrementa, é impresso - fora da grade 10x10 - o valor equivalente ao indice na "char letras [10]"
            }

            printf ("\n"); //Adiciona uma quebra de linha para apresentar a grade do tabuleiro

            //Grade    
            int linhas [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //Declaração da variavel linhas para os numeros das coordenadas horizontais
                    
            for (int i = 0; i < 10; i++) { //Cria um novo Loop que incrementa i de 0 a 9. i será usado para representar as coordenadas horizontais (linhas) 

                printf ("%2d", linhas [i]); // Define que esse i é o paramentro para imprimir os valores de "int linhas [10]" tal como i acima

                for (int j = 0; j < 10; j++){ //Cria o Loop para exibição da grade i = linha j = coluna
                printf (" %d", Tabuleiro [i][j]); //Exibe a grade 
                }
                printf ("\n");

                }

        return 0;
    }