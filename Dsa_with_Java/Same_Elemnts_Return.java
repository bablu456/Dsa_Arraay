import java.util.Arrays;
import java.util.Scanner;
public class Same_Elemnts_Return {
   static boolean duplicate(int[] arr){
       Arrays.sort(arr);
       for(int i=0;i<arr.length-1;i++){
           if(arr[i] == arr[i+1]){
               return true;
           }
       }
       return  false;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Size of The Array : ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        System.out.println("Lets enter the some data : ");
        for(int i=0;i<arr.length;i++){
            arr[i]  = sc.nextInt();
        }
        boolean result = duplicate(arr);
        System.out.println("Is There Any Duplicate : "+result);
    }
}
