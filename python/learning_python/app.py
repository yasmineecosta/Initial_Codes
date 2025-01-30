from math import *
# assim importa funcoes de matematica, uso na linha 60, por ai

character_name = "Yasmine Martins"
age = 20
# comentario, boole True or False
'''
comentario de coisa, isso ta comentado multilinhas
'''
print("Hello World! ")
print("Meu nome e " + character_name + ", ")
print("e eu queria pular essa parte do estudo... ")
print("porem nao posso, pois tenho ")
print(int(age))
print("anos e n tenho conhecimento para trabalhar")

character_name = "Beatrice Martins"

print("Minha irma e " + character_name + ".")
print("Ela disse q vai me dar o primeiro salario dela")

print("Giraffe\nAcademy")
print("Giraffe\"Academy")
print("Giraffe\Academy")

phrase = "Academia Girafa"
print(phrase + " is cool")
print(phrase.lower())
print(phrase.upper())
# boole
print(phrase.isupper())
print(phrase.upper().isupper())

print(len(phrase))
print(phrase[0]) #imprimi o 0 da string phrase

print(phrase.index("G"))
print(phrase.index("Giraf"))
print(phrase.replace("Girafa", "Elefante"))


print(f"hello teste idade: {age}. Teste")
print(2.324534)
print(-23.3243)
print(4 / (2 * 1.25))
print(10 % 2)

my_num = 86
print(my_num)
print(str(my_num) + " my favorite number")
# para botar na mesma linha, tem que transformar em string

num_num = -5
print(abs(num_num))
# numero absoluto

print(pow(3, 2))
print(max(4, 6)) # dizer o numero maior
print(min(4, 6))
print(round(4.6))   # aproximar
print(floor(4.6))   # aproxima pra menos
print(ceil(4.6))    # aproxima pra mais
print(sqrt(36))

#INPUTS
name = input("Enter your name: ")
agee = input("Enter your age: ")
print("Hello " + name + "! You are " + agee)

