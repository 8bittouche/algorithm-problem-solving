import java.util.*;
class Solution {
    static Set<Integer> set = new HashSet<>();
    public int solution(String numbers) {
        int n = numbers.length();
        for(int i=1; i<=n; ++i){
            char[] num = new char[i];
            boolean[] visited = new boolean[n];
            permutation(n, i, 0, num, numbers, visited);    
        }
        
        return set.size();
    }
    
    private boolean isPrime(int num){
        if(num < 2){
            return false;
        }
        if(num==2 || num==3){
            return true;
        }
        
        if(num%2==0){
            return false;
        }
        
        for(int i=2; i<=Math.sqrt(num); ++i){
            if(num%i==0){
                return false;
            }
        }
        
        return true;
    }
    
    private void permutation(int n, int r, int depth, char[] num, String numbers, boolean[] visited){
        if(depth == r){
            String s = "";
            for(char x : num){
                s += x;
            }
            
            int ns = Integer.parseInt(s);
            if(isPrime(ns)){
                set.add(ns);
            }
            return;
        }
        
        for(int i=0; i<numbers.length(); ++i){
            if(!visited[i]){
                visited[i] = true;
                num[depth] = numbers.charAt(i);
                permutation(n, r, depth+1, num, numbers, visited);
                num[depth] = 0;
                visited[i] = false;
            }
        }
    }
}