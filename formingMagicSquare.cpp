#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */
int calculate_cost(int magic_matrix[3][3],vector<vector<int>> s)
{
    int cost=0;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            
            cost+=abs(magic_matrix[row][col]-s[row][col]);
        }
    }
    return cost;
}

bool checkMagicSqaure(int arr[][3])
{
    for(int row=0;row<3;row++)
    {
        if((arr[row][0]+arr[row][1]+arr[row][2])!=15)
        {
            return false;
        }
    }
    for(int col=0;col<3;col++)
    {
        if((arr[0][col]+arr[1][col]+arr[2][col])!=15)
        {
            return false;
        }
    }
    int diag_sum=0;
    for(int i=0;i<3;i++)
    {
        diag_sum+=arr[i][i];
    }
    if (diag_sum!=15)
    {
        return false;
    }
    
    diag_sum=0;
    for(int i=0;i<3;i++)
    {
        diag_sum+=arr[i][2-i];
    }
    if (diag_sum!=15)
    {
        return false;
    }
    
    return true;
    
}
int formingMagicSquare(vector<vector<int>> s) {
    int flatten[9];
    // int val=1;
    for(int i=0;i<9;i++)
    {
        flatten[i]=i+1;
    }
        
    
    int min_cost=INT_MAX;
    int arr[3][3];
    while(next_permutation(flatten,flatten+9))
    {
        int cnt=0;
        for(int row=0;row<3;row++)
        {
            for(int col=0;col<3;col++)
            {
                arr[row][col]=flatten[cnt];
                cnt+=1;
            }
            
        }
        
        if(!checkMagicSqaure(arr))
        {
            continue;
        }
        
        min_cost=min(min_cost,calculate_cost(arr,s));
    
    }
    return min_cost;
    }


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
