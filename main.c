import java.util.Scanner;
public class Persamaan_kuadrat {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner input =new Scanner(System.in);
       int a,b,c,D;
       double x,x1,x2;
       System.out.println("Persamaan kuadrat \n=================");
       System.out.print("Masukkan nilai a = ");
       a=input.nextInt();
       System.out.print("Masukkan nilai b = ");
       b=input.nextInt();
       System.out.print("Masukkan nilai c = ");
       c=input.nextInt();
       D=b*b-(4*a*c);
       System.out.println("D = "+D);
       if (D<0){
           System.out.println("\nAkar - akar imajiner");
       }
       else if(D==0){
           x=-b/2*a;
           System.out.print("x1 = x2 = "+x);
       }
       else {
           x1=(-b+Math.sqrt(D))/(2*a);
           x2=(-b-Math.sqrt(D))/(2*a);
           System.out.println("x1 = "+x1);
           System.out.println("x2 = "+x2);
           
       }
       
    }
    
}

http://share-4everyone.blogspot.com/2014/04/proogram-mencari-akar-akar-persamaan.html#ixzz3mxFl3aSD
