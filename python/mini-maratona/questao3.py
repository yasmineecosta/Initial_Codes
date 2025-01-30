import requests
from PIL import Image
from io import BytesIO

def baixar_imagem(url):
    response = requests.get(url)
    if response.status_code == 200:
        imagem = Image.open(BytesIO(response.content))
        return imagem
    else:
        print(f"Falha ao baixar a imagem de {url}")
        return None

def main():
    imagens = []
    for i in range(3):
        url = input(f"Digite a URL da imagem {i+1}: ")
        imagem = baixar_imagem(url)
        if imagem:
            imagens.append(imagem)
    
    if imagens:
        gif_path = "output.gif"
        imagens[0].save(gif_path, save_all=True, append_images=imagens[1:], loop=0, duration=500)
        print(f"GIF salvo em {gif_path}")
        Image.open(gif_path).show()

if __name__ == "__main__":
    main()

    # pip install requests pillow