class Solution {
public:
    int poorPigs(int b, int md, int mt) {
        int t = mt/md;
        int f = t+1;
        int i = 0;
        while(pow(f,i)<b) i++;
        
        return i;
    }
};