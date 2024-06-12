
def main():
    tamanho_tabuleiro = int(input("Informe o tamanho do tabuleiro: "))
    minas = [0] * tamanho_tabuleiro
    tabuleiro = [0] * tamanho_tabuleiro

    # Populando o vetor com o input do usuário
    for i in range(tamanho_tabuleiro):
        bomba = int(input("Digite 1 para adicionar a bomba e 0 para não adicionar: "))
        if bomba == 1:
            minas[i] = bomba
        else:
            minas[i] = 0

    # Lista de bombas para visualizar o vetor
    print("Lista bombas")
    print(minas)

    for i in range(tamanho_tabuleiro):
        bombas = 0
        if minas[i] == 1:
            bombas += 1
        if i > 0 and minas[i - 1] == 1:
            bombas += 1
        if i < tamanho_tabuleiro - 1 and minas[i + 1] == 1:
            bombas += 1
        tabuleiro[i] = bombas

    # Lista do tabuleiro com a contagem de bombas
    print("\nLista tabuleiro")
    print(tabuleiro)

if __name__ == "__main__":
    main()
