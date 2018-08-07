class A{  
public static void main(String args[]){  
  int k=0;
int p;
for(int i=0;i<args.length;i++)
{
	p=Integer.parseInt(args[i]);
	k=k+p;  
}
System.out.println(k);  
  
}  
}  