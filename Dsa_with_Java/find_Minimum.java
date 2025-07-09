public class find_Minimum {
    void minimum(int[] arr){
        int min = arr[0];
        for(int i=0;i<arr.length;i++){

                if(arr[i]<min){
                    min= arr[i];
                }
            }
        System.out.println(min);
        }
        public static void main(String[] args){
        find_Minimum  f = new find_Minimum();
        int arr[] = {12,45,23,67,34};
        f.minimum(arr);
        }
    }

