#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string>
#include<unistd.h>
using namespace std;

#define file_path "/home/debian/HW6"

int main (int argc, char* argv[])
{
	if (argc != 2)
	{
		cout<<endl;
		cout<<"Used to write to a file"<<endl;
	}
	string cmd(argv[1]);
	cout<<"File Writing program started"<<endl;
	cout<<"current file path:"<<file_path<<endl;
	cout<<"file to write to:"<<cmd<<endl;

	fstream fs;
	string file = "/" + cmd;
	fs.open((file_path + file).c_str(), std::fstream::out);
	fs << "I watched Star Wars 1"<< endl;
	fs << "I watched Star Trek"<<endl;
	fs.close();
	return 0;
}
