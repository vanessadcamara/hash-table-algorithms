#include"tabelaHash.h"
#include"tabelaHash.c"
int main(){
    // escolher sempre um número primo para o tamanho porque evita colisões, apesar de as potencias de 2 melhorarem a velocidade
    Hash* ha = criaHash(1001); // tamanho da tabela é 1001
    liberaHash(ha);
    struct aluno al;
    al->matricula = 123;
    // al->nome = 'V';
    al->nota1 = 6;
    al->nota2 = 2;
    al->nota3 = 8;
    int x = insereHash_SemColisao(ha, al);
    return 0;
}