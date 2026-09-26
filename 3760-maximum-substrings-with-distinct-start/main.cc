class Solution {
public:
    int maxDistinct(string s) {

        set<char> st; 
        
        int n = s.size(); 

        for(int i = 0; i < n; i++){
            st.insert(s[i]);
        }

        int lettersNotDuplicates = st.size(); 

        return lettersNotDuplicates; 
    }
};