class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest = arr[0];
        int second = -1;
        for(int i = 0;i<arr.size();i++){
            if(arr[i] > largest ){
                second = largest;
                largest = arr[i];
            }else if(arr[i]<largest && arr[i]>=second){
                second = arr[i];
            }
        }
        return second;
    }
};