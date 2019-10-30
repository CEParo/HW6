
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define file_path "/home/debian/HW6"


int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cout<<endl;
		cout<<endl;
		cout<<"used to read contents from a file"<<endl;
		return 2;
	}


	string cmd(argv[1]);
	cout << endl;
	cout << "Starting the file reading program" << endl;
	cout << "Current file path" << file_path << endl;
	cout << "File to read" << cmd << endl;
		
	std::fstream fs;
	string line;
	string filename = "/" + cmd;
	cout<<filename<<endl;
	cout<<file_path+filename<<endl;
	fs.open((file_path + filename).c_str(), std::fstream::in);
	while(std::getline(fs, line))
	{
	cout << line << endl;
	}
	cout<<"21"<<endl;
	fs.close();
		
}
