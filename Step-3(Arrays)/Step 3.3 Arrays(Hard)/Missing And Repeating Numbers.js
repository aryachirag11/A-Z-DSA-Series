var missingRepeating = (nums) => {
  let n = nums.length;
  let i = 0;
  let ans = [];
  while (i < n) {
    let index = nums[i] - 1;
    if (nums[i] != nums[index]) {
      [nums[i], nums[index]] = [nums[index], nums[i]];
    } else {
      i++;
    }
  }
  for (let j = 0; j < n; j++) {
    if (nums[j] != j + 1) {
      ans.push(nums[j]);
      ans.push(j + 1);
    }
  }
  return ans;
};
let arr = [5, 2, 3, 4, 3];
console.log(missingRepeating(arr));
