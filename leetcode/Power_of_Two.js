var isPowerOfTwo = function(n) {
    if (n===1) {
        return true
    }
    else if (n<1) {
        return false
    }
    else{
        return isPowerOfTwo(n/2)
    }
};
console.log(isPowerOfTwo(1))