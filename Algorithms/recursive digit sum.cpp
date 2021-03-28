#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long long int sumofdigit(long long int digit)
{
    long long int sum=0;
    long long int n=digit;
    if(n<=9)
        return n;

    while(n!=0)
    {

        long long int remainder=n%10;
        sum+=remainder;
        n=n/10;

    }
    return sumofdigit(sum);

}
// Complete the superDigit function below.
long long int superDigit(string n, long int k) {

//long long int value=stoi(n);

//long long  int super=sumofdigit(value*k);


int len=n.size();
int sum=0;
for(int i=0;i<len;i++)
{
    sum+=n[i]-'0';
    
}

return sumofdigit(sum*k);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    string n = nk[0];

    int k = stoi(nk[1]);

    int result = superDigit(n, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
