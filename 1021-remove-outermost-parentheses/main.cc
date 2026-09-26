class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1;
        int counter = 0;

        int n = s.size();

        for (int i = 0; i < n; i++) {

            if (s[i] == '(') {

                if (counter > 0) {
                    s1 += s[i];
                }

                counter++;
            }
            if (s[i] == ')') {
                counter--;

                if (counter > 0) {
                    s1 += s[i];
                }

            }
        }

        return s1;
    }
};