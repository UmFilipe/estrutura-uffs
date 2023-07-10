# Notação BIG O 

Esta notação se trata basicamente de uma ferramenta para analisar o custo de um algoritmo.

Esta análise é feita de maneira algébrica, onde a complexidade é medida em relação ao tamanho da entrada.

## Complexidades mais comuns (do melhor para o pior)

- Declarações de variável, comparações = O(1);
- Busca binária = O(logN) // pois o código será dividido por dois;
- Estruturas de repetição (for, while...) = O(N);
- O(N*logN);
- Repetições dentro de repetições = O(N²) ou O(N³), dependendo do número de repetições, desde que tenham a mesma entrada;
- Sequência de Fibonacci = O(2^N);
- Número de instruções executadas cresce muito rápido para um pequeno número de dados = O(N!).

## Notações

- Big O = descreve o limite superior de complexidade;
- Omega = descreve o limite inferior da complexidade;
- Theta = descreve o limite exato de complexidade;
- Little O = descreve o limite superior excluindo o limite exato.