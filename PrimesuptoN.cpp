#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
	int flag = 0;
	
	for(int i = 2;i <= n/2; i++)
	{
		if(n % i == 0)
		{
			flag++;
			break;
		}
	}
	
	if(flag != 0)
	{
		return false;
	}

	return true;	
}

vector<int> primesUptoN(int n) 
{
	vector<int>prime;
	if(n == 0 || n == 1)
	{
		return prime;
	}
	else
	{
		for(int i = 2;i <= n;i++)
		{
			if(check_prime(i) == true)
			{
				prime.push_back(i);
			}
		}
	}
	return prime;
}

int main()
{
    int n;
    vector<int>arr;
    cout << "Enter the number:";
    cin >> n;
    arr = primesUptoN(n);

    for(int i = 0;i < arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
