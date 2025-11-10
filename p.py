# Exercício 11: Somatório (Soma de 1 até N)
# Este programa lê um inteiro N e calcula a soma S = 1 + 2 + ... + N
# usando o padrão acumulador.

# --- 1. ENTRADA ---
N = int(input("Digite um número inteiro N: "))

# --- 2. PROCESSAMENTO (Padrão Acumulador) ---

# 1. Inicialização:
# Criamos a variável que guardará a soma.
# Ela DEVE começar em 0 (elemento neutro da adição).
soma = 0

# 2. Iteração:
# Queremos que 'numero' vá de 1 até N (incluso).
# Usamos range(start=1, stop=N+1)
for numero in range(1, N + 1):
    
    # 3. Acumulação:
    # Pegamos o valor atual de 'soma' e adicionamos o 'numero' da
    # iteração atual, atualizando o valor de 'soma'.
    # 'soma += numero' é um atalho para 'soma = soma + numero'
    soma += numero

# --- 3. SAÍDA ---

# 4. Resultado Final:
# O 'print' deve ficar FORA do laço (sem indentação).
# Se estivesse dentro, imprimiria as somas parciais (1, 3, 6, 10...)
print(f"A soma de todos os números de 1 até {N} é {soma}.")