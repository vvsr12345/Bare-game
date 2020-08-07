#include <iostream>
using namespace std;
int player1(string game[3][3])
{
    cout<<"player 1"<<"\n";
    cout<<"where you want to insert your *"<<"\n"<<"select from above alphabets"<<"\n";
    cout<<"#############################################################################################"<<"\n";
char op;
cin>>op;
switch(op)
    {
    case 'A':
        if(game[0][0]!="A_*" && game[0][0]!="A_#" && game[0][0]=="A__")
            game[0][0]="A_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'B':
        if(game[0][1]!="B_*" && game[0][1]!="B_#" && game[0][1]=="B__")
            game[0][1]="B_*";
       else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'C':
        if(game[0][2]!="C_*" && game[0][2]!="C_#" && game[0][2]=="C__")
            game[0][2]="C_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'D':
        if(game[1][0]!="D_*" && game[1][0]!="D_#" && game[1][0]=="D__")
            game[1][0]="D_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'E':
        if(game[1][1]!="E_*" && game[1][1]!="E_#" &&game[1][1]=="E__")
            game[1][1]="E_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'F':
        if(game[1][2]!="F_*" && game[1][2]!="F_#" && game[1][2]=="F__")
            game[1][2]="F_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'G':
        if(game[2][0]!="G_*" && game[2][0]!="G_#" && game[2][0]=="G__")
            game[2][0]="G_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'H':
        if(game[2][1]!="H_*" && game[2][1]!="H_#" && game[2][1]=="H__")
            game[2][1]="H_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    case 'I':
        if(game[2][2]!="I_*" && game[2][2]!="I_#" && game[2][2]=="I__")
            game[2][2]="I_*";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player1(game);
            }
        break;
    default:
        cout<<"player1 invalid input please select from the following "<<"\n";
        cout<<"#############################################################################################"<<"\n";
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<game[i][j]<<"    ";
        }

        cout<<"\n";
    }
        player1(game);
    }
}
int player2(string game[3][3])
{
    cout<<"player 2"<<"\n";
    cout<<"where you want to insert your # "<<"\n"<<"select from above alphabets"<<"\n";
    cout<<"#############################################################################################"<<"\n";
char op;
cin>>op;
switch(op)
    {
    case 'A':
        if(game[0][0]!="A_*" && game[0][0]!="A_#" && game[0][0]=="A__")
            game[0][0]="A_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'B':
        if(game[0][1]!="B_*" && game[0][1]!="B_#" && game[0][1]=="B__")
            game[0][1]="B_#";
       else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'C':
        if(game[0][2]!="C_*" && game[0][2]!="C_#" && game[0][2]=="C__")
            game[0][2]="C_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'D':
        if(game[1][0]!="D_*" && game[1][0]!="D_#" && game[1][0]=="D__")
            game[1][0]="D_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'E':
        if(game[1][1]!="E_*" && game[1][1]!="E_#" &&game[1][1]=="E__")
            game[1][1]="E_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'F':
        if(game[1][2]!="F_*" && game[1][2]!="F_#" && game[1][2]=="F__")
            game[1][2]="F_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'G':
        if(game[2][0]!="G_*" && game[2][0]!="G_#" && game[2][0]=="G__")
            game[2][0]="G_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'H':
        if(game[2][1]!="H_*" && game[2][1]!="H_#" && game[2][1]=="H__")
            game[2][1]="H_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    case 'I':
        if(game[2][2]!="I_*" && game[2][2]!="I_#" && game[2][2]=="I__")
            game[2][2]="I_#";
        else
            {
                cout<<"place already occupied try to insert in some other place"<<"\n";
                cout<<"#############################################################################################"<<"\n";
                player2(game);
            }
        break;
    default:
        cout<<"player2 invalid input please select from the following "<<"\n";
        cout<<"#############################################################################################"<<"\n";
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<game[i][j]<<"    ";
        }

        cout<<"\n";
    }
        player2(game);
    }
}
int check(string game[3][3],int flag)
{
if(game[0][0]=="A_*" && game[0][1]=="B_*" && game[0][2]=="C_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[0][0]=="A_*" && game[1][0]=="D_*" && game[2][0]=="G_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[0][0]=="A_*" && game[1][1]=="E_*" && game[2][2]=="I_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[0][1]=="B_*" && game[1][1]=="E_*" && game[2][1]=="H_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[0][2]=="C_*" && game[1][2]=="F_*" && game[2][2]=="I_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[1][0]=="D_*" && game[1][1]=="E_*" && game[1][2]=="F_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[2][0]=="G_*" && game[2][1]=="H_*" && game[2][2]=="I_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[2][0]=="G_*" && game[1][1]=="E_*" && game[0][2]=="C_*")
    {
    cout<<"player1 won"<<"\n";
    flag=1;
    }
if(game[0][0]=="A_#" && game[0][1]=="B_#" && game[0][2]=="C_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
if(game[0][0]=="A_#" && game[1][0]=="D_#" && game[2][0]=="G_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
if(game[0][0]=="A_#" && game[1][1]=="E_#" && game[2][2]=="I_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
if(game[0][1]=="B_#" && game[1][1]=="E_#" && game[2][1]=="H_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
if(game[0][2]=="C_#" && game[1][2]=="F_#" && game[2][2]=="I_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
if(game[1][0]=="D_#" && game[1][1]=="E_#" && game[1][2]=="F_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
if(game[2][0]=="G_#" && game[2][1]=="H_#" && game[2][2]=="I_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
if(game[2][0]=="G_#" && game[1][1]=="E_#" && game[0][2]=="C_#")
    {
    cout<<"player2 won"<<"\n";
    flag=1;
    }
return flag;
}
int display(string game[3][3])
{
    for(int i=0;i<3;i++)
    {
         cout<<"                                  ";
        for(int j=0;j<3;j++)
        {
            if(j!=2)
            cout<<game[i][j]<<"  ___";
            if(j==2)
                cout<<game[i][j];
        }
        cout<<"\n";
        if(i==0)
        {
        cout<<"                                  ";
        cout<<"|\\      |      /|";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"| \\     |     / |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|  \\    |    /  |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|   \\   |   /   |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|    \\  |  /    |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|     \\ | /     |";
        cout<<"\n";
        }
        if(i==1)
        {
        cout<<"                                  ";
        cout<<"|      /|\\      |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|     / | \\     |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|    /  |  \\    |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|   /   |   \\   |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|  /    |    \\  |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"| /     |     \\ |";
        cout<<"\n";
        }
        if(i==2)
            cout<<"\n";
    }
}
int movep1(string game[3][3])
{
    cout<<"player1 select any * to move"<<"\n";
    char opti;
    cin>>opti;
    switch(opti)
    {
    case 'A':
        {
        if(game[0][0]=="A_*")
        {
        int checks=0;
        if(game[0][1]=="B__")
        {
            cout<<"you can move your * from A to B"<<"\n";
            cout<<"select B to move"<<"\n";
            checks=1;
        }
        if(game[1][0]=="D__")
            {
            cout<<"you can move your * from A to D"<<"\n";
            cout<<"select D to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from A to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from A because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'B':
            if(game[0][1]=="B__")
            {
            cout<<"moving * from A to B"<<"\n";
            game[0][1]="B_*";
            game[0][0]="A__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from A to B because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'D':
            if(game[1][0]=="D__")
            {
            cout<<"moving * from A to D"<<"\n";
            game[1][0]="D_*";
            game[0][0]="A__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from A to D because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from A to E"<<"\n";
            game[1][1]="E_*";
            game[0][0]="A__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from A to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select A because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
    case 'B':
        {
        if(game[0][1]=="B_*")
        {
        int checks=0;
        if(game[0][0]=="A__")
        {
            cout<<"you can move your * from B to A"<<"\n";
            cout<<"select A to move"<<"\n";
            checks=1;
        }
        if(game[0][2]=="C__")
            {
            cout<<"you can move your * from B to C"<<"\n";
            cout<<"select C to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from B to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from B because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'A':
            if(game[0][0]=="A__")
            {
            cout<<"moving * from B to A"<<"\n";
            game[0][0]="A_*";
            game[0][1]="B__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from B to A because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'C':
            if(game[0][2]=="C__")
            {
            cout<<"moving * from B to C"<<"\n";
            game[0][2]="C_*";
            game[0][1]="B__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from B to C because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from B to E"<<"\n";
            game[1][1]="E_*";
            game[0][1]="B__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from B to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select B because you had not occupied it"<<"\n";
            movep1(game);
        }
         break;
        }
    case 'C':
        {
        if(game[0][2]=="C_*")
        {
        int checks=0;
        if(game[0][1]=="B__")
        {
            cout<<"you can move your * from C to B"<<"\n";
            cout<<"select B to move"<<"\n";
            checks=1;
        }
        if(game[1][2]=="F__")
            {
            cout<<"you can move your * from C to F"<<"\n";
            cout<<"select F to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from C to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from C because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'B':
            if(game[0][1]=="B__")
            {
            cout<<"moving * from C to B"<<"\n";
            game[0][1]="B_*";
            game[0][2]="C__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from C to B because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'F':
            if(game[1][2]=="F__")
            {
            cout<<"moving * from C to F"<<"\n";
            game[1][2]="F_*";
            game[0][2]="C__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from C to F because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from C to E"<<"\n";
            game[1][1]="E_*";
            game[0][2]="C__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from C to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select C because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
    case 'D':
        {
        if(game[1][0]=="D_*")
        {
        int checks=0;
        if(game[0][0]=="A__")
        {
            cout<<"you can move your * from D to A"<<"\n";
            cout<<"select A to move"<<"\n";
            checks=1;
        }
        if(game[2][0]=="G__")
            {
            cout<<"you can move your * from D to G"<<"\n";
            cout<<"select G to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from D to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from D because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'A':
            if(game[0][0]=="A__")
            {
            cout<<"moving * from D to A"<<"\n";
            game[0][0]="A_*";
            game[1][0]="D__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from D to A because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'G':
            if(game[2][0]=="G__")
            {
            cout<<"moving * from D to G"<<"\n";
            game[2][0]="G_*";
            game[1][0]="D__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from D to G because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from D to E"<<"\n";
            game[1][1]="E_*";
            game[1][0]="D__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from D to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select D because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
    case 'F':
        {
        if(game[1][2]=="F_*")
        {
        int checks=0;
        if(game[0][2]=="C__")
        {
            cout<<"you can move your * from F to C"<<"\n";
            cout<<"select C to move"<<"\n";
            checks=1;
        }
        if(game[2][2]=="I__")
            {
            cout<<"you can move your * from F to I"<<"\n";
            cout<<"select I to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from F to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from F because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'C':
            if(game[0][2]=="C__")
            {
            cout<<"moving * from F to C"<<"\n";
            game[0][2]="C_*";
            game[1][2]="F__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from F to C because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'I':
            if(game[2][2]=="I__")
            {
            cout<<"moving * from F to I"<<"\n";
            game[2][2]="I_*";
            game[1][2]="F__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from F to I because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from F to E"<<"\n";
            game[1][1]="E_*";
            game[1][2]="F__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from F to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select F because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
        case 'G':
        {
        if(game[2][0]=="G_*")
        {
        int checks=0;
        if(game[1][0]=="D__")
        {
            cout<<"you can move your * from G to D"<<"\n";
            cout<<"select D to move"<<"\n";
            checks=1;
        }
        if(game[2][1]=="H__")
            {
            cout<<"you can move your * from G to H"<<"\n";
            cout<<"select H to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from G to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from G because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'D':
            if(game[1][0]=="D__")
            {
            cout<<"moving * from G to D"<<"\n";
            game[1][0]="D_*";
            game[2][0]="G__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from G to D because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'H':
            if(game[2][1]=="H__")
            {
            cout<<"moving * from G to H"<<"\n";
            game[2][1]="H_*";
            game[2][0]="G__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from G to H because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from G to E"<<"\n";
            game[1][1]="E_*";
            game[2][0]="G__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from G to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
         }
        }
        else
        {
            cout<<"you cannot select G because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
        case 'H':
        {
        if(game[2][1]=="H_*")
        {
        int checks=0;
        if(game[2][0]=="G__")
        {
            cout<<"you can move your * from H to G"<<"\n";
            cout<<"select G to move"<<"\n";
            checks=1;
        }
        if(game[2][2]=="I__")
            {
            cout<<"you can move your * from H to I"<<"\n";
            cout<<"select I to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from H to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from H because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'G':
            if(game[2][0]=="G__")
            {
            cout<<"moving * from H to G"<<"\n";
            game[2][0]="G_*";
            game[2][1]="H__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from H to G because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'I':
            if(game[2][2]=="I__")
            {
            cout<<"moving * from H to I"<<"\n";
            game[2][2]="I_*";
            game[2][1]="H__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from H to I because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from H to E"<<"\n";
            game[1][1]="E_*";
            game[2][1]="H__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from H to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select H because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
    case 'I':
        {
        if(game[2][2]=="I_*")
        {
        int checks=0;
        if(game[2][1]=="H__")
        {
            cout<<"you can move your * from I to H"<<"\n";
            cout<<"select H to move"<<"\n";
            checks=1;
        }
        if(game[1][2]=="F__")
            {
            cout<<"you can move your * from I to F"<<"\n";
            cout<<"select F to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your * from I to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from I because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'H':
            if(game[2][1]=="H__")
            {
            cout<<"moving * from I to H"<<"\n";
            game[2][1]="H_*";
            game[2][2]="I__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from I to H because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'F':
            if(game[1][2]=="F__")
            {
            cout<<"moving * from I to F"<<"\n";
            game[1][2]="F_*";
            game[2][2]="I__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from I to F because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving * from I to E"<<"\n";
            game[1][1]="E_*";
            game[2][2]="I__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from I to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select I because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
    case 'E':
        {
        if(game[1][1]=="E_*")
        {
        int checks=0;
        if(game[0][0]=="A__")
        {
            cout<<"you can move your * from E to A"<<"\n";
            cout<<"select A to move"<<"\n";
            checks=1;
        }
        if(game[0][1]=="B__")
        {
            cout<<"you can move your * from E to B"<<"\n";
            cout<<"select B to move"<<"\n";
            checks=1;
        }
        if(game[0][2]=="C__")
        {
            cout<<"you can move your * from E to C"<<"\n";
            cout<<"select C to move"<<"\n";
            checks=1;
        }
        if(game[1][0]=="D__")
            {
            cout<<"you can move your * from E to D"<<"\n";
            cout<<"select D to move"<<"\n";
            checks=1;
        }
        if(game[1][2]=="F__")
        {
            cout<<"you can move your * from E to F"<<"\n";
            cout<<"select F to move"<<"\n";
            checks=1;
        }
        if(game[2][0]=="G__")
        {
            cout<<"you can move your * from E to G"<<"\n";
            cout<<"select G to move"<<"\n";
            checks=1;
        }
        if(game[2][1]=="H__")
        {
            cout<<"you can move your * from E to H"<<"\n";
            cout<<"select H to move"<<"\n";
            checks=1;
        }
        if(game[2][2]=="I__")
        {
            cout<<"you can move your * from E to I"<<"\n";
            cout<<"select I to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move * from E because all places to move are already occupied"<<"\n";
            cout<<"try to move some other * "<<"\n";
            movep1(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'A':
            if(game[0][0]=="A__")
            {
            cout<<"moving * from E to A"<<"\n";
            game[0][0]="A_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to A because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'B':
            if(game[0][1]=="B__")
            {
            cout<<"moving * from E to B"<<"\n";
            game[0][1]="B_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to B because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'C':
            if(game[0][2]=="C__")
            {
            cout<<"moving * from E to C"<<"\n";
            game[0][2]="C_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to C because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'D':
            if(game[1][0]=="D__")
            {
            cout<<"moving * from E to D"<<"\n";
            game[1][0]="D_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to D because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'F':
            if(game[1][2]=="F__")
            {
            cout<<"moving * from E to F"<<"\n";
            game[1][2]="F_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to F because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'G':
            if(game[2][0]=="G__")
            {
            cout<<"moving * from E to G"<<"\n";
            game[2][0]="G_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to G because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'H':
            if(game[2][1]=="H__")
            {
            cout<<"moving * from E to H"<<"\n";
            game[2][1]="H_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to H because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        case 'I':
            if(game[2][2]=="I__")
            {
            cout<<"moving * from E to I"<<"\n";
            game[2][2]="I_*";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move * from E to I because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep1(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select E because you had not occupied it"<<"\n";
            movep1(game);
        }
        break;
        }
    }
}int movep2(string game[3][3])
{
    cout<<"player2 select any # to move"<<"\n";
    char opti;
    cin>>opti;
    switch(opti)
    {
    case 'A':
        {
        if(game[0][0]=="A_#")
        {
        int checks=0;
        if(game[0][1]=="B__")
        {
            cout<<"you can move your # from A to B"<<"\n";
            cout<<"select B to move"<<"\n";
            checks=1;
        }
        if(game[1][0]=="D__")
            {
            cout<<"you can move your # from A to D"<<"\n";
            cout<<"select D to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from A to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from A because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'B':
            if(game[0][1]=="B__")
            {
            cout<<"moving # from A to B"<<"\n";
            game[0][1]="B_#";
            game[0][0]="A__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from A to B because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'D':
            if(game[1][0]=="D__")
            {
            cout<<"moving # from A to D"<<"\n";
            game[1][0]="D_#";
            game[0][0]="A__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from A to D because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from A to E"<<"\n";
            game[1][1]="E_#";
            game[0][0]="A__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from A to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select A because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
    case 'B':
        {
        if(game[0][1]=="B_#")
        {
        int checks=0;
        if(game[0][0]=="A__")
        {
            cout<<"you can move your # from B to A"<<"\n";
            cout<<"select A to move"<<"\n";
            checks=1;
        }
        if(game[0][2]=="C__")
            {
            cout<<"you can move your # from B to C"<<"\n";
            cout<<"select C to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from B to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from B because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'A':
            if(game[0][0]=="A__")
            {
            cout<<"moving # from B to A"<<"\n";
            game[0][0]="A_#";
            game[0][1]="B__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from B to A because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'C':
            if(game[0][2]=="C__")
            {
            cout<<"moving # from B to C"<<"\n";
            game[0][2]="C_#";
            game[0][1]="B__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from B to C because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from B to E"<<"\n";
            game[1][1]="E_#";
            game[0][1]="B__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from B to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select B because you had not occupied it"<<"\n";
            movep2(game);
        }
         break;
        }
    case 'C':
        {
        if(game[0][2]=="C_#")
        {
        int checks=0;
        if(game[0][1]=="B__")
        {
            cout<<"you can move your # from C to B"<<"\n";
            cout<<"select B to move"<<"\n";
            checks=1;
        }
        if(game[1][2]=="F__")
            {
            cout<<"you can move your # from C to F"<<"\n";
            cout<<"select F to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from C to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from C because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'B':
            if(game[0][1]=="B__")
            {
            cout<<"moving # from C to B"<<"\n";
            game[0][1]="B_#";
            game[0][2]="C__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from C to B because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'F':
            if(game[1][2]=="F__")
            {
            cout<<"moving # from C to F"<<"\n";
            game[1][2]="F_#";
            game[0][2]="C__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from C to F because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from C to E"<<"\n";
            game[1][1]="E_#";
            game[0][2]="C__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from C to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select C because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
    case 'D':
        {
        if(game[1][0]=="D_#")
        {
        int checks=0;
        if(game[0][0]=="A__")
        {
            cout<<"you can move your # from D to A"<<"\n";
            cout<<"select A to move"<<"\n";
            checks=1;
        }
        if(game[2][0]=="G__")
            {
            cout<<"you can move your # from D to G"<<"\n";
            cout<<"select G to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from D to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from D because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'A':
            if(game[0][0]=="A__")
            {
            cout<<"moving # from D to A"<<"\n";
            game[0][0]="A_#";
            game[1][0]="D__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from D to A because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'G':
            if(game[2][0]=="G__")
            {
            cout<<"moving # from D to G"<<"\n";
            game[2][0]="G_#";
            game[1][0]="D__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from D to G because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from D to E"<<"\n";
            game[1][1]="E_#";
            game[1][0]="D__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from D to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select D because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
    case 'F':
        {
        if(game[1][2]=="F_#")
        {
        int checks=0;
        if(game[0][2]=="C__")
        {
            cout<<"you can move your # from F to C"<<"\n";
            cout<<"select C to move"<<"\n";
            checks=1;
        }
        if(game[2][2]=="I__")
            {
            cout<<"you can move your # from F to I"<<"\n";
            cout<<"select I to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from F to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from F because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'C':
            if(game[0][2]=="C__")
            {
            cout<<"moving # from F to C"<<"\n";
            game[0][2]="C_#";
            game[1][2]="F__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from F to C because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'I':
            if(game[2][2]=="I__")
            {
            cout<<"moving # from F to I"<<"\n";
            game[2][2]="I_#";
            game[1][2]="F__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from F to I because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from F to E"<<"\n";
            game[1][1]="E_#";
            game[1][2]="F__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from F to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select F because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
        case 'G':
        {
        if(game[2][0]=="G_#")
        {
        int checks=0;
        if(game[1][0]=="D__")
        {
            cout<<"you can move your # from G to D"<<"\n";
            cout<<"select D to move"<<"\n";
            checks=1;
        }
        if(game[2][1]=="H__")
            {
            cout<<"you can move your # from G to H"<<"\n";
            cout<<"select H to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from G to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from G because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'D':
            if(game[1][0]=="D__")
            {
            cout<<"moving # from G to D"<<"\n";
            game[1][0]="D_#";
            game[2][0]="G__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from G to D because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'H':
            if(game[2][1]=="H__")
            {
            cout<<"moving # from G to H"<<"\n";
            game[2][1]="H_#";
            game[2][0]="G__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from G to H because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from G to E"<<"\n";
            game[1][1]="E_#";
            game[2][0]="G__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from G to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
         }
        }
        else
        {
            cout<<"you cannot select G because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
        case 'H':
        {
        if(game[2][1]=="H_#")
        {
        int checks=0;
        if(game[2][0]=="G__")
        {
            cout<<"you can move your # from H to G"<<"\n";
            cout<<"select G to move"<<"\n";
            checks=1;
        }
        if(game[2][2]=="I__")
            {
            cout<<"you can move your # from H to I"<<"\n";
            cout<<"select I to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from H to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from H because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'G':
            if(game[2][0]=="G__")
            {
            cout<<"moving # from H to G"<<"\n";
            game[2][0]="G_#";
            game[2][1]="H__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from H to G because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'I':
            if(game[2][2]=="I__")
            {
            cout<<"moving # from H to I"<<"\n";
            game[2][2]="I_#";
            game[2][1]="H__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from H to I because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from H to E"<<"\n";
            game[1][1]="E_#";
            game[2][1]="H__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from H to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select H because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
    case 'I':
        {
        if(game[2][2]=="I_#")
        {
        int checks=0;
        if(game[2][1]=="H__")
        {
            cout<<"you can move your # from I to H"<<"\n";
            cout<<"select H to move"<<"\n";
            checks=1;
        }
        if(game[1][2]=="F__")
            {
            cout<<"you can move your # from I to F"<<"\n";
            cout<<"select F to move"<<"\n";
            checks=1;
        }
        if(game[1][1]=="E__")
            {
            cout<<"you can move your # from I to E"<<"\n";
            cout<<"select E to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from I because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'H':
            if(game[2][1]=="H__")
            {
            cout<<"moving # from I to H"<<"\n";
            game[2][1]="H_#";
            game[2][2]="I__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from I to H because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'F':
            if(game[1][2]=="F__")
            {
            cout<<"moving # from I to F"<<"\n";
            game[1][2]="F_#";
            game[2][2]="I__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from I to F because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'E':
            if(game[1][1]=="E__")
            {
            cout<<"moving # from I to E"<<"\n";
            game[1][1]="E_#";
            game[2][2]="I__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from I to E because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select I because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
    case 'E':
        {
        if(game[1][1]=="E_#")
        {
        int checks=0;
        if(game[0][0]=="A__")
        {
            cout<<"you can move your # from E to A"<<"\n";
            cout<<"select A to move"<<"\n";
            checks=1;
        }
        if(game[0][1]=="B__")
        {
            cout<<"you can move your # from E to B"<<"\n";
            cout<<"select B to move"<<"\n";
            checks=1;
        }
        if(game[0][2]=="C__")
        {
            cout<<"you can move your # from E to C"<<"\n";
            cout<<"select C to move"<<"\n";
            checks=1;
        }
        if(game[1][0]=="D__")
            {
            cout<<"you can move your # from E to D"<<"\n";
            cout<<"select D to move"<<"\n";
            checks=1;
        }
        if(game[1][2]=="F__")
        {
            cout<<"you can move your # from E to F"<<"\n";
            cout<<"select F to move"<<"\n";
            checks=1;
        }
        if(game[2][0]=="G__")
        {
            cout<<"you can move your # from E to G"<<"\n";
            cout<<"select G to move"<<"\n";
            checks=1;
        }
        if(game[2][1]=="H__")
        {
            cout<<"you can move your # from E to H"<<"\n";
            cout<<"select H to move"<<"\n";
            checks=1;
        }
        if(game[2][2]=="I__")
        {
            cout<<"you can move your # from E to I"<<"\n";
            cout<<"select I to move"<<"\n";
            checks=1;
        }
        if(checks==0)
        {
            cout<<"you cannot move # from E because all places to move are already occupied"<<"\n";
            cout<<"try to move some other # "<<"\n";
            movep2(game);
        }
        if(checks==1)
        {
        char opt;
        cin>>opt;
        switch(opt)
        {
        case 'A':
            if(game[0][0]=="A__")
            {
            cout<<"moving # from E to A"<<"\n";
            game[0][0]="A_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to A because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'B':
            if(game[0][1]=="B__")
            {
            cout<<"moving # from E to B"<<"\n";
            game[0][1]="B_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to B because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'C':
            if(game[0][2]=="C__")
            {
            cout<<"moving # from E to C"<<"\n";
            game[0][2]="C_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to C because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'D':
            if(game[1][0]=="D__")
            {
            cout<<"moving # from E to D"<<"\n";
            game[1][0]="D_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to D because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'F':
            if(game[1][2]=="F__")
            {
            cout<<"moving # from E to F"<<"\n";
            game[1][2]="F_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to F because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'G':
            if(game[2][0]=="G__")
            {
            cout<<"moving # from E to G"<<"\n";
            game[2][0]="G_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to G because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'H':
            if(game[2][1]=="H__")
            {
            cout<<"moving # from E to H"<<"\n";
            game[2][1]="H_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to H because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        case 'I':
            if(game[2][2]=="I__")
            {
            cout<<"moving # from E to I"<<"\n";
            game[2][2]="I_#";
            game[1][1]="E__";
            display(game);
            }
            else
            {
                cout<<"you cannot move # from E to I because it is already occupied"<<"\n";
                cout<<"please select option again";
                movep2(game);
            }
            break;
        }
        }
        }
        else
        {
            cout<<"you cannot select E because you had not occupied it"<<"\n";
            movep2(game);
        }
        break;
        }
    }
}
int main()
{
    cout<<"                         Welcome to Bare game "<<"\n";
    cout<<" Rules :"<<"\n";
    cout<<" You can win this game if you can make all your * or all your # in a line or in a diagonal "<<"\n";
    cout<<" This is a two player game"<<"\n";
    string game[3][3];
    char init='A';
    int flag=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            string s="__";
            game[i][j]=init+s;
            init++;
        }
    }
cout<<"#############################################################################################"<<"\n";
    for(int i=0;i<3;i++)
    {
         cout<<"                                  ";
        for(int j=0;j<3;j++)
        {
            if(j!=2)
            cout<<game[i][j]<<"  ___";
            if(j==2)
                cout<<game[i][j];
        }
        cout<<"\n";
        if(i==0)
        {
        cout<<"                                  ";
        cout<<"|\\      |      /|";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"| \\     |     / |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|  \\    |    /  |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|   \\   |   /   |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|    \\  |  /    |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|     \\ | /     |";
        cout<<"\n";
        }
        if(i==1)
        {
        cout<<"                                  ";
        cout<<"|      /|\\      |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|     / | \\     |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|    /  |  \\    |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|   /   |   \\   |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"|  /    |    \\  |";
        cout<<"\n";
        cout<<"                                  ";
        cout<<"| /     |     \\ |";
        cout<<"\n";
        }
        if(i==2)
            cout<<"\n";
    }
    cout<<"#############################################################################################"<<"\n";
    player1(game);
    display(game);
    cout<<"#############################################################################################"<<"\n";
    player2(game);
    display(game);
    cout<<"#############################################################################################"<<"\n";
    player1(game);
    display(game);
    cout<<"#############################################################################################"<<"\n";
    player2(game);
    display(game);
    cout<<"#############################################################################################"<<"\n";
    player1(game);
    display(game);
    cout<<"#############################################################################################"<<"\n";
    flag=check(game,flag);
    if(flag==0)
    {
        player2(game);
        display(game);
        cout<<"#############################################################################################"<<"\n";
        check(game,flag);
    }
    if(flag==1)
        cout<<"                game over                                  ";
    flag=check(game,flag);
    while(flag==0)
    {
        movep1(game);
        flag=check(game,flag);
        if(flag==0)
            movep2(game);
        flag=check(game,flag);
    }
}

