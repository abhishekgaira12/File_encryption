#include <iostream>
#include <fstream>


using namespace std;

int main()
{
   cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t                  ±±±±±±±±                                                   ±±±±                                       "<<endl;
	cout<<"\t\t\t\t\t                  ±±    ±±                                    _________                                                 "<<endl;
	cout<<"\t\t\t\t\t               ±±±±±±±±±±±±±±±        _______________________|   ___  |      ±±±±                                       "<<endl;
	cout<<"\t\t\t\t\t               ±±±±±±± ±±±±±±±       |_   _   _______________   |___| |                                                 "<<endl;
	cout<<"\t\t\t\t\t               ±±±±±±±±±±±±±±±         |_| |_|               |________|      ±±±±                                       "<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\tENCRYPTION / DECRYPTION                                                      ±±±±                                       "<<endl;
	cout<<"\n";
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±";
	cout<<"±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±"<<endl<<endl; 
	
	
	
	
	int ans, key;
	string in;
	while(1)
    {
	cout<<"___________________________"<<endl;
	cout<<"Press 1 to Encrypt file.  |\n                          |  Press 3  to Quit  \nPress 2 to Decrypt file.  |"<<endl;
	cout<<"__________________________|"<<endl;
	cin>>ans;
	
	if(ans==3)
{
	return 0 ;
}	
	
	cout<<"\n";
	
	cout<<"Enter File Name -"<<endl;
	cin>>in;
	
	cout<<"\n";
	
	cout<<"Enter Key -"<<endl;
	cin>>key;
	
	cout<<"\n";
	

	
	
if (ans == 1)
	{
		char c;                  //making char variable 
		ifstream fin;                   // creating a object of ifstream
		ofstream fout;                  // creating a object of ofstream
		fin.open(in.c_str(), ios::binary);      
		in = "encrypted";
		fout.open(in.c_str(), ios::binary);
		while (!fin.eof())
		{
			fin>>noskipws>>c;
			int temp = (c + key);
			fout<<(char)temp;
		}
		fin.close();                            //   closing link 
		fout.close();
		cout<<"............File Encrypted..............\n\n file created ---->> encrypted"<<endl;
	}
	else if (ans == 2)
	{
		char c;
		ifstream fin;
		ofstream fout;
		fin.open(in.c_str(), ios::binary);
		in = "decrypted.txt";
		fout.open(in.c_str(), ios::binary);
		while (!fin.eof())
		{
			fin>>noskipws>>c;
			int temp = (c - key);
			fout<<(char)temp;
		}
		fin.close();
		fout.close();
		cout<<"............File Decrypted..............\n"<<endl;
	}
	cout<<"**********************************************************************************************************************************"<<endl;
 }

	                      
}

