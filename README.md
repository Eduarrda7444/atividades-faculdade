# Atividade 1: Simulação de Buffer de Comunicação em C

Programa em C que simula o envio de mensagens entre remetente e destinatário, tratando *Buffer Overflow* de forma segura.

---

## Conceitos Utilizados

* **Alocação Dinâmica (`malloc`):** A variável `frase` simula o terminal do usuário, alocando memória dinamicamente no *Heap* para ler até 100 caracteres.
* **Alocação Estática:** O `buffer[30]` simula o canal de transmissão com capacidade fixa no *Stack*.
* **Proteção contra Overflow:** Valida se `strlen(frase) <= sizeof(buffer)` antes de executar o `strcpy()`.

---

## Fluxo do Código

1. **Leitura:** O usuário digita uma frase.
2. **Validação:** 
   * **Dentro do limite:** Se couber, copia para o buffer (`strcpy`) e exibe o recebimento.
   * **Acima do limite:** Se for maior, bloqueia o envio e exibe mensagem de erro.
3. **Limpeza:** O buffer é zerado (`buffer[0] = '\0'`) e a memória da frase é liberada com `free()`.

---

## Como Testar

```bash
gcc main.c -o main && ./main
