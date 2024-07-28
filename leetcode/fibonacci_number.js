var fib = function(n) {
    if (n <2) {
        return n
    }
    var a = 0 ,b= 0, ans = 1
    for(let i = 0; i<n-1 ; i++){
        a = b
        b = ans 
        ans = a+b
    }
    return ans
};

var a = fib(2)
console.log(a)
1
1
2
3
5

8
13
21
34
55