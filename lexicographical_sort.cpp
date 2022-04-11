// C++ program to implement the
// above approach
#include <iostream>
using namespace std;

// Function to print all the
// numbers form l to r in
// lexicographical order
void lexNumbers(int l, int r)
{
	vector<string> s;
    int arr[]={3,5,15};

	for(int i = 0; i <3; i++)
	{
		s.push_back(to_string(arr[i]));
	}

	sort(s.begin(),s.end());
	vector<int> ans;
	
	for(int i = 0; i < s.size(); i++)
		ans.push_back(stoi(s[i]));

	for(int i = 0; i < s.size(); i++)
		cout << ans[i] << " ";
}
	
// Driver code
int main()
{
    
	int l = 9;
	int r = 21;
	
	lexNumbers(l, r);
}

// This code is contributed by ajaykr00kj
