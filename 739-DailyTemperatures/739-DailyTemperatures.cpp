// Last updated: 19/2/2026, 9:13:39 am
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0); // Initialize the result vector with zeros
        stack<int> stack; // Stack to keep track of indices

        for (int i = 0; i < temperatures.size(); i++) {
            int val = temperatures[i];
            // While stack is not empty and current temperature is greater than
            // the temperature represented by the index at the top of the stack
            while (!stack.empty() && val > temperatures[stack.top()]) {
                int index = stack.top(); // Get the index at the top of the stack
                stack.pop(); // Pop from the stack
                result[index] = i - index; // Update the result
            }
            stack.push(i); // Add current temperature index to stack
        }

        return result;
    }
};