import java.util.Scanner;//importing Scanner class
public class program1
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of test cases(should not be more than 100): ");//taking number of test cases as input
        long t = sc.nextLong();
        long i = 1;
        long height = 0;
        long extra = 0;
        long needed = 0;
        while(t != 0)
        {
            System.out.print("Enter the number of stars you want(should not be more than 10^10): ");//taking number of stars as input
            long n = sc.nextLong();
            while(i <= n)
            {
                n -= i;
                i++;
                height++;
            }
            extra = i - n;
            needed = i - extra;
            //displaying height of the pyramid
            if(height <= 3)
            System.out.println("The height of the pyramid is: "+height);
            else if(height > 3)
            {
                height--;
                System.out.println("The height of the pyramid is: "+height);
            }
            //displaying the number of extra stars needed to fill that pyramid
            System.out.println("The number of extra stars needed: "+needed);
            height = 0;
            i = 0;
            t--;
        }        
    }
}
//Author --Tommy Shleby#6605
//leder --jayspray#4176
