#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main(){
    string a,result;
    int x;
    srand(time(0));
    cout<<"Press Enter 3 times to reveal your future."<<'\n';
    getline(cin,a);
    getline(cin,a);
    getline(cin,a);
    
    x = rand()%9;

if(x==0) result="A";
else if(x==1) result="B+";
else if(x==2) result="B";
else if(x==3) result="C+";
else if(x==4) result="C";
else if(x==5) result="D+";
else if(x==6) result="D";
else if(x==7) result="F";
else if(x==8) result="W";

    cout<<"You will get "<<result<<" in this 261102.";

}
