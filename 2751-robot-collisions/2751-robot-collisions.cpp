class Solution {
public:
    struct info {
        int pos;
        int hel;
        char dir;
    };
    static bool comp(info &a, info &b) {
        return a.pos < b.pos;
    }
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<info> robots(n);
        for (int i=0; i<n; i++) {
            robots[i].pos = positions[i];
            robots[i].hel = healths[i];
            robots[i].dir = directions[i];
        }

        sort(robots.begin(), robots.end(), comp);
        
        stack<info> st;
        st.push(robots[0]);

        for (int i=1; i<n; i++) {
            while (!st.empty() && st.top().dir == 'R' && robots[i].dir == 'L') {
                auto top = st.top();
                st.pop();
                if (top.hel == robots[i].hel) {
                    robots[i].hel = 0; // both are destroyed
                }
                else if (top.hel < robots[i].hel) {
                    robots[i].hel -= 1; // curr robot survived
                }
                else if (top.hel > robots[i].hel) {
                    top.hel -= 1; // top robot survived
                    st.push(top);
                    robots[i].hel = 0;
                }

                if (robots[i].hel <= 0) {
                    break;
                }
            }

            if (robots[i].hel > 0) {
                st.push(robots[i]);
            }
        }

        map<int, int> mp;
        while (!st.empty()) {
            auto curr = st.top();
            st.pop();
            mp[curr.pos] = curr.hel;
        }

        vector<int> ans;
        for (int i=0; i<n; i++) {
            if (mp.find(positions[i]) != mp.end()) {
                ans.push_back(mp[positions[i]]);
            }
        }

        return ans;
    }
};