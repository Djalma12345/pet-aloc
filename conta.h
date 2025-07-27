#ifndef Conta_h
#define Conta_h

#include "usuario.h"

/**
 * Estrutura do tipo Conta, contendo um usuário, número, saldo e movimentações
 */
typedef struct conta
{
    Usuario *usuario;
    int nConta;
    float saldo;
    float *movimentacoes;
    int qtdMovimentacoes;
}Conta;

/**
 * @brief Cria uma nova conta, alocando ela mesmo e as movimentações dinamicamente.
 * @param usuario usuario da conta.
 * @param nConta numero da conta.
 * @return Conta criada.
 */
Conta *CriaConta(Usuario *usuario, int nConta);

/**
 * @brief Retorna o usuario de uma conta.
 * @param conta uma conta.
 * @return Usuario da conta.
 */
Usuario *RecuperaUsuario(Conta *conta);

/**
 * @brief Retorna o numero de uma conta.
 * @param conta uma conta.
 * @return Numero da conta.
 */
int RecuperaNConta(Conta *conta);

/**
 * @brief Retorna a quantidade de movimentacoes de uma conta de uma conta.
 * @param conta uma conta.
 * @return Quantidade de movimentacoes da conta.
 */
int RecuperaQtdMovimentacoes(Conta *conta);

/**
 * @brief Retorna o saldo de uma conta.
 * @param conta uma conta.
 * @return saldo da conta.
 */
float RecuperaSaldo(Conta *conta);

/**
 * @brief Realiza o saque em uma conta.
 * @param conta conta que ocorre a operacao.
 * @param valor valor do saque realizado.
 * @return valor do saque realizado, 0 se nao foi possivel realizar.
 */
float Saque(Conta *conta, float valor);

/**
 * @brief Tranfere um valor deuma conta para outra.
 * @param contaOri conta origem da transferencia.
 * @param contaDes conta destino da transferencia.
 * @param valor valor da tranferencia realizada.
 * @return valor da tranferencia realizada, 0 se nao for possivel.
 */
float Transferencia(Conta *contaOri, Conta *contaDes, float valor);

/**
 * @brief Retorna o historico de movimentacos da conta.
 * @param conta uma conta.
 * @return as movimentacoes da conta.
 */
float *RecuperaMovimentacoes(Conta *conta);

/**
 * @brief Realiza o deposito em uma conta.
 * @param conta conta que ocorre a operacao.
 * @param valor valor do deposito realizado.
 * @return valor do saque realizado, 0 se nao foi possivel realizar.
 */
void Deposito(Conta *conta, float valor);

/**
 * @brief Imprime uma conta (número, saldo e usuário) no formato especificado.
 * @param conta conta a ser impressa.
 */
void ImprimeConta(Conta *conta);

/**
 * @brief Destroi uma conta, liberando as movimentações e ela mesma da memória.
 * @param conta uma conta.
 */
void DestroiConta(Conta *conta);

#endif