#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[5][5]={{4,3,2,3,4},{3,2,1,2,3},{2,1,0,1,2},{3,2,1,2,3},{4,3,2,3,4}};
	std::vector< std::vector<int> > v1;
	int row=0;
	int col=0;
	int r=5;
	int c=5;
	v1.resize(r);
    for(int i = 0; i < r; ++i)
    v1[i].resize(c); // in every row, create W columns
  // thus this is equivalent to a HxD array

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++) 
    {
      cin >> v1[i][j];
    }

  }

	if(v1[2][2]==1)
	{
		cout<<0;
		row=0;
		col=0;
	}
	else
	{
		for(int i=0;i<5;i++)
		{
		    for(int j=0;j<5;j++)
		    {
			    if(v1[i][j]==1)
			    {
			    	row=i;
			    	col=j;
			    }

		    }
		}
		cout<<a[row][col];
    }
		return 0;
	}
