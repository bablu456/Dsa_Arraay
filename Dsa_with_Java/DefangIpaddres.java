public class DefangIpaddres {
    public String ip(String address){
    String res = "";
    for(int i=0;i<address.length();i++){
        if(address.charAt(i)=='.'){
            res +="[.]";
        }else{
            res += address.charAt(i);
        }
    }
    return res;
    }
    public static void main(String[]args){
        DefangIpaddres d = new DefangIpaddres();
        String str = "1.1.1.1";
        System.out.println(d.ip(str));
    }
}
