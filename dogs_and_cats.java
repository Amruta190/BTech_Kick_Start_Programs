import java.util.*;
public class dogs_and_cats{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int l=1;l<=t;l++)
        {
            int n=sc.nextInt();
            long d=sc.nextInt();
            long c=sc.nextInt();
            long m=sc.nextInt();
            String st=sc.next();
            int i=0;
            for(i=0;i<st.length();i++)
            {
                if(st.charAt(i)=='D')
                    break;
            }
            if(i==n)
                System.out.println("Case #"+l+": Yes");
            else
            {
                int flag=0,j=0;
                for(i=0;i<st.length();i++)
                {
                    if(st.charAt(i)=='C')
                    {
                        if(c>0)
                            c-=1;
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                    else
                    {
                        if(d>0)
                        {
                            d-=1;
                            c+=m;
                        }
                        else
                        {
                            flag=2;
                            break;
                        }
                    }
                }
                if(i!=n)
                {
                    if(flag==2)
                        System.out.println("Case #"+l+": No");   
                    if(flag==1)
                    {
                        for(j=i;j<st.length();j++)
                        {
                            if(st.charAt(j)=='D')
                            {
                                System.out.println("Case #"+l+": No");   
                                break;
                            }
                        }
                        if(j==n)
                            System.out.println("Case #"+l+": Yes");   
                    }   
                }
                else
                    System.out.println("Case #"+l+": Yes");   
            }
        }
        sc.close();
    }
}