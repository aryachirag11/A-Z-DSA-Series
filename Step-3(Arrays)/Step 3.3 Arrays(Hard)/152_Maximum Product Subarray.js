/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {
  let n = nums.length;
  if (n == 1) return nums[0];
  let maxi = Number.MIN_VALUE;
  let prefixProduct = 1;
  let suffixProduct = 1;
  for (let i = 0; i < n; i++) {
    if (prefixProduct == 0) prefixProduct = 1;
    if (suffixProduct == 0) suffixProduct = 1;

    prefixProduct *= nums[i];
    suffixProduct *= nums[n - i - 1];
    maxi = Math.max(maxi, Math.max(prefixProduct, suffixProduct));
  }
  return maxi;
};
