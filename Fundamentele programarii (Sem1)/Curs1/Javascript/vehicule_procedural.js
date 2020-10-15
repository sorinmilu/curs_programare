/* Moduri de executie :
    node (https://nodejs.org/en/)
    instructiunea de output trebuie sa fie console.log(bicicleta)

    node vehicule_procedural.js

    rhino (https://developer.mozilla.org/en-US/docs/Mozilla/Projects/Rhino)
    instructiunea de output trebuie sa fie print(bicicleta)

    rhino vehicule_procedural.js
*/

const conducatori = [
     { nume: "Lulu", conduce: ["bicicleta", "masina"] },
     { nume: "Judith", conduce: ["trotineta", "vapor"] },
     { nume: "Alladin", conduce: ["trotineta", "role", "bicicleta"] },
     { nume: "Heidi", conduce: ["avion", "role", "bicicleta"] }];


var bicicleta = cineconduce("bicicleta");

//print(bicicleta);        //decomentati pentru executia cu rhino
//console.log(bicicleta);   //decomentati pentru executia cu node

function cineconduce(vehicul) {
    let rezultate = [];
    for (i=0; i < conducatori.length; i++) {
        for (j=0; j < conducatori[i].conduce.length; j++) {
            if (conducatori[i].conduce[j] == vehicul) {
                rezultate.push(conducatori[i].nume);
            }
        }
    }
    return rezultate;
}
