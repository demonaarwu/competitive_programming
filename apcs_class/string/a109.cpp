#include<bits/stdc++.h>

using namespace std;

string to_binary(int n)
{
    string binary = "";

    stack<int> digits;

    while (n > 0)
    {
        digits.push(n%2);
        n = n/2;
    }

    while (!digits.empty())
    {
        binary += (to_string(digits.top()));
        digits.pop();
    }


    int len = binary.length();
    for (int i = 0; i < 3-len; i++)
    {
        binary = "0" + binary;
    }
    return binary;
}


bool is_legal(string s)
{
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            return false;
        }
    }

    return true;
}

void print_result(vector<string> codes, int percentage)
{
    int codes_len = codes.size();
    for (int i = 0; i < codes_len; i++)
    {
        cout << codes[i] << ' ';
    }

    cout << percentage << '%' << endl;
}

vector<string> generate_codes(string s)
{
    vector<string> codes;
    int len = s.length();
    char repeat_c = s[0];
    int repeat_times = 1;

    for (int i = 1; i < len; i++)
    {
        if (repeat_c == s[i] && repeat_times < 7)
        {
            repeat_times++;
        }
        else
        {
            string code = repeat_c + to_binary(repeat_times);
            codes.push_back(code);
            repeat_c = s[i];
            repeat_times = 1;
        }
    }

    string code = repeat_c + to_binary(repeat_times);
    codes.push_back(code);

    return codes;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);

        if (is_legal(s))
        {
            vector<string> codes = generate_codes(s);

            int len = s.length();

            double codes_len = codes.size();
            int percentage = round((double) codes_len*400.0/((double) len));
            print_result(codes, percentage);
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
