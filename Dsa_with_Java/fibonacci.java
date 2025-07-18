import java.util.Scanner;
public class fibonacci {
  static   int fibo(int x){
        int a = 0;
        int b = 1;
        for(int i=1;i<=x;i++){
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
    public static void main(String[] args){
     Scanner sc  = new Scanner(System.in);
        System.out.println("Please Enter the Number : ");
        int num = sc.nextInt();
        int result = fibo(num);
        System.out.println(result);
    }

}
