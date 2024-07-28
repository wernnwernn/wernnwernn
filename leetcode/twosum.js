var twoSum = function(nums, target) {
    let ans = [0,0]
    for(i=0; i<nums.length; i++){
        let a = target - nums[i]
        for(j=i+1; j < nums.length; j++ ){
            if(nums[j]==a){
                ans[0] = i
                ans[1] = j
                return ans
            }
        }
    }
};

let nums = [3,2,4], target = 6

console.log(twoSum(nums, target))
