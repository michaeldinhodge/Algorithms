class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int point = 0;
        int max = 0;
        vector<int> altitudes = {point};
        for(int i = 0; i < gain.size(); i++){
            point = point + gain[i];
            altitudes.insertpoint;
            if(point > max){
                max = point;
            }
        }
        return max;
    }
};
