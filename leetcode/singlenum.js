var singleNumber = function(nums) {
    let a = new Array(60000).fill(0)
    for(i = 0; i< nums.length; i++){
        if (nums[i] < 0 ) {
            a[nums[i]*(-1)+30000] +=1
        }
        else{
            a[nums[i]] +=1
        }
    }
    for(j = 0; j<a.length ; j++){
        if (a[j] === 1) {
            if (j>30000) {
                return (j-30000)*(-1)
            }
            else{
                return j
            }
        }
    }
    return a
};

console.log(singleNumber([-1]))