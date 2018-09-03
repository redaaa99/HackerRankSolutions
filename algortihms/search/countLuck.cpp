#include<iostream>
using namespace std;

int n,m,x1,x2,y1,y2,result;
char A[100][100];

void R(int r,int c,int k,int dirn)
{
	bool left=false,right=false,up=false,down=false;
	/*
	   left=1
	   right=2
	   up=3
	   down=4
	 */
	int counter=0;
	if(r==x2 && c==y2)
	{
		result=k;
		return;
	}

	if(c+1<m && dirn!=1 && A[r][c+1]<50)//right
	{
		right=true;
		counter++;
	}
	if(c-1>=0 && dirn!=2 && A[r][c-1]<50)//left
	{
		left=true;
		counter++;
	}
	if(r-1>=0 && dirn!=4 && A[r-1][c]<50)//up
	{
		up=true;
		counter++;
	}
	if(r+1<n && dirn!=3 && A[r+1][c]<50)//down
	{
		down=true;
		counter++;
	}

	if(counter>1)
	{
		k++;
	}

	if(right && result==-1)
		R(r,c+1,k,2);
	if(left && result==-1)
		R(r,c-1,k,1);
	if(up && result==-1)
		R(r-1,c,k,3);
	if(down && result==-1)
		R(r+1,c,k,4);

}
int main()
{
	int test,t,i,j,k;
	cin>>test;
	for(t=0;t<test;t++)
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>A[i][j];
				if(A[i][j]=='*')
				{
					x2=i;
					y2=j;
				}
				if(A[i][j]=='M')
				{
					x1=i;
					y1=j;
				}
			}
		}
		cin>>k;
		result=-1;
		R(x1,y1,0,5);
		//cout<<result;
		if(result==k)
		{
			cout<<"Impressed"<<endl;
		}
		else
		{
			cout<<"Oops!"<<endl;
		}

	}
	return 0;
}
