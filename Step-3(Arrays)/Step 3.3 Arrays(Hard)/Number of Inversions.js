var numberOfInversions1 = (a, n) => {
  let count = 0;

  for (let i = 0; i < n - 1; i++) {
    for (let j = i + 1; j < n; j++) {
      if (a[i] > a[j]) count++;
    }
  }
  return count;
};

var merge = (a, low, mid, high) => {
  let cnt = 0;
  let left = low,
    right = mid + 1;
  let temp = [];
  while (left <= mid && right <= high) {
    if (a[left] <= a[right]) temp.push(a[left++]);
    else {
      temp.push(a[right++]);
      cnt += mid - left + 1;
    }
  }
  while (left <= mid) temp.push(a[left++]);
  while (right <= high) temp.push(a[right++]);

  for (let i = low; i <= high; i++) a[i] = temp[i - low];

  return cnt;
};

var mergeSort = (a, low, high) => {
  let cnt = 0;
  if (low >= high) return cnt;
  let mid = Math.floor((low + high) / 2);
  cnt += mergeSort(a, low, mid);
  cnt += mergeSort(a, mid + 1, high);
  cnt += merge(a, low, mid, high);

  return cnt;
};

var numberOfInversions = (a, n) => {
  return mergeSort(a, 0, n - 1);
};

let arr = [15, 28, 11, 20, 14, 7, 14, 2, 15, 4, 22, 19, 17, 1, 26, 6, 20, 2, 6];
let n = 19;
console.log(numberOfInversions(arr, n));
