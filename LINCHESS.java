import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
	    int t;
	    t=Integer.parseInt(in.readLine());
	    while(t-->0)
	    {
	        String s[]=in.readLine().split(" ");
	        int n=Integer.parseInt(s[0]);
	        long k=Long.parseLong(s[1]);
	        String s1[]=in.readLine().split(" ");
	        long p[]=new long[n];
	        for(int i=0;i<n;i++)
	        {
	            p[i]=Long.parseLong(s1[i]);
	           }
	           long c[]=new long[n];
	           long a=0;
	         for(int i=0;i<n;i++)
	         {
	             a=k-p[i];
	             if(a>0)
	             {
	                 if(a%p[i]==0)
	                 c[i]=a/p[i];
	                 else
	                 c[i]=0;
	               }
	               else
	               c[i]=0;
	           }
	           long b[]=new long[n];
	          for(int i=0;i<n;i++) 
	          {
	              b[i]=c[i];
	           }
	           long q=0;
	           Arrays.sort(b);
	           for(int i=0;i<n;i++) 
	         {
	             if(b[i]!=0)
	             {
	                 q=b[i];
	                 break;
	               }
	           }
	           int m=0,l=0;
	         for(int i=0;i<n;i++) 
	         {
	             if(c[i]==q)
	             {
	                 l++;
	                 m=i;
	               }
	           }
	           if(l==1)
	           System.out.println(p[m]);
	           else
	           System.out.println("-1");
	       }
	       }
	}