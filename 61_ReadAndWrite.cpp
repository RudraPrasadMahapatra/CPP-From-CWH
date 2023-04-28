#include<iostream>
#include<fstream>
#include<string>
 
using namespace std;
 
int main(){
 
              // connecting our file with Rout stream
               ofstream Rout("sample60.txt");
   
               // creating a name string variable and filling it with string entered by the user
              string name;
               cout<<"Enter your name: ";
              cin>>name;
     
             // writing a string to the file
             Rout<<name + " is my name";
 
            // disconnecting our file
            Rout.close();
            // connecting our file with Rin stream
           ifstream Rin("sample60.txt");
 
          // creating a content string variable and filling it with string present there in the text file
           string content;
            Rin>>content;
            getline(Rin , content);
           cout<<"The content of the file is:"<<content;
 
           // disconnecting our file
           Rin.close();
           return 0;
}
