function inverte(array) {
    for (let i = 0; i < array.length / 2; i++) {
        let temp = array[i];
        array[i] = array[array.length - 1 - i];
        array[array.length - 1 - i] = temp;
    }
    return array;
}

let a = [1, 2, 3, 4, 5, 6];
let b = inverte(a);

for (let i = 0; i < b.length; i++) {
    console.log(b[i]);
} //trecho adicionado para verificar a saída
