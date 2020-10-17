/* Moduri de executie :
    node (https://nodejs.org/en/)
    instructiunea de output trebuie sa fie console.log(result)

    node javascript_regexp.js

    rhino (https://developer.mozilla.org/en-US/docs/Mozilla/Projects/Rhino)
    instructiunea de output trebuie sa fie print(result)

    rhino javascript_regexp.js
*/


var mytext = 'Lulu conduce bicicleta si masina; Judith conduce trotineta si vapor; Aladin conduce trotineta role si bicicleta; Heidi conduce avion role si bicicleta.';
var regexp = /([A-Z]\w+)\sconduce.*?bicicleta.*?(;|\.)/g;
result = mytext.replace(regexp, "$1");
print("Cine conduce bicicleta?")
print(result);


