var addTwoNumbers = function(l1,l2) {
    let a = Number(l1.reverse().join(''))
    let b = Number(l2.reverse().join(''))
    let ans = a+b
    return ans.toString().split('').reverse().map(Number)
};

let l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]



console.log(addTwoNumbers(l1,l2))