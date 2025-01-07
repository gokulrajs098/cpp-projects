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
    cout<<"\t\t___________Main Menu___________\t\t"<<endl;
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
    char choice;
    int count;
    n:
    cout<<"-------------Login Page----------------"<<endl;
    cout<<"Enter the login credentials: "<<endl;
    cout<<"Username: ";
    cin>>username;
    cout<<"Password: ";
    cin>>password;

    ifstream input("creds.txt");
    
    while(input>>user>>pass){
        if(username == user && password == pass){
            count = 1;
            break;
            system("cls");
        }  
    }
    if(count == 1){
            cout<<"Login Successfull...!"<<endl;
            cout<<"You are in "<<username<<endl;
            cout<<"\nEnter any letter and press enter to go to main menu: ";
            cin>>choice;
            if(choice){
                main();
            }

    }
    else{
        cout<<"\nInvalid credentials.."<<endl;
        cout<<"Please try again....."<<endl;
        
        goto n;
    }
}


void registration(){
    string user, pass;

    cout<<"-----------Registration Page-------------\n";
    cout<<"Username: ";
    cin>>user;
    cout<<"Password: ";
    cin>>pass;
    ofstream output("creds.txt", ios::app);
    output<<user<<' '<<pass<<endl;
    system("cls");
    cout<<"Registration is successfull"<<endl;
    main();

}

void forgot_password(){
    string fuser, fpass, ruser;
    int choice, count=0;
    l:
    cout<<"Did you forgot the password.....?"<<endl;
    cout<<"Enter the username: ";
    cin>>ruser;

    ifstream input("creds.txt");
    while(input>>fuser>>fpass){
        if(ruser == fuser){
            count = 1;
            break;
        }
    }
    input.close();
    if(count == 1){
        system("cls");
        cout<<"Your account found..!"<<endl;
        cout<<"password is "<<fpass;
        main();
    }
    else{
        system("cls");
        cout<<"Enter the correct username to recover you account..."<<endl;
        goto l;
    }
}