class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        set_str={}
        i=0;
        j=0;
        max_num=0;
        for str_s in range(len(s)):
            char_s=s[str_s];
            while(char_s in set_str):
                j=max(j,set_str[char_s]+1);
            set_str[char_s]=str_s;
            max_num=max(max_num,str_s-j+1);
        return max_num;
