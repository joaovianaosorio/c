#include <stdio.h>

/* =========================================================================
   DEFINIÇÃO DA ESTRUTURA (O MOLDE DOS DADOS)
   =========================================================================
   Criamos um molde chamado ALUNO contendo um ID (inteiro) e uma Nota (float).
   Como os arquivos binários salvam blocos de tamanho fixo, usar structs
   facilita muito na hora de calcular os saltos de posição (fseek).
   ========================================================================= */
typedef struct {
    int id;
    float nota;
} ALUNO;

int main()
{
    /* Emite bipes sonoros no console apenas para dar um feedback visual/sonoro */
    printf("\a\a\a\a\a\a");

    /* Criamos um vetor (array) contendo 3 alunos já preenchidos.
       Eles ocupam espaços sequenciais na memória RAM. */
    ALUNO turma[3] = {
        {101, 8.5}, // Índice 0 (1º aluno)
        {102, 9.0}, // Índice 1 (2º aluno)
        {103, 7.5}  // Índice 2 (3º aluno)
    };

    /* =========================================================================
       1. GRAVAÇÃO DOS DADOS EM BINÁRIO
       ========================================================================= */
    /* Abrimos o arquivo "turma.dat" no modo "wb" (write binary / escrita binária).
       Se o arquivo não existir, ele é criado; se já existir, é sobrescrito. */
    FILE *f = fopen("turma.dat", "wb");

    if (f != NULL) {
        /* Escrevemos o vetor inteiro 'turma' de uma só vez no arquivo:
           - 1º argumento: O ponteiro/vetor de origem (turma)
           - 2º argumento: O tamanho em bytes de cada elemento (sizeof(ALUNO))
           - 3º argumento: A quantidade de elementos a gravar (3)
           - 4º argumento: O ponteiro do arquivo de destino (f) */
        fwrite(turma, sizeof(ALUNO), 3, f);

        /* Fechamos o arquivo para garantir que os dados foram salvos no disco */
        fclose(f);
    }

    /* =========================================================================
       2. LEITURA COM ACESSO DIRETO (UTILIZANDO SEEK_SET)
       ========================================================================= */
    /* Reabrirmos o arquivo no modo "rb" (read binary / leitura binária) */
    f = fopen("turma.dat", "rb");

    if (f != NULL){
        ALUNO a; // Variável temporária para guardar o aluno lido

        /* ---------------------------------------------------------------------
           SEEK_SET (Representado pelo número 0):
           Move o cursor de leitura para o INÍCIO do arquivo.
           Aqui, pulamos o equivalente a 1 aluno (índice 0) para cair direto
           no 2º aluno (índice 1).
           --------------------------------------------------------------------- */
        fseek(f, 1 * sizeof(ALUNO), SEEK_SET);

        /* Lendo o 2º aluno onde o cursor pousou */
        fread(&a, sizeof(ALUNO), 1, f);
        printf("2º Aluno (via SEEK_SET): ID = %d | Nota = %.1f\n", a.id, a.nota);

        /* =========================================================================
           3. MOvendo o cursor a partir da posição atual (UTILIZANDO SEEK_CUR)
           ========================================================================= */
        /* ---------------------------------------------------------------------
           SEEK_CUR (Representado pelo número 1):
           Move o cursor a partir do PONTO ATUAL onde ele está no momento.
           Como acabamos de ler o 2º aluno, o cursor está posicionado logo após ele.
           Se dermos um fseek com SEEK_CUR para trás (negativo), podemos voltar
           para o 1º aluno, por exemplo.
           --------------------------------------------------------------------- */
        fseek(f, -1 * sizeof(ALUNO), SEEK_CUR); // Recua 1 aluno a partir de onde estava

        fread(&a, sizeof(ALUNO), 1, f); // Vai ler o 2º aluno de novo
        printf("Releitura após SEEK_CUR: ID = %d | Nota = %.1f\n", a.id, a.nota);

        /* =========================================================================
           4. RETORNANDO AO INÍCIO COM REWIND
           ========================================================================= */
        /* O comando rewind(f) é um atalho prático que joga o cursor de volta
           para o início absoluto do arquivo (o mesmo que fseek(f, 0, SEEK_SET)). */
        rewind(f);

        fread(&a, sizeof(ALUNO), 1, f); // Lê o 1º aluno novamente
        printf("1º Aluno (após rewind):  ID = %d | Nota = %.1f\n", a.id, a.nota);

        /* =========================================================================
           5. LENDO DE TRÁS PARA FRENDE A PARTIR DO FIM (UTILIZANDO SEEK_END)
           ========================================================================= */
        /* ---------------------------------------------------------------------
           SEEK_END (Representado pelo número 2):
           Move o cursor para o FIM do arquivo.
           Geralmente usamos deslocamentos negativos a partir do SEEK_END para
           ler os últimos registros de um arquivo binário.
           --------------------------------------------------------------------- */
        // Posiciona o cursor exatamente no fim do arquivo
        fseek(f, 0, SEEK_END);

        // Recua o equivalente a 1 aluno para trás a partir do fim (pegando o 3º aluno)
        fseek(f, -1 * sizeof(ALUNO), SEEK_CUR);

        fread(&a, sizeof(ALUNO), 1, f);
        printf("Último Aluno (via SEEK_END): ID = %d | Nota = %.1f\n", a.id, a.nota);

        /* Fechamos o arquivo no final de todas as operações */
        fclose(f);
    }

    return 0;
}
