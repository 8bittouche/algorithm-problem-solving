import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.valueOf(br.readLine());
		
		while(t-->0) {
			int n = Integer.valueOf(br.readLine());
			int[][] a = new int[n][2];
			int[][] d = new int[n][3];
			
			for(int j=0; j<2; ++j) {
				String[] line = br.readLine().split(" ");
				for(int i=0; i<n; i++) {
					a[i][j] = Integer.valueOf(line[i]);
				}
			}
			
			d[0][0] = 0;
			d[0][1] = a[0][0];
			d[0][2] = a[0][1];
			
			for(int i=1; i<n; ++i) {
				d[i][0] = Math.max(d[i-1][0], Math.max(d[i-1][1], d[i-1][2]));
				d[i][1] = Math.max(d[i-1][0], d[i-1][2]) + a[i][0];
				d[i][2] = Math.max(d[i-1][0], d[i-1][1]) + a[i][1];
			}
			
			int answer = Math.max(d[n-1][0], Math.max(d[n-1][1], d[n-1][2]));
			System.out.println(answer);
		}
	}
}