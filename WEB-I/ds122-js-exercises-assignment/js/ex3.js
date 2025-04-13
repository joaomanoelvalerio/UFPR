function soma (array) {

    let contador = 0;

    for (let i = 0; i < array.length; i++) {
     contador += array[i];
    }

    return contador;
}

let a = [1,2,3];

console.log(soma(a));