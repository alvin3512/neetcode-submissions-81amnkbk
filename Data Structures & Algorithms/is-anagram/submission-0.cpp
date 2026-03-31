class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> umap;
        for(int i = 0; i < s.size(); i++){
            auto it = umap.find(s[i]);
            if(it != umap.end())
                umap[s[i]] = it -> second + 1;
            else
                umap.insert(make_pair(s[i], 1));
        }
        for(int i = 0; i < t.size(); i++){
            auto it = umap.find(t[i]);
            if (it == umap.end())
                return false;
            else
                umap[t[i]] -= 1;
            if(umap[t[i]] <= 0)
                umap.erase(t[i]);
        }
        if(!umap.empty())
            return false;
        return true;
    }
};
