class Solution {
    public void dfs(int x, int n, int[][] computers, boolean[] visited){
        visited[x] = true;
        
        for(int i=0; i<n; ++i){
            if(computers[x][i]==1 && visited[i]==false){
                dfs(i, n, computers, visited);
            }
        }
    }
    
    public int solution(int n, int[][] computers) {
        int answer = 0;
        boolean[] visited = new boolean[n];
        for(int i=0; i<n; ++i){
            if(visited[i]==false){
                dfs(i, n, computers, visited);
                answer++;
            }
        }
        
        return answer;
    }
}