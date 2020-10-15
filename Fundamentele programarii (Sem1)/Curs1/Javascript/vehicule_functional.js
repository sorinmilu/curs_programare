/* Moduri de executie :
    node (https://nodejs.org/en/)
    instructiunea de output trebuie sa fie console.log(bicicleta)

    node vehicule_functional.js

    rhino nu suporta instructiunile functionale

*/

const conducatori = [
     { nume: "Lulu", conduce: ["bicicleta", "masina"] },
     { nume: "Judith", conduce: ["trotineta", "vapor"] },
     { nume: "Alladin", conduce: ["trotineta", "role", "bicicleta"] },
     { nume: "Heidi", conduce: ["avion", "role", "bicicleta"] }];

const cineconduce = "bicicleta";

const rezultate = conducatori.filter(conducator => conducator.conduce.includes(cineconduce)).map(conducator => conducator.nume);

console.log(rezultate);


