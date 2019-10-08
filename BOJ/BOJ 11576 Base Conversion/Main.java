import java.util.*;

public class Main {
	public static void func(int n, int b) {
		if(n==0) {
			return;
		}
		int mok = n/b;
		int r = n%b;
		
		func(mok, b);
		System.out.print(r + " ");
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int m = sc.nextInt();
		
		int ten=0;
		for(int i=m-1; i>=0; --i) {
			int n = sc.nextInt();
			
			ten += n*Math.pow(a, i);
		}
		
		func(ten, b);
		System.out.println();
	}
}