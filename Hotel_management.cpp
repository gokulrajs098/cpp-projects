#include<iostream>

using namespace std;


int Qrooms=0, Qpasta=0, Qchicken=0, Qnoodles=0,Qshake=0, Qburger=0;

int Srooms=0, Spasta=0, Schicken=0, Snoodles=0, Sshake=0, Sburger=0;

int Total_rooms=0, Total_pasta=0, Total_chicken=0, Total_noodles=0, Total_shake=0, Total_burger = 0;

bool adminLogin();

void menu();

void adminDashboard();

int main()
{


    char user;
    bool result;

   

    cout<<"\tAre you a customer or admin\n";
    cout<<"\nEnter 'A' for admin and 'C' for customer: ";
    cin>>user;

    if(user == 'A' || user == 'a'){
        n:
        result = adminLogin();
        if(result){
            adminDashboard();
        }
        else{
            cout<<"\npassword Incorrect..\n";
            goto n;
        }
    }
    else if(user == 'C' || user == 'c'){
        menu();
    }
    else{
        cout<<"Enter the valid character: "<<endl;
    }

    return 0;
}

bool adminLogin()
{

    const string user = "gokul123";
    const string pass = "gokul321";

    string username, password;

    cout<<"Enter the username and password\n";
    cout<<"Username: ";
    cin>>username;
    cout<<"\npassword: ";
    cin>>password;

    return (username==user && password==pass);

}

void menu(){

    int choice, quant;
    m:
    cout<<"\t\tMENU FOR TODAY...\n";

    cout<<"1) Book Rooms...\n";
    cout<<"2) Pasta........\n";
    cout<<"3) Chicken......\n";
    cout<<"4) Noodles......\n";
    cout<<"5) Burger.......\n";
    cout<<"6) Shake........\n";
    cout<<"7) Exit.........\n";
    cout<<"8) Go to main menu\n";
    cout<<"\nEnter the choice from above....\n";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter the number of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms >= quant){
                Srooms = Srooms+quant;
                Total_rooms = Total_rooms+quant*1200;
                cout<<quant<<" room/rooms have been alotted for you..."<<endl;
            }
            else if(Qrooms-Srooms < quant){
                cout<<Qrooms-Srooms<<" rooms only available..";
            }
            else{
                cout<<"Enter a valid number"<<endl;
            }
            break;
        case 2:
            cout<<"Enter the number of pasta you want: ";
            cin>>quant;
            if(Qpasta-Spasta >= quant){
                Spasta = Spasta+quant;
                Total_pasta = Total_pasta+quant*50;
                cout<<quant<<" pasta ordered by you..."<<endl;
            }
            else if(Qpasta-Spasta < quant){
                cout<<Qpasta-Spasta<<" pasta only available..";
            }
            else{
                cout<<"Enter a valid number"<<endl;
            }
            break;
        case 3:
            cout<<"Enter the number of chicken you want: ";
            cin>>quant;
            if(Qchicken-Schicken >= quant){
                Schicken = Schicken+quant;
                Total_chicken = Total_chicken+quant*250;
                cout<<quant<<" chicken ordered by you..."<<endl;
            }
            else if(Qchicken-Schicken < quant){
                cout<<Qchicken-Schicken<<" chicken only available..";
            }
            else{
                cout<<"Enter a valid number"<<endl;
            }
            break;
        case 4:
            cout<<"Enter the number of Noodles you want: ";
            cin>>quant;
            if(Qnoodles-Snoodles >= quant){
                Snoodles = Snoodles+quant;
                Total_noodles = Total_noodles+quant*100;
                cout<<quant<<" noodles ordered by you..."<<endl;
            }
            else if(Qnoodles-Snoodles < quant){
                cout<<Qnoodles-Snoodles<<" noodles only available..";
            }
            else{
                cout<<"Enter a valid number"<<endl;
            }
            break;
        case 5:
            cout<<"Enter the number of Burger you want: ";
            cin>>quant;
            if(Qburger-Sburger >= quant){
                Sburger = Sburger+quant;
                Total_burger = Total_burger+quant*35;
                cout<<quant<<" burger ordered by you..."<<endl;
            }
            else if(Qburger-Sburger < quant){
                cout<<Qburger-Sburger<<" burger only available..";
            }
            else{
                cout<<"Enter a valid number"<<endl;
            }
            break;
        case 6:
            cout<<"Enter the number of Shake you want: ";
            cin>>quant;
            if(Qshake-Sshake >= quant){
                Sshake = Sshake+quant;
                Total_shake = Total_shake+quant*25;
                cout<<quant<<" shake ordered by you..."<<endl;
            }
            else if(Qshake-Sshake < quant){
                cout<<Qshake-Sshake<<" shake only available..";
            }
            else{
                cout<<"Enter a valid number"<<endl;
            }
            break;
        case 7:
            exit(0);
        case 8:
            main();
        default:
            cout<<"Enter a valid number given above....!!!!!";
    }
    goto m;

}

void adminDashboard()
{

    int choice;
    start:
    cout<<"\tAdmin Dashboard..\n";

    cout<<"1) Add quantity for today......\n";
    cout<<"2) Check the sales for today...\n";
    cout<<"3) Go to main menu.............\n";
    cout<<"4) Exit........................\n";

    cout<<"Enter the choice..\n";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Add rooms available for booking today..\n";
            cin>>Qrooms;
            cout<<"Add pasta available\n";
            cin>>Qpasta;
            cout<<"Add chicken available\n";
            cin>>Qchicken;
            cout<<"Add burger available\n";
            cin>>Qburger;
            cout<<"Add noodles available\n";
            cin>>Qnoodles;
            cout<<"Add shake available\n";
            cin>>Qshake;

            cout<<"\tInformation addedd successfully..\n";
            break;
        
        case 2:
            cout<<"\tSales for today...";
            cout<<"Rooms   : $"<<Total_rooms<<endl;
            cout<<"Pasta   : $"<<Total_pasta<<endl;
            cout<<"Burger  : $"<<Total_burger<<endl;
            cout<<"Noodles : $"<<Total_noodles<<endl;
            cout<<"Shake   : $"<<Total_shake<<endl;
            cout<<"Chicken : $"<<Total_chicken<<endl;
            break;
        case 3:
            main();
            break;
        case 4:
            exit(0);
    }
    goto start;  

}