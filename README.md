# 🃏 Super Trunfo: Países

Este é um projeto em **C** que simula o clássico jogo de cartas "Super Trunfo", focado no cadastro e comparação de dados de cidades/estados.

## 📝 Sobre o Projeto

O programa permite que o usuário cadastre duas cartas, inserindo informações reais ou fictícias sobre cidades. Após o cadastro, o sistema calcula atributos especiais (como Densidade Populacional, PIB per Capita e um "Super Poder" exclusivo) e compara as duas cartas para definir a vencedora em cada categoria.

**Atributos comparados:**
* População (Maior vence)
* Área (Maior vence)
* PIB (Maior vence)
* Pontos Turísticos (Maior vence)
* Densidade Populacional (Menor vence)
* PIB per Capita (Maior vence)
* Super Poder (Maior vence)

## 🚀 Como Executar

### Pré-requisitos
Você precisará de um compilador C instalado na sua máquina (como o `gcc`).

### Passo a passo
1. Clone ou baixe este repositório.
2. Abra o terminal e navegue até a pasta onde o arquivo `main.c` (ou o nome que você deu ao seu script) está salvo.
3. Compile o código com o comando:
   ```bash
   gcc main.c -o super_trunfo
