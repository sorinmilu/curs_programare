//Programele javascript se pot executa cu rhino sau node
//IO este diferit in rhino fata de node - node foloseste console.log
// rhino foloseste print
//executie:
//node closure.js
//rhino closure.js

function topfunc() {
    var me = 'Sorin';
    var middlefunc = function(variabila) {
        // print (variabila);  //print pentru rhino
        // print (me);          //print pentru rhino
        console.log(variabila); //console.log pentru node
        console.log(me);        //console.log pentru node


    }
    return middlefunc;
}

var mf = topfunc();
mf('ionel');
