import java.util.*;
import java.net.*;
class ip{
  public static void main(String args[] ){
     String host;
     Scanner sc=new Scanner(System.in);
     InetAddress adress;
     System.out.println("\n enter the host");
     host=sc.next();
     try{
      adress=InetAddress.getByName(host);
      System.out.println("ipaddress "+adress.toString());
     }
     catch(UnknownHostException e){
      System.out.println("could not find host");
     }
  }
}