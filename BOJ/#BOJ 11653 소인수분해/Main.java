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
		
		int n = sc.nextInt();
		
		
		if(isPrime(n)) {
			System.out.println(n);
		}
		else {
			int s = 2;
			while(n > 1) {
				if(n%s==0) {
					System.out.println(s);
					n /= s;
				}
				else {
					while(true) {
						s++;
						if(isPrime(s)) {
							break;
						}
					}
				}
			}
		}
	}
}
