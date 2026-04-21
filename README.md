# Shellsort Inventory Manager



Este projeto foi desenvolvido como parte da atividade MAPA da disciplina de Estrutura de
Dados. O objetivo é resolver um problema real de logística: a organização eficiente de um
inventário com milhares de itens para otimizar as operações de busca e evitar atrasos no
atendimento ao cliente.

## Sobre o Projeto
Em uma empresa de logística, a falta de ordenação nos códigos de produtos gerava gargalos
operacionais. Para resolver isso, implementamos o algoritmo Shellsort em linguagem C. O
Shellsort foi escolhido por ser um algoritmo de ordenação por comparação muito eficiente para
conjuntos de dados médios e grandes, superando métodos simples como Bubble Sort e
Insertion Sort.

##️ Funcionalidades
● Entrada Dinâmica: O sistema permite que o usuário informe a quantidade de itens no
inventário.

● Alocação de Memória: Utiliza malloc para gerenciar o espaço necessário de acordo
com a demanda do usuário.

● Entrada em Massa: Otimizado para aceitar múltiplos códigos de uma só vez (copiar e
colar), facilitando o uso em ambientes reais.

● Ordenação Shellsort: Implementação robusta do algoritmo para garantir que os dados
estejam prontos para algoritmos de busca binária.


## Exemplo de Uso
Ao iniciar o programa, siga o fluxo:
1. Informe a quantidade de itens (Ex: 8).
2. Insira os códigos (Ex: 45 23 78 12 56 89 67 34).
3. O sistema retornará a lista ordenada instantaneamente: 12 23 34 45 56 67 78 89.

## Conceitos Aplicados

- Algoritmos de Ordenação 

- Uso de Shellsort para redução da complexidade de movimentação de dados.

- Gestão de Memória Uso de ponteiros e alocação dinâmica para

- flexibilidade do sistema.

Eficiência Operacional Modelagem de software voltada para resolver gargalos reais de logística.
