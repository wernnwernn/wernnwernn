var star = function(n) {
    var row
    if (n%2 === 0) { //even 
        row = n-1
        for (let i = n/2; i >=1; i--) {
            console.log('-')
        }
    }
    else{ //odd
        row = n
    }
}


var b = star(4)