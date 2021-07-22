#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
	int your_ticket;
	int num=0;
	string file = "prize.txt";
	cout<<"Enter your lottery ticket number ";
	cin>>your_ticket;
	ifstream ifile;
	ifile.open(file.c_str());
	while(ifile.good())
	{
		ifile>>num;
		if(num==your_ticket)
		{
			cout<<"Hooray! You won the lottery!!!"<<endl;
			break;
		}
		num++;
	}
	if(num!=your_ticket)
	{
		cout<<"Better luck next time";
	}
	ifile.close();
	
	
	return 0;
}
