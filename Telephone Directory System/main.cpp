#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include<stdlib.h>
#include <dos.h>
#include<conio.h>
#include <graphics.h>


using namespace std;
class stud{
    char name[20];
    char address[20];
    unsigned int ph_no;
    void get();
    void show();
    void modify();
};

void stud::get(){
    int i=0;
    cout<<"\n       Enter name-> ";
    cin.get(name[i]);
    while(name[i]=='\n'){
        i++;
        cin.get(name[i]);
    }
    cin.getline(name,20,'\n');
    fflush(stdin);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
