class Solution {
public:
int getLucky(string s, int k) {
long long int ans=0;
for(int i=0;i<s.size();i++)
{
ans+=(s[i]-'a'+1)/10+(s[i]-'a'+1)%10;
}
while(--k)
{
long long int temp=0;
while(ans)
{
temp+=ans%10;
ans/=10;
}
ans=temp;
}
return ans;
}
};