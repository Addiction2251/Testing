import java.util.*;
class Prime_Number_Ultra_Pro_Max
{
    public static void main(String[] args)
    {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : - ");
        n = sc.nextInt();
        boolean flag = true;
        
        if(n == 2 || n == 3 || n == 5 || n == 7)
        {
            flag = true;
        }
        
        else
        {
            for(int i = 2; i <= 9 ; i++)
            {
                if(n%i==0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true)
        {
            System.out.println( n + "  is a Prime Number ." );
        }
        else
        {
            System.out.println( n + "  is not a Prime Number ." );
        }
    }
}