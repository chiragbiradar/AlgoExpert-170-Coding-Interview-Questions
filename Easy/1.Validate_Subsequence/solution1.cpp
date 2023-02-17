class Solution {
public:
    bool isSubsequence(string s, string t) {
        int arridx=0,seqind=0;
        while(arridx<t.size() && seqind<s.size())
        {
            if(s[seqind]==t[arridx])
            seqind++;
            arridx++;
        }

        return seqind==s.size();
        
    }
};