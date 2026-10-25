#include <stdio.h>

// Define a estrutura (o molde) chamada PRODUTO
typedef struct {
    int id;       // Campo para guardar o código identificador do produto
    float preco;  // Campo para guardar o valor monetário do produto
} PRODUTO;

int main()
{
    // Emite bipes sonoros no console (apenas um efeito visual/sonoro inicial)
    printf("\a\a\a\a\a\a");

    // Cria uma variável do tipo PRODUTO chamada p1 e já preenche seus dados
    PRODUTO p1 = {501, 29.90f};

    // Abre (ou cria) um arquivo chamado "produto.dat" no modo de ESCRITA BINÁRIA ("wb")
    FILE *f = fopen("produto.dat", "wb");

    // Verifica se o ponteiro é diferente de NULL (garantindo que o arquivo abriu com sucesso)
    if (f != NULL){
        // Escreve o bloco de dados da struct p1 diretamente no arquivo binário:
        // 1º argumento: Endereço de memória de onde os dados saem (&p1)
        // 2º argumento: O tamanho exato em bytes de um PRODUTO (sizeof(PRODUTO))
        // 3º argumento: A quantidade de elementos que queremos escrever (1)
        // 4º argumento: O ponteiro do arquivo destino (f)
        fwrite(&p1, sizeof(PRODUTO), 1, f);

        // Fecha o arquivo para salvar os dados definitivamente no disco
        fclose(f);
    }

    // Cria uma nova variável PRODUTO vazia chamada p2 para receber os dados lidos
    PRODUTO p2;

    // Reabre o mesmo arquivo "produto.dat", agora no modo de LEITURA BINÁRIA ("rb")
    f = fopen("produto.dat", "rb");

    // Verifica se o arquivo foi aberto com sucesso para leitura
    if (f != NULL){
        // Lê o bloco de dados binários do arquivo e joga para dentro da struct p2:
        // 1º argumento: Endereço de memória de onde os dados vão entrar (&p2)
        // 2º argumento: O tamanho do bloco a ser lido (sizeof(PRODUTO))
        // 3º argumento: A quantidade de blocos (1)
        // 4º argumento: O ponteiro do arquivo de origem (f)
        fread(&p2, sizeof(PRODUTO), 1, f);

        // Imprime na tela os dados recuperados da struct p2
        printf("Lido do binário -> ID: %d | Preço: R$ %.2f\n", p2.id, p2.preco);

        // Fecha o arquivo após terminar a leitura
        fclose(f);
    }

    // Encerra o programa com sucesso
    return 0;
}
