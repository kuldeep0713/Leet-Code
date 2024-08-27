class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_val = arrays[0][0];
        int max_val = arrays[0][arrays[0].size() - 1];
        int max_distance = 0;

        for (int i = 1; i < arrays.size(); i++) {
            max_distance = max(max_distance, abs(arrays[i].back() - min_val));
            max_distance = max(max_distance, abs(max_val - arrays[i].front()));
            min_val = min(min_val, arrays[i][0]);
            max_val = max(max_val, arrays[i].back());
        }

        return max_distance;
    }
};
