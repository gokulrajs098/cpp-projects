#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();

void registration();

void forgot_password();

int main()
{
    int choice;
    m:
    cout<<"\t\t___________Welcome___________\t\t"<<endl;
    cout<<"\n1) Login............."<<endl;
    cout<<"2) Registration......"<<endl;
    cout<<"3) Forgot Password..."<<endl;
    cout<<"4) Exit.............."<<endl;
    cout<<"\nChoose from above: ";
    cin>>choice;

    switch(choice){
        case 1:
            system("cls");
            login();
            break;
        case 2:
            system("cls");
            registration();
            break;
        case 3:
            system("cls");
            forgot_password();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Invalid number choose again.."<<endl;
            goto m;
            break;
    }
}

void login()
{
    string username, password, user, pass;
    cout<<"-------------Login Page----------------"<<endl;
    cout<<"Enter the login credentials: "<<endl;
    cout<<"Username: ";
    cin>>username;
    cout<<"Password: ";
    cin>>password;
}


void registration(){

}

void forgot_password(){

}