import java.util.*;
import java.math.BigInteger;
class Codechef
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int T,d,pos;
		long N;
		String a,b,k,k2,k3;
		T=sc.nextInt();
		while(T-->0)
		{
			N=sc.nextLong();//35
			d=sc.nextInt();//4
			a=Long.toString(N);//35
			b=Integer.toString(d);//4
			long low1=N;//35
			int rem=a.length()*10;//20
			for(int i=0;i<a.length();i++)
			{

				char ch=a.charAt(i);//3
				pos=a.indexOf(ch);//0
				k=a.substring(pos+1);//5
				k2=b+k;//45
				k3=ch+b//34
				if(Long.valueOf(k2)<N && Long.valueOf(k2)<low1)
					low1=Long.valueOf(k2);
				else if(Long.valueOf(k3)<N && Long.valueOf(k3)<low1)
					low1=Long.valueOf(k3);
			}
			System.out.println(low1);

			}

		}
	}