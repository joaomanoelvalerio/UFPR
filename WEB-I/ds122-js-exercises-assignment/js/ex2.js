let tamanho = 8;
let tabuleiro = "";

for (let i = 0; i < tamanho; i++) {
    let linha = "";
    
    for (let z = 0; z < tamanho; z++) {
        if (!((i+z) & 1)) {
            linha += "#";
        }
        else 
        {
            linha += " ";
        }
    }
        tabuleiro += linha + "\n";
}

console.log(tabuleiro);