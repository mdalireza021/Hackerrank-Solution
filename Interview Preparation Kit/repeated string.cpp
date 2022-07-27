long repeatedString(string s, long n) {
    long count=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='a')
    {
        count++;
    }
}
count*=n/s.size();

for(int i=0;i<n%s.size();i++)
{
    if(s[i]=='a')
    {
        count++;
    }
}

return count;
}
