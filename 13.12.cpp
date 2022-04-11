#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class coin
{
	string sideup;
public:
	coin()
	{
		
		int num;
		num = rand() % 2 + 1;
	     if (num == 1)
		{
			sideup = "Heads";
		}
		else
			sideup = "Tails";
	}
	//mautators ............setter functions 
	void setToss(string side)
	{
		sideup = side;
	}
	//accessors.............getter functions 
	string getToss()
	{
		return sideup;
	}
};
	int main()
		
	{
		//take two integers for count the number of heads and tails 
		int count1=0, count2=0;
		string temp;
		//use loop for printing and counting the number of heads and taiuils 
		srand(time(NULL));
		for (int i = 0; i < 20; i++)
		{
			coin c;
			temp= c.getToss();
			cout << temp << endl;
			if (temp == "Heads")
			{
				count1++;
			}
			else
				count2++;

		}
		cout << "no of heads " << count1 << endl;
		cout << "no of tails " << count2 << endl;

	}