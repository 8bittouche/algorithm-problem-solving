import java.util.*;
import java.io.*;

public class Main {
	public static int n;
	public static int m;
	public static int map[][] = new int[101][101];
	public static int visited[][] = new int[101][101];
	public static int d[][] = new int[101][101];
	public static final int dx[] = {1, 0, -1, 0};
	public static final int dy[] = {0, 1, 0, -1};
	
	public static void bfs(int sx, int sy) {
		Queue<Integer> q = new LinkedList<Integer>();
				
		q.add(sx);
		q.add(sy);
		visited[sx][sy] = 1;
		d[sx][sy] = 1;
		
		while(!q.isEmpty()) {
			int x = q.remove();
			int y = q.remove();
						
			for(int i=0; i<4; ++i) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				
				if(nx<1 || nx>n || ny<1 || ny>m) {
					continue;
				}
								
				if(map[nx][ny]==1 && visited[nx][ny] == 0) {
					d[nx][ny] = d[x][y] + 1;
					visited[nx][ny] = 1;
					q.add(nx);
					q.add(ny);
				}
			}
		}
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		n = sc.nextInt();
		m = sc.nextInt();
		for(int i=1; i<=n; ++i) {
			String s = sc.next();
			for(int j=1; j<=m; ++j) {
				map[i][j] = s.charAt(j-1) - '0';
				d[i][j] = 0;
			}
		}
		
		bfs(1, 1);
		System.out.println(d[n][m]);
	}
}

