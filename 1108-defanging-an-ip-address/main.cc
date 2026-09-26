class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();

        string newString; 

        for(int i = 0; i < n; i++){
            if(address[i] != '.'){
                newString.push_back(address[i]);
            }else{
                newString += "[.]";
            }
        }

        return newString;
    }
};