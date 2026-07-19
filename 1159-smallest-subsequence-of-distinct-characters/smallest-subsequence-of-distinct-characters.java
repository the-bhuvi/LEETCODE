class Solution {
    public String smallestSubsequence(String s) {
     int[] freq = new int[27];
        boolean[] seen = new boolean[27];
        Stack<Character> stack = new Stack<>();

        
        for (char c : s.toCharArray()) {
            freq[c & 31]++;
        }

        
        for (char c : s.toCharArray()) {

            int x = c & 31;
            freq[x]--;

            if (seen[x])
                continue;

            
            while (!stack.isEmpty() &&
                    stack.peek() > c &&
                    freq[stack.peek() & 31] > 0) {

                seen[stack.peek() & 31] = false;
                stack.pop();
            }

            stack.push(c);
            seen[x] = true;
        }

        StringBuilder sb = new StringBuilder();

        for (char c : stack)
            sb.append(c);

        return sb.toString();
    }

        
    
}