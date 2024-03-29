import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int cnt=0;
		int m = sc.nextInt();
		int n = sc.nextInt();
		boolean[] check = new boolean[n+1];
		check[0] = check[1] = true;
		
		for(int i=2; i*i<=n; ++i) {
			if(check[i]==true) {
				continue;
			}
			
			for(int j=i+i; j<=n; j+=i) {
				check[j] = true;
			}
		}
		
		for(int i=m; i<=n; ++i) {
			if(check[i]==false) {
				System.out.println(i);
			}
		}
	}
}