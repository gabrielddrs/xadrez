# ♟️ Simulação de Movimentos de Peças de Xadrez em C ♟️
## Estudo de Recursividade e Loops para Movimentos de Tabuleiro

[![Linguagem](https://img.shields.io/badge/Linguagem-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Tópico](https://img.shields.io/badge/Tópico-Recursividade%20e%20Loops-orange)](README.md)

## 📖 Descrição do Projeto

Este projeto em linguagem C demonstra, de forma simplificada e didática, os movimentos básicos de algumas peças de xadrez (Torre, Bispo, Rainha e Cavalo) utilizando duas abordagens de programação: **recursividade** e **loops de repetição**.

O objetivo é ilustrar como estruturas de controle e funções recursivas podem ser usadas para simular o movimento repetitivo das peças em um tabuleiro, imprimindo a direção de cada passo (como "Cima" e "Direita").

---

## 🚀 Funcionalidades e Peças Implementadas

O código implementa funções para simular os seguintes movimentos:

| Peça | Função(ões) | Abordagem | Descrição do Movimento Simulado |
| :--- | :--- | :--- | :--- |
| **Torre** | `torreCima`, `torreDireita` | Recursividade | Movimento vertical (Cima) e horizontal (Direita) por um número definido de casas. |
| **Bispo** | `bispoDiagonal` | Recursividade | Movimento diagonal simulado (um passo "Cima" seguido por um passo "Direita") por um número definido de repetições. |
| **Bispo** | `bispoComLoops` | Loops Aninhados | Repete o movimento diagonal, simulando um percurso em que `vertical == horizontal`. |
| **Rainha** | `rainhaMovimento` | Recursividade | Simulação de movimento diagonal (combinação de movimentos da Torre e do Bispo em um único padrão repetitivo). |
| **Cavalo** | `cavaloMovimento` | Loops Aninhados | Simulação de um movimento "L" padrão (2 passos Cima, 1 passo Direita). |

---

## 💻 Abordagens Utilizadas

### 1. Recursividade (Funções `torreCima`, `bispoDiagonal`, `rainhaMovimento`)

As funções recursivas são utilizadas para simular movimentos que se repetem de forma linear ou diagonal até um número limite (`casas`).

* A condição de parada (`if (casas <= 0) return;`) garante que a função não se chame infinitamente.

### 2. Loops de Repetição (Funções `bispoComLoops`, `cavaloMovimento`)

* **Loops Aninhados:** Usados para simular a necessidade de passos em duas dimensões (vertical e horizontal) e aplicar condições específicas de movimento (ex: `if (i != j)` para a diagonal ou `if (up != 2 || right != 1)` para o Cavalo).

---

## ⚙️ Requisitos e Instalação

### Requisitos

* Compilador C (**GCC** ou **Clang**).
* Sistema operacional compatível com C padrão.

### Como Compilar e Executar

1.  **Salve o Código:** Salve o código-fonte em um arquivo chamado `xadrez_movimentos.c`.

2.  **Abra o Terminal:** Navegue até o diretório onde o arquivo foi salvo.

3.  **Compile o Código:** Use o GCC para gerar o executável.

    ```bash
    gcc xadrez.c -o xadrez
    ```

4.  **Execute o Programa:** Inicie a simulação.

    ```bash
    ./xadrez
    ```

---

## 🖥️ Exemplo de Saída (Console)

A execução do programa com os valores iniciais (`casas=3`, `vertical=3`, `horizontal=3`) produzirá a seguinte saída:
=== Movimento da Torre === Cima Cima Cima Direita Direita Direita

=== Movimento do Bispo (Recursividade) === Cima Direita Cima Direita Cima Direita

=== Movimento do Bispo (Loops Aninhados) === Cima Direita Cima Direita Cima Direita

=== Movimento da Rainha === Cima Direita Cima Direita Cima Direita

=== Movimento do Cavalo === Cima Cima Direita
