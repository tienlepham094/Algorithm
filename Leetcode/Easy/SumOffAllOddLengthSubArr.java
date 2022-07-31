class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int result = 0;

		// i: j is the range of a sub-array
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j <= arr.length; j += 2) {
				// iterate over sub-array
                for (int k = i; k < j; k++) {
                    result += arr[k];
                }
            }
        }

        return result;
    }
}