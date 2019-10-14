import java.util.*;
import java.io.*;

public class Main {
	public static boolean isPrime(int n) {
		if(n<2) {
			return false;
		}
		if(n==2) {
			return true;
		}
		
		for(int i=2; i*i<=n; ++i) {
			if(n%i==0) {
				return false;
			}
		}
		
		return true;
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			int n = sc.nextInt();
			if(n==0) break;
			
			int chk=0;
			for(int i=3; i<n-2; ++i) {
				if(i%2==1 && isPrime(i)) {
					int a = i;
					int b = n - a;
					if(b%2==1 && isPrime(b)) {
						System.out.println(n + " = " + a + " + " + b);
						chk=1;
						break;
					}
				}
			}
			
			if(chk==0) {
				System.out.println("Goldbach's conjecture is wrong.");
			}
		}
	}
}
