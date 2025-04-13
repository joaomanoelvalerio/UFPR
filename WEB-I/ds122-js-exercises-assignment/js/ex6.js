function procuraSubStr(string, substr) {
    let i = 0, j = 0, z = 0;
    for (i = 0; i < string.length; i++) {
        let contador = 0;
        z = i;
        for (j = 0; j < substr.length && string[z] == substr[j]; j++, z++) {
            contador += 1;
        }
        if (contador == substr.length) {
            return i;
        }
    }
    return -1;
}

let s = "Aula de web1"

console.log(procuraSubStr(s,"web1"))

console.log(procuraSubStr(s,"web2"))
