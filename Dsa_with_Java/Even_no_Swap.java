public class Even_no_Swap {
    public static void main(String[] args) {
        int[] nums = {12, 15, 24, 31, 46, 53};
//        Even_no_Swap e = new Even_no_Swap();
        int i=0;
        int j = nums.length-1;
        while(i<j){
            while(i<j && nums[i]%2!=0){
                i++;
            }
            while(i<j && nums[j]%2!=0){
                j--;
            }
            if(i<j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
        }
        for(int k=0;k<nums.length;k++){
            System.out.println(nums[k]);
        }
    }
}
