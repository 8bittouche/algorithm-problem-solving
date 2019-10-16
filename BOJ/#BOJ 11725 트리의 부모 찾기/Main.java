import java.util.*;
import java.io.*;

public class Main {
	public static boolean visited[];
	public static ArrayList<ArrayList<Integer>> list = new ArrayList<ArrayList<Integer>>();
	public static int parent[];
	
	public static void bfs(int root) {
		Queue<Integer> q = new LinkedList<Integer>();
		
		q.add(root);
		visited[root] = true;
		
		while(!q.isEmpty()) {
			int front = q.remove();
			
			int size = list.get(front).size();
			for(int i=0; i<size; ++i) {
				int child = list.get(front).get(i);
				if(visited[child] == false) {
					parent[child] = front;
					
					q.add(child);
					visited[child] = true;
				}
			}
		}
	}
	
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		visited = new boolean[n+1];
		parent = new int[n+1];
		
		for(int i=0; i<=n; ++i) {
			list.add(new ArrayList<Integer>());
		}
		
		for(int i=0; i<n-1; ++i) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			
			list.get(a).add(b);
			list.get(b).add(a);
		}
		
		bfs(1);
		
		for(int i=2; i<=n; ++i) {
			System.out.println(parent[i]);
		}
		
	}
}
