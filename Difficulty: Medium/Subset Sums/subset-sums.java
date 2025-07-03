// User function Template for Java//User function Template for Java
class Solution {
    void Func(int[] arr, ArrayList<Integer> res, int index, int currsum)
    {
        if(index == arr.length)
        {
            res.add(currsum);
            return;
        }
        //include.
        Func(arr, res, index+1, currsum+arr[index]);
        //exclude.
        Func(arr, res, index+1, currsum);
    }
    public ArrayList<Integer> subsetSums(int[] arr) {
        // code here
        ArrayList<Integer> res = new ArrayList<>();
        Func(arr, res, 0, 0);
        return res;
    }
}