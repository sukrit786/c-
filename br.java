import java.io.*;
class ABC
{
public static void main(String args[]) throws IOException
{
int k;
 InputStreamReader r=new InputStreamReader(System.in);
 BufferedReader br=new BufferedReader(r);
 String g=br.readLine();
 k=Integer.parseInt(g);
System.out.println(k);
} 
}