var addBinary = function(a, b) {
    let a1 = parseInt(a,2)
    let a2 = BigInt('0b' + a)
    let b1 = parseInt(b,2)
    let b2 = BigInt('0b' + b)
    let ans = a2+b2
    return ans.toString(2)
};

console.log(addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101","1011"))