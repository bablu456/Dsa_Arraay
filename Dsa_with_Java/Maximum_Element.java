import java.util.Scanner;

public class Maximum_Element {
    void Maximum(int[] arr){
        int max = 0;
        for(int i=0;i<arr.length;i++){
            if (max<arr[i]){
                max = arr[i];
            }
        }
        System.out.println("The Maximum Element is : "+max);
    }
    public static void main(String[] args){
        Maximum_Element m = new Maximum_Element();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Size of the Array : ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        for(int i=0;i<size;i++){
            arr[i] = sc.nextInt();
        }
        m.Maximum(arr);
    }
}
