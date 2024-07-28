let tt = [1,2,3,4,5,6,7,8,15,100]

let bsearch = function(arr,k, a = 0,b = arr.length-1){
    if (a>b) {
        return null
    }
    let mid = Math.floor((b+a)/2)
    if (k===arr[mid]) {
        return mid
    }
    else if (k<arr[mid]) {
        return bsearch(arr, k, a , mid-1)
    }
    else if (k>arr[mid]) {
        return bsearch(arr, k, mid+1 , b)
    }
}
console.log(bsearch(tt,15))