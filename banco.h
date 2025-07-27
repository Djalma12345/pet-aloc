#ifndef Banco_h
#define Banco_h

#include "conta.h"

/**
 * Uma estrutura do tipo Banco contendo todas as contas registradas, a quantidade delas e outros parâmetros necessários para manipulação das contas
 */
typedef struct Banco
{
    Conta **contas;
    int qtdContas, qtdAloc;
}Banco;

/**
 * @brief Busca uma conta.
 * @param bank Banco contendo todas as contas.
 * @param nConta número da conta buscada.
 * @return Conta buscada, NULL se nao existir.
 */
Conta *BuscaConta(Banco *bank, int nConta);

/**
 * @brief Cria um novo banco e inicializa seus parâmetros, alocando dinamicamente o banco e o vetor de contas.
 * @return Um banco inizializado.
 */
Banco *CriaBanco();

/**
 * @brief Executa o loop principal do sistema.
 * Verifica a opção, faz as leituras necessárias da entrada padrão e chama todas as funções correspondentes.
 * @param bank Um banco já inicializado que guarda todas as informações.
 */
void ExecutaBanco(Banco *bank);

/**
 * @brief Destroi um banco, liberando da memória todos os usuários, contas e si mesmo.
 * @param bank Um banco a ser liberado.
 */
void DestroiBanco(Banco *bank);

/**
 * @brief Realiza um saque em determinada conta do banco, usando a função Saque.
 * @param bank Um banco.
 * @param nConta Número da conta que será saqueada.
 * @param valor Valor a ser sacado.
 */
void SaqueNoBanco(Banco *bank, int nConta, float valor);

/**
 * @brief Realiza um depósito em determinada conta do banco, usando a função Deposito.
 * @param bank Um banco.
 * @param nConta Número da conta que na qual será depositado.
 * @param valor Valor a ser depositado.
 */
void DepositoNoBanco(Banco *bank, int nConta, float valor);

/**
 * @brief Realiza uma transferência de uma conta para outra do banco, usando a função Transferencia.
 * @param bank Um banco.
 * @param nContaOri Número da conta de origem da transferência.
 * @param nContaDes Número da conta de destino da transferência.
 * @param valor Valor da transferência.
 */
void TransfereNoBanco(Banco *bank, int nContaOri, int nContaDes, float valor);

/**
 * @brief Cadastra uma nova conta no banco, criando ela e o usuário com as funções CriaUsuario e CriaConta.
 * Além disso, faz toda a manipulação de memória necessária.
 * @param bank Um banco.
 * @param nome Nome do usuário a ser cadastrado.
 * @param cpf CPF do usuário a ser cadastrado.
 * @param nConta Número da conta a ser cadastrada.
 */
void CadastraNoBanco(Banco *bank, char *nome, int cpf, int nConta);

/**
 * @brief Imprime o relatório de um banco, imprimindo cada uma de suas contas no formato especificado.
 * @param bank Um banco cujo relatório será impresso.
 */
void ImprimeRelatorio(Banco *bank);

/**
 * @brief Imprime o extrato de determinada conta, imprimindo as movimentações recentes no formato especificado.
 * @param bank Um banco.
 * @param nConta Número da conta cujo extrato será impresso.
 * @param qtdMov As "n" movimentações recentes solicitadas para serem impressas.
 */
void ImprimeExtrato(Banco *bank, int nConta, int qtdMov);

#endif