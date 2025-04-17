#Dentro dessa pasta, você deverá criar um programa em C ou Python que recebe dois valores e que imprima:
#- a soma
#- a diferença entre o maior e o menor
#- a média
#- e o resto da divisão entre o maior e o menor. 

n1 = int(input('Digite um valor: '))
n2 = int(input('Digite outro valor: '))

print(f'{n1} + {n2} = {n1 + n2}')
print(f'{n1} - {n2} = {n1 - n2}')
print(f'Média: {(n1 + n2)/2}')
print(f'Resto da divisão {n1}/{n2} = {n1 % n2}')

