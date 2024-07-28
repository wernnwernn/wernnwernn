var romanToInt = function(s) {
    let ans  = 0;
    for(i = 0; i < s.length ; i++){
        if (s[i] === 'C' && (s[i+1] === 'D' || s[i+1] === 'M')) {
            ans-=100
        }
        else if (s[i] === 'X' && (s[i+1] === 'L' || s[i+1] === 'C')) {
            ans-=10
        }
        else if (s[i] === 'I' && (s[i+1] === 'V' || s[i+1] === 'X')) {
            ans-=1
        }
        else if (s[i] === 'I' ) {
            ans+=1
        }
        else if (s[i] === 'V' ) {
            ans+=5
        }
        else if (s[i] === 'X' ) {
            ans+=10
        }
        else if (s[i] === 'L' ) {
            ans+=50
        }
        else if (s[i] === 'C' ) {
            ans+=100
        }
        else if (s[i] === 'D' ) {
            ans+=500
        }
        else if (s[i] === 'M' ) {
            ans+=1000
        }
    }
    return ans
}

let s = "MCMXCIV"

console.log(romanToInt(s))