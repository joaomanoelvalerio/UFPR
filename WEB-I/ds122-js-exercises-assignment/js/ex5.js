function contaLetras(string, letra) {
    let contador = 0;
    for (let i = 0; i < string.length; i++) {
        if (string[i] == letra) {
            contador += 1;
        }
    }

    return contador;
}

let s = "Aula de web1"

console.log(contaLetras(s,"e"))