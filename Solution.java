import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            String str = sc.next();
            int cnt = 0, j = 0;
            while (j < n) {
                if (str.charAt(j) == '1') {
                    int c = 0;
                    j++;
                    while (j<n && str.charAt(j) == '0') {
                        j++;
                        c += 1;
                    }
                    int r = c / 2, sum = 0;
                    if (j == str.length() && str.charAt(j-1)=='0') {
                        r=c;
                        while (r != 0) {
                            sum += r;
                            r--;
                        }
                        cnt+=sum;
                    } else {
                        while (r != 0) {
                            sum += r;
                            r--;
                        }
                        if (c % 2 == 0) {
                            cnt += sum * 2;
                        } else {
                            if(c==1)
                                cnt+=1;
                            else
                                cnt += (sum * 2) + 1+c / 2;
                        }
                    }
                }
                else
                {
                    int c=0,sum=0;
                    while(j<n && str.charAt(j)=='0')
                    {
                        j++;
                        c+=1;
                    }
                    while (c != 0) {
                        sum += c;
                        c--;
                    }
                    cnt+=sum;
                }
            }
            System.out.println("Case #"+i+": "+cnt);
        }
        sc.close();
    }
}