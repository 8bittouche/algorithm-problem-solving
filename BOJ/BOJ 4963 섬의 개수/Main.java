import java.util.*;
import java.io.*;

public class Main {
	static int[] dr = {-1,-1,-1,0,0,1,1,1};
	static int[] dc = {-1,0,1,-1,1,-1,0,1};
	
	private static void dfs(int r, int c, int w, int h, int[][] mp, boolean[][] visited) {
		visited[r][c] = true;
		
		for(int i=0; i<8; ++i) {
			int nr = r + dr[i];
			int nc = c + dc[i];
			
			if(nr < 0 || nr >=h || nc < 0 || nc >= w) continue;
			
			if(mp[nr][nc]==1 && !visited[nr][nc]) {
				dfs(nr, nc, w, h, mp, visited);
			}
		}
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		while(true) {
			StringTokenizer st = new StringTokenizer(br.readLine(), " ");
			int w = Integer.valueOf(st.nextToken());
			int h = Integer.valueOf(st.nextToken());
			
			if(w==0 && h==0) break;
			
			int[][] mp = new int[h][w];
			boolean[][] visited = new boolean[h][w];
			for(int i=0; i<h; ++i) {
				st = new StringTokenizer(br.readLine(), " ");
				for(int j=0; j<w; ++j) {
					mp[i][j] = Integer.valueOf(st.nextToken());
				}
			}
			
			int cnt=0;
			for(int i=0; i<h; ++i) {
				for(int j=0; j<w; ++j) {
					if(mp[i][j]==1 && !visited[i][j]) {
						dfs(i, j, w, h, mp, visited);
						cnt++;
					}
				}
			}
			
			System.out.println(cnt);
		}
		
	}
}
