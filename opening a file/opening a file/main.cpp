//
//  main.cpp
//  opening a file
//
//  Created by Nisha Ramprasath on 8/11/23.
//

#include<iostream>
#include<fstream>
using namespace std;
     
int main()
{
    ifstream ifs;
    ifs.open("My.txt");
    
    cout<<"file is opened"<<endl;
    string name;
    int roll;
    string branch;
    ifs>>name>>roll>>branch;
    ifs.close();
        
    cout<<"name"<<name<<endl;
    cout<<"roll"<<roll<<endl;
    cout<<"branch"<<branch<<endl;
        
}
