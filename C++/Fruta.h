using namespace std;       //necessário para usar string

class Fruta{        //definicao de molde para fruta
    private:
        float preco;    //atributos
        string nome;

    public:
        float getPreco(){
            return preco;
        }

        void setPreco(float precoNovo){
            preco = precoNovo;
        }

        string getNome(){
            return nome;
        }

        void setNome(string nomeNovo){
            nome = nomeNovo;
        }
};
