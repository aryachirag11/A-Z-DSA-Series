/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function (intervals) {
  let n = intervals.length;
  intervals.sort((a, b) => a[0] - b[0]);
  let index = 0;
  let prev = [-1, -1];

  for (let i = 0; i < n; i++) {
    if (prev[0] == -1) {
      prev = intervals[i];
      intervals[index] = prev;
    } else if (intervals[i][0] > prev[1]) {
      prev = intervals[i];
      intervals[++index] = prev;
    } else {
      prev[1] = prev[1] > intervals[i][1] ? prev[1] : intervals[i][1];
      intervals[index] = prev;
    }
  }
  return intervals.slice(0, index + 1);
};
