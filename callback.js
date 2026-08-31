function sum(a,b){
    return a+b
}

function sumWithmsg(clbk,msg){
    console.log(msg)
    console.log(clbk)
}

sumWithmsg(sum(6,7),"mr. Deepak")