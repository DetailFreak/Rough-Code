#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string source_dir = "/Documents/Programming/C++/coverlettergenerator/";
string dest_dir = "/Documents/Programming/C++/coverlettergenerator/";

bool argUsed[3] = {false,false,false};

string field = "\0";
string company = "\0";
string product = "\0";
char buffer[25];
int main(int argc,char *argv[])
{
	if (argc == 1){
		cout<<"usage:cvltr -f field -c company -p product\n";
		return -1;
	}

	for(int arg = 1; arg < argc; arg += 2){

		if(argUsed[arg]==false)
			{
				switch(argv[arg][1]){
					case 'f' : field.assign(argv[arg+1]);
								break;
					case 'c' : company.assign(argv[arg+1]);
								break;
					case 'p' : product.assign(argv[arg+1]);
								break;
					default : cout<<"usage:cvltr -f field -c company -p product";
					}
			}
	}

	ifstream fin;
	ofstream fout;
	if (company[1]!='\0')
	 {fout.open(dest_dir + company +"-"+ field +"-"+ product +"-"+ "internship-letter.txt",ios::trunc);
	  fin.open(source_dir + field + ".txt");}
	else return -1;
	char ch;
	while(fin.get(ch)){
		if(ch != '[')
			fout<<ch;
		else  {
			fin.get(ch);
			 switch(ch)
		   {
			case 'C': case 'c': fout<<company;break;
			case 'f': case 'F': fout<<field;break;
			case 'P': case 'p': fout<<product;break;
		   }
		   while (ch!=']') fin.get(ch);   
	    }
	}

	fin.close();
	fout.close();
	return 0;
}
