def correcao(resposta_aluno, gabarito):
    nota = 0
    questoes = len(gabarito)

    for respostas, resposta_certa in zip(resposta_aluno, gabarito):
        if respostas.upper() == resposta_certa.upper():
            nota += 1
    
    nota_final = (nota / questoes) * 10
    return nota_final

def main():
    gabarito = ["A", "B", "C", "D", "E"]
    resposta_aluno = input("Digite as respostas do aluno: ").split()

    if len(resposta_aluno) != len(gabarito):
        print("Erro: número de questões diferente do gabarito.")
        return
    
    nota = correcao(resposta_aluno, gabarito)
    print("A note do aluno foi: %.2f" % nota)


main()