class Solution {
public:
    string reverseWords(string s) {
        s = ' ' + s; string str = ""; string ans = "";
        //Constructing strings with one space in between.
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != ' ')
                str = str + s[i];
            
            else if(s[i] == ' ' && s[i+1] != ' ')
                str = str + ' ';
        }
        
        if(str[0] == ' ')//removing space at the start.
            str = str.substr(1);
        
        if(str[str.size()-1] == ' ')//removing space from the end.
            str = str.substr(0,str.length()-1);

              
        
        //Reverse Words:
        string temp = "";   str= str + " ";//adding space at the end to consider the last word.
        
        for(int i = 0 ; i < str.length() ; i++){
            
            if(str[i] != ' ')
                temp = temp + str[i];//temp is storing words.
            
            else{
                ans = temp + " " + ans;
                temp = "";
            }
        }
        
        ans.pop_back();//removing the extra space that was added.
        return ans;
    }
};
