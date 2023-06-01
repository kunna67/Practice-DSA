class Solution {
public:
int lengthOfLastWord(string s) {
auto x=s.rbegin();
while(*x==' ') ++x;
auto y=find(x,s.rend(),' ');
return distance(x,y);
}
};