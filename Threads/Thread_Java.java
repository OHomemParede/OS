import import java.lang.Runnable;
import java.util.Scanner;

public class Thread_Java{

  private static String nomes[] = new String[5];
  private static boolean flagzinha = true;
  
  //________C O N S U M I D O R________
  public static void main(String agrs[]){
    new Thread(threadzinha).start();
    while(flagzinha){
      System.out.print("");
    }//fica esperando ae...

    for(int a=0;a<5;a++){
      System.out.println("Nome -->> "+ nomes[a]);
    }
  }
  
//________T H R E A D P R O D U T O R________
  private static Runnable threadzinha = new Runnable(){
    public void run(){
      for(int a=0;a<5;a++){
        System.out.print("Nome: ");
        nomes[a] = new Scanner(System.in).nextLine();
        System.out.println();
      }
      flagzinha = false;
    }
  };
}
