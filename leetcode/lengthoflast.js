var lengthOfLastWord = function(s) {
    let word = false, indent = 0
    for(i=s.length-1;i>=0;i--){
        if (s[i]===' ' && word === true) {
            return s.length - i-1 - indent
        }
        else if (s[i]===' '){
            indent++
        }
        else if (s[i] !== ' '){
            word = true
        }
    }
    return s.length-indent
};

console.log(lengthOfLastWord("   fly me   to   the moon  "))
// console.log(("   fly me   to   the moon  ").length)
