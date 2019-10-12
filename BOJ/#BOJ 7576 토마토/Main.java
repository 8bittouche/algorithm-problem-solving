
import java.util.*;
import java.io.*;

public class Main {
	public static int cnt=0;
	public static int t_cnt=0;
	public static int e_cnt=0;
	public static Queue<Integer> q = new LinkedList<Integer>();
	public static int m;
	public static int n;
	public static int map[][] = new int[1001][1001];
	public static final int dx[] = {1, 0, -1, 0};
	public static final int dy[] = {0, 1, 0, -1};
	
	public static boolean isComplete() {
		if(m*n-e_cnt==t_cnt) return true;
		else return false;
	}
	
	public static void oneDayAfter(int x, int y) {
		for(int i=0; i<4; ++i) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
			
			if(map[nx][ny]==0) {
				map[nx][ny]=1;
				q.add(nx);
				q.add(ny);
				t_cnt++;
			}
		}
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		m = sc.nextInt();
		n = sc.nextInt();
		
		for(int i=0; i<n; ++i) {
			for(int j=0; j<m; ++j) {
				 int n = sc.nextInt();
				 map[i][j] = n;
				 if(n==1) {
					 q.add(i);
					 q.add(j);
					 t_cnt++;
				 }
				 else if(n==-1) {
					 e_cnt++;
				 }
			}
		}
		
		while(true) {
			if(isComplete()) {
				break;
			}
			
			if(q.isEmpty()) {
				cnt = -1;
				break;
			}
			
			int q_size = q.size() / 2;
			while(q_size > 0) {
				int sx = q.remove();
				int sy = q.remove();
				
				oneDayAfter(sx, sy);
				q_size--;
			}
			
			cnt++;
		}
		
		System.out.println(cnt);
	}
}