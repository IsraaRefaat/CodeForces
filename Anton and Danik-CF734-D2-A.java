import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
      
       int n =input.nextInt();
        String winner = input.next();
        int A=0 , D=0;
 
        for(int i=0;i<winner.length(); i++)
        {
            if(winner.charAt(i)=='A')
                A++;
            else
                D++;
        }
 
        if (A>D)
            System.out.println("Anton");
        else if (D>A)
            System.out.println("Danik");
        else
            System.out.println("Friendship");
    }
}
