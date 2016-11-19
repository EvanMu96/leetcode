using namespace boost;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int ret = 0;
        if(version1.size() == 0 || version2.size() == 0) return ret;

        vector<string> v1;
        vector<string> v2;

        boost::split(v1, version1, boost::is_any_of("."));
        boost::split(v2, version2, boost::is_any_of("."));

        int len1 = v1.size();
        int len2 = v2.size();

        int i = 0;
        for(ret == 0 && (i < len1 || i < len2))
        {
            int x1 = i < len1 ? stoi(v1[i]) : 0;
            int x2 = i < len2 ? stoi(v2[i]) : 0;
            if(x1 > x2)
                ret = 1;
            else if(x1 < x2)
                ret = -1;
            else
              i++;
        }

        return ret;
    }
};  
