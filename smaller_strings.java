package kick_start_programs;
import java.util.Scanner;
public class smaller_strings {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=sc.nextInt();
            int k=sc.nextInt();
            String s=sc.nextLine();
            int j;int cnt=0;
            char p;
            for(p=65;p<=(k+65);p++)
            {
                char sr[]=new char[n];
                for(j=0;j<n;j++)
                {
                    sr[j]=p;
                }
                String s2=String.valueOf(sr);
                if(s.compareTo(s2)>0)
                    cnt+=1;
            }
            p=65;
            do
            {
                int n1=s.length()/2;
                char sr[]=new char[n];
                for(j=0;j<n;j++)
                {
                    sr[j]=p;
                }
                ++p;
                sr[n1]=p;
                String s2=String.valueOf(sr);
                if(s.compareTo(s2)>0)
                    cnt+=1;
            }while(p<=(k+65));
        }
        sc.close();
    }
}
