# 🃏 Jogo Super Trunfo - Batalha Interativa (Em C)

Bem-vindo à versão interativa do **Super Trunfo de Países**! Este projeto em C simula o clássico jogo de cartas, permitindo que o usuário cadastre cidades e, em seguida, **escolha estrategicamente quais atributos** entrarão na arena para o grande duelo.

## 🌟 Novidades desta Versão

O jogo agora é totalmente interativo e modularizado:
- **Menus Dinâmicos:** Um sistema de menu onde o jogador escolhe o primeiro e o segundo atributo para a batalha. O sistema é inteligente e impede que o mesmo atributo seja escolhido duas vezes.
- **Duelo Focado:** Em vez de comparar tudo de uma vez, o jogo foca apenas nos dois atributos escolhidos pelo jogador.
- **Soma de Atributos:** O grande vencedor da rodada é decidido pela soma dos valores dos dois atributos selecionados.
- **Código Modular:** Implementação de funções dedicadas (`exibirMenu`, `obterNomeAtributo`, `obterValorAtributo`) que deixam o código mais limpo e organizado.

## 📋 Atributos Disponíveis para Disputa

1. População
2. Área (km²)
3. PIB (bilhões de reais)
4. Pontos Turísticos
5. Densidade Populacional *(Atenção: nesta categoria isolada, a menor vence!)*
6. PIB per Capita
7. Super Poder

## 🚀 Como Executar o Jogo

### Pré-requisitos
Certifique-se de ter um compilador da linguagem C instalado no seu computador (como o **GCC**).

### Passos para compilar e rodar:

1. Clone este repositório ou baixe o arquivo fonte (`main.c`).
2. Abra o terminal (ou prompt de comando) e navegue até a pasta onde o arquivo está salvo.
3. Compile o código com o comando:
   ```bash
   gcc main.c -o super_trunfo
