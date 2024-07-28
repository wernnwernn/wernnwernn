var isPalindrome = function(x) {
    let a = String(x)
    if (a === a.split('').reverse().join('')) {
        return true
    }
    else{
        return false
    }
};


console.log(isPalindrome(12111))