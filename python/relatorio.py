
nomes = set()

for i in range(5):
    nome = input("Digite um nome: ")
    nomes.add(nome)

# solicitando um nome ao usuário
nome_procurado = input("Digite um nome para verificar se está na lista: ")

# verificando se o nome está na lista
if nome_procurado in nomes:
    print("O nome está na lista.")
else:
    print("O nome não está na lista.")
