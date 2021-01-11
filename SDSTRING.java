/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		FastReader sc=new FastReader();
		int t=sc.nextInt();
		while(t-->0)
		{
		    StringBuffer sb=new StringBuffer();
		    String s=sc.nextLine();
		    int n=s.length();
		    int a=0,b=0;
		    if(n%2!=0)
		    sb.append("-1");
		    else
		    {
		        for(int i=0;i<n;i++)
		        {
		            char ch=s.charAt(i);
		            if(ch=='1')
		            b++;
		            else
		            a++;
		        }
		        if(a==0||b==0)
		        sb.append("-1");
		        else
		        {
		            if(Math.abs(a-b)==0)
		            sb.append("0");
		            else
		            {
		                if(a>b)
		                {
		                    sb.append((n/2)-b);
		                }
		                else
		                {
		                    sb.append((n/2)-a);
		                }
		            }
		        }
		    }
		    System.out.println(sb.toString());
		}
	}
}
