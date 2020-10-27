class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> myStack;
        int current = 0;
        int sum = 0;
        while (current < height.size()) {
            while (myStack.size() != 0 && height[current] > height[myStack.top()]) {
                int h = height[myStack.top()]; 
                myStack.pop();
                if (myStack.empty()) {
                    break;
                }
                int width = current - myStack.top() - 1;
                int minWall = min(height[current], height[myStack.top()]);
                sum = sum + width * (minWall - h);
            }
            myStack.push(current++);
        }
        return sum;
    }
};