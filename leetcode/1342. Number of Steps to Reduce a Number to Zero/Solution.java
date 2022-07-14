class Solution {
    public int numberOfSteps(int num) {
        int steps = 0;

        while(true){
            if(num == 0){
                break;
            }else if(num % 2 == 1){
                num -= 1;
                steps++;
            }else{
                num /= 2;
                steps++;
            }
        }

        return steps;
    }
}