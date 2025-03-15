#include <iostream>
using namespace std;

int main(){

   string x = "kool-aid";
   string y = "|water";

   swap(x,y);

   cout<<"X: "<< &x<< '\n';
   cout<<"Y: "<< &y<< '\n';
    

    return 0;
}

void swap(string *czantelle, string *chad){
    string temp;
    temp = *czantelle;
    *czantelle=*chad;
    *chad=temp;
}