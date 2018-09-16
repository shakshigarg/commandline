#include<bits/stdc++.h>
using namespace std;


bool long_palin(string str,int i,int j,int& len)
{
    if(i>j)
	{
		return true;
	}	
	else
	{
		if(i==j)
		{
			if(len<1)
			{
				len=1;
			}
			return true;
		}
	else
	{
		if(str[i]==str[j])
		{
		     if(long_palin(str,i+1,j-1,len))
		     {
		     	if(len<j-i+1)
		     	{
		     		len=j-i+1;
				}
				return true;
			 }
			 else
			 {
			 	return false;
			 }
			 
		}
		else
		{
			long_palin(str,i+1,j,len);
			long_palin(str,i,j-1,len);
			return false;
		}
	}
}
}


int main()
{
	string str;
	cin>>str;
	int len=0;
	long_palin(str,0,str.length()-1,len);
	cout<<len<<endl;
}
