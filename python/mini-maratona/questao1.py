def verificar_senha(senha_correta, senha):
    return senha_correta == senha

def main():
    senha_correta = "123456"
    attempts = 3
    
    for attempt in range(attempts):
        senha = input("Digite a senha: ")
        if verificar_senha(senha_correta, senha):
            print("true")
            break
        else:
            print("false")
    else:
        print("Número máximo de tentativas atingido. Acesso negado.")


main()