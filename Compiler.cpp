#include<bits/stdc++.h>
using namespace std;
const int MLength = 100001;
string read[MLength];
string write[MLength];
int status;
void _readfile()
{
	
}
int _compiler()
{
	
}
void _writefile()
{
	
}
int main()
{
	freopen("a.sne","r",stdin);
	freopen("a.cpp","w",stdout);
	_readfile();
	status = _compiler();
	if(status == 0 || status >=43)
	{
		_writefile();
		fclose(stdout);
		cout<<"Compiled successfully. Return value "<<status<<"."<<endl;
	}
	else
	{
		flose(stdout);
		cout<<"Some mistakes. Return value "<<status<<"."<<endl;
	}
	fclose(stdin);
	return 0;
}
