var plusOne = function(digits) {
    // let a = Number(digits.join(''))+1
    return (BigInt(digits.join(''))+BigInt(1)).toString().split('').map(Number)
};

let digits = [6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3]
console.log(plusOne(digits))
// console.log((BigInt(digits.join(''))+BigInt(1)).toString().split('').map(Number))