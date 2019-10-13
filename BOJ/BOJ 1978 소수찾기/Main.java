import java.util.*;
import java.io.*;

public class Main {
	public static boolean isPrime(int n) {
		if(n<2) {
			return false;
		}
		else if(n==2 || n==3) {
			return true;
		}
		
		for(int i=2; i<=Math.sqrt(n); ++i) {
			if(n%i==0) {
				return false;
			}
		}
		
		return true;
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int cnt=0;
		int n = sc.nextInt();
		for(int i=0; i<n; ++i) {
			int x = sc.nextInt();
			if(isPrime(x)) {
				cnt++;
			}
		}
		
		System.out.println(cnt);
	}
}
