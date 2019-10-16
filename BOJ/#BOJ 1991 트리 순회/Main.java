import java.util.*;
import java.io.*;

public class Main {
	public static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static class Node {
		Node left, right;
		char data;
		
		public Node(char data) {
			this.data = data;
		}
	}
	
	public static Node tree[];
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		tree = new Node[n];
		
		for(int i=0; i<n; ++i) {
			tree[i] = new Node((char)('A'+i));
		}
		
		while(n-->0) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			char root = st.nextToken().charAt(0);
			char left = st.nextToken().charAt(0);
			char right = st.nextToken().charAt(0);
			
			if(left != '.') {
				tree[root-'A'].left = tree[left-'A'];
			}
			
			if(right != '.') {
				tree[root-'A'].right = tree[right-'A'];
			}
		}
		
		preOrder(0);
		bw.write("\n");
		inOrder(0);
		bw.write("\n");
		postOrder(0);
		bw.write("\n");
		bw.flush();
	}
	
	public static void preOrder(int idx) throws IOException {
		bw.write(tree[idx].data);
		if(tree[idx].left != null) {
			preOrder(tree[idx].left.data - 'A');
		}
		if(tree[idx].right != null) {
			preOrder(tree[idx].right.data - 'A');
		}
	}
	
	public static void inOrder(int idx) throws IOException {
		if(tree[idx].left != null) {
			inOrder(tree[idx].left.data - 'A');
		}
		bw.write(tree[idx].data);
		if(tree[idx].right != null) {
			inOrder(tree[idx].right.data - 'A');
		}
	}
	
	public static void postOrder(int idx) throws IOException {
		if(tree[idx].left != null) {
			postOrder(tree[idx].left.data - 'A');
		}
		if(tree[idx].right != null) {
			postOrder(tree[idx].right.data - 'A');
		}
		bw.write(tree[idx].data);
	}
}
