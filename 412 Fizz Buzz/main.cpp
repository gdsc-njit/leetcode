class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; i++) {
            string s = to_string(i);
            if (i % 3 == 0) s = "Fizz";
            if (i % 5 == 0) {
                if (i % 3 == 0) s += "Buzz";
                else s = "Buzz";
            }
            result.push_back(s);
        }
        return result;
    }
};
