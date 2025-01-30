
friends = ["Yasmine", "Beatrice", "Yedda", 2]
# python n se importa com a impressao, imprime string cm numero e boole tbm,
# mas pra facilitar, vou usar só string msm
print(friends[3])

family = ["Yasmine", "Beatrice", "Yedda", "Guta", "Siberia", "Brie", " ", " ", " "]
print(family)
print(family[-1])
# ele vai indo ao contrario, do fim pro inicio quando é negativo
print(family[1:])
print(family[1:3])  # imprime do 1 ao 3, mas exclui o 3

family[6] = "Ervilha"
family[7] = "Mirena"
family[8] = "Jujuba"
print(family)

#  LIST FUNCTION
lucky_numbers = [4, 8, 15, 16, 23, 42]
friendz = ["Kevin", "Karen", "Jin", "Jim", "Jim", "Oscar", "Toby"]
# friendz.extend(lucky_numbers)
print(friendz)
friendz.append("Creed")  # adiciona no final da coisa
print(friendz)
friendz.insert(1, "Maino")  # adiciona no espaço 1, essa string
print(friendz)
friendz.remove("Jin")
print(friendz)
# friendz.clear()  - limparia a lista toda
# friendz.pop() - tira o ultimo da lista
print(friendz.index("Maino"))
print(friendz.count("Jim"))  # diz a quantidade de vezes q se repete
friendz.sort()
print(friendz)
lucky_numbers.sort()
print(lucky_numbers)
lucky_numbers.reverse()
print(lucky_numbers)
friendz2 = friendz.copy()
print(friendz2)
