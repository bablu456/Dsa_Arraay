package Binary_Seacrh;

public class implemetion {
    boolean binary(int arr[],int target)
    {
        int start = 0;
        int end = arr.length - 1;
        int mid  = 0;
        while(start<=end)
        {
            mid = start + (end - start) / 2;
            if(arr[mid] == target){
                return true;
            } else if (target>arr[mid]) {
                start = mid + 1;
            } else {
                end = mid -1;
            }
        }
        return false;
    }
    public static void main(String[] args){
        implemetion i = new implemetion();
        int[] arr = {1,2,3,4,5,6,7,8};
        int taregt = 7;
        boolean result = i.binary(arr,taregt);
        System.out.println(result);
    }
}
