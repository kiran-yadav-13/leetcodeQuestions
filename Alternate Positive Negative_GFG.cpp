class Solution {
  public:
    void rearrange(vector<int> &arr) {

        vector<int> pos, neg;

        // 0 is positive
        for (int x : arr) {
            if (x >= 0) pos.push_back(x);
            else neg.push_back(x);
        }

        int i = 0, p = 0, n = 0;

        // Always start with positive
        while (p < pos.size() && n < neg.size()) {
            arr[i++] = pos[p++];
            arr[i++] = neg[n++];
        }

        // If positives are remaining
        while (p < pos.size()) {
            arr[i++] = pos[p++];
        }

        // If negatives are remaining
        while (n < neg.size()) {
            arr[i++] = neg[n++];
        }
    }
};
