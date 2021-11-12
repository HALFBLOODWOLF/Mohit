//Week 9 question 1: Floyd Warshal
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Vertex,t=0;
	string temp;
	cin>>Vertex;
	vector<int> ans(Vertex);
	for(int i = 0;i<Vertex;i++)
	{
		for(int j = 0;j<Vertex;j++)
		{
			cin>>t;
			ans[i].push_back(t);
			if(ans[i][j] == -1)
			{
				
				ans[i][j] = INT_MAX;
			}
		}
	}
	for(int k = 0; k<Vertex;k++)
	{
		for(int i =0;i<Vertex; i++)
		{
			for(int j = 0;j<Vertex;j++)
			{
				if(ans[i][k]!=INT_MAX && ans[k][j]!= INT_MAX)
				{
				ans[i][j] = min(ans[i][j], (ans[i][k] + ans[k][j]));
			    }
			}
		}
	}
	for(int i = 0;i<Vertex;i++)
	{
		for(int j = 0;j<Vertex;j++)
		{
			if(answer[i][j] == INT_MAX)
				cout<<"OO ";
			else
				cout<<answer[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
