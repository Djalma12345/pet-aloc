#ifndef Usuario_h
#define Usuario_h

/**
 * Uma estrutura do tipo Usuario contendo um nome e CPF
 */
typedef struct usuario
{
    char *nome;
    int cpf;
}Usuario;


/**
 * @brief Cria um usuario, alocando si mesmo e seu nome dinamicamente.
 * @param nome nome do usuario.
 * @param cpf cpf do usuario.
 * @return Usuario criado.
 */
Usuario *CriaUsuario(char *nome, int cpf);

/**
 * @brief Retorna o nome de um usuario.
 * @param usuario  um usuario.
 * @return nome do usuario.
 */
char *RecuperaNomeUsuario(Usuario *usuario);

/**
 * @brief Retorna o cpf de um usuario.
 * @param usuario  um usuario.
 * @return cpf do usuario.
 */
int RecuperaCpfUsuario(Usuario *usuario);

/**
 * @brief Imprime um usuario (Nome e CPF) no formato especificado.
 * @param usuario um usuario a ser impresso.
 */
void ImprimeUsuario(Usuario *usuario);

/**
 * @brief Destroi um usuario, liberando o nome e ele mesmo da memória.
 * @param usuario um usuario.
 */
void DestroiUsuario(Usuario *usuario);

#endif