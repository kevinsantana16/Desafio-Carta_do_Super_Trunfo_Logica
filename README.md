# 🃏 Jogo Super Trunfo - Países (Em C)

Bem-vindo ao repositório do **Super Trunfo de Países**! Este é um projeto desenvolvido em linguagem C que simula o clássico jogo de cartas, onde você cadastra dados de cidades e o sistema define automaticamente a carta vencedora com base em seus atributos.

## 📋 Sobre o Projeto

O programa permite o cadastro de duas cartas de cidades, recebendo dados como população, área, PIB e pontos turísticos. A partir desses dados base, o sistema calcula dois atributos adicionais:
* **Densidade Populacional:** Habitantes por km² (neste jogo, quanto *menor*, melhor!).
* **PIB per Capita:** Riqueza dividida pela população.
* **Super Poder:** A soma de todos os atributos (com a densidade populacional invertida), criando um status final de poder da carta.

No final, o programa exibe um relatório detalhado e compara as duas cartas, definindo a vencedora em cada categoria.

## ✨ Funcionalidades

- [x] Leitura segura de dados de diferentes tipos (char, strings, float, unsigned long int).
- [x] Tratamento de buffer de teclado durante as leituras com `scanf`.
- [x] Cálculos matemáticos precisos com conversão de tipos (casting).
- [x] Comparação lógica utilizando operadores relacionais e operador ternário.
- [x] Interface via terminal simples e intuitiva.

## 🚀 Como Executar o Jogo

### Pré-requisitos
Para rodar este código, você precisará de um compilador da linguagem C instalado no seu computador, como o **GCC**.

### Passos para compilar e rodar:

1. Clone este repositório ou baixe o arquivo fonte (`main.c`).
2. Abra o terminal (ou prompt de comando) e navegue até a pasta onde o arquivo está salvo.
3. Compile o código digitando o seguinte comando:
   ```bash
   gcc main.c -o super_trunfo
Execute o programa recém-compilado:

No Windows:

DOS
super_trunfo.exe
No Linux / macOS:

Bash
./super_trunfo
🎮 Como Jogar
Siga as instruções exibidas na tela para cadastrar as duas cartas. Você deverá informar:

Estado: Uma letra de A a H (representando o estado).

Código da Carta: A letra do estado seguida de um número (Ex: A01, B02).

Nome da Cidade: O nome completo da cidade.

População: O número total de habitantes.

Área: O tamanho da cidade em km².

PIB: O Produto Interno Bruto em bilhões.

Pontos Turísticos: A quantidade de locais turísticos na cidade.

Após inserir os dados da Carta 1 e Carta 2, veja o placar e descubra qual carta dominou a partida!

Projeto desenvolvido para fins de estudo e prática de fundamentos da linguagem C.


***

**Como salvar isso:**
Basta criar um arquivo chamado `README.md` na mesma pasta onde está o seu arquivo `.c` e colar todo o texto que está dentro do bloco acima.
