// Mario Benavides
// Lab 6 - Complete, could not get main to call functions without "variable or field declared void error", but this works.
// enter 10 songs and their artists into a playlist and will sort the entries by artist order.

#include<iostream>
#include<string>

using namespace std;

int main() 												
{
	std::string Artist[10];
	std::string Title[10];
	int index[10];
	int i, j;

				
{
	for(i=0; i<=9; i++)
{
	cout << "Enter the Artist name: ";
	cin >> Artist[i]; 
	cout << "Enter the song Title: ";
	cin >> Title[i]; 
}

	for(i=0; i<=9; i++)
{
	index[i]=i; // initilaize index
}


	for(i=0; i<=8; i++) // compare i to j
	{
	for(j=i+1; j<=9; j++) //compare 1 to 1
	{
		int temp;
		
		if (Artist[index[i]] > Title[index[j]])
		{
				temp = index[i];
				index[i] = index[j];
				index[j] = temp; // switcharound
		}			
	}
	}
cout << endl;
	cout<<"\t Playlist"<< endl;
	cout<<"Artist \t\t Title"<< endl;
	cout<<"============================"<< endl;
	
for(i=0; i<=9; i++)
{

	cout << Artist[index[i]] << "\t\t" << Title[index[i]] << endl; 
}

cin.ignore();
cin.get();
}
return 0;
}


