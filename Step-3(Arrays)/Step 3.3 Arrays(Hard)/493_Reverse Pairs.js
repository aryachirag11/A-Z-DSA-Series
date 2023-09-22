/**
 * @param {number[]} nums
 * @return {number}
 */
var merge = (a, low, mid, high) => {
  let left = low,
    right = mid + 1;
  let temp = [];

  while (left <= mid && right <= high) {
    if (a[left] <= a[right]) temp.push(a[left++]);
    else temp.push(a[right++]);
  }
  while (left <= mid) temp.push(a[left++]);
  while (right <= high) temp.push(a[right++]);

  for (let i = low; i <= high; i++) a[i] = temp[i - low];
};
var countReversePairs = (nums, low, mid, high) => {
  let count = 0;
  let right = mid + 1;

  for (let i = low; i <= mid; i++) {
    while (right <= high && nums[i] > 2 * nums[right]) right++;
    count += right - (mid + 1);
  }

  return count;
};

var mergeSort = (a, low, high) => {
  let cnt = 0;
  if (low >= high) return cnt;
  let mid = Math.floor((low + high) / 2);
  cnt += mergeSort(a, low, mid);
  cnt += mergeSort(a, mid + 1, high);
  cnt += countReversePairs(a, low, mid, high);
  merge(a, low, mid, high);

  return cnt;
};

var reversePairs = (nums) => {
  return mergeSort(nums, 0, nums.length - 1);
};
