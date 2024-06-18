#include<iostream>
#include<ctime>
#include<random>
using namespace std;
char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
void show_board();
void get_x_player_choice();
void get_o_player_choice();
//void get_x_player_choice();
void get_computer_choice();
int count_board(char symbol);
char check_winner();
void computer_vs_player();
void player_vs_player();

int main(){
    cout<<"TICK CROSS GAME"<<endl;
   
    int mode;
    cout<<"1.computer vs player \n2.Player vs player \nSelect the Game mode"<<endl;
    cin>>mode;
    switch(mode){
    case 1: 
    computer_vs_player();
    break;
    case 2:
    player_vs_player();
    break;
    default:
    cout<<"Please select valid game mode"<<endl;
    break;
    }

    
   return 0;

}

void computer_vs_player(){
    string player_name;
    cout<<"Enter your name: "<<endl;
    cin>>player_name;
    show_board();
    while(true){
        system("cls");
        show_board();
        if(count_board('x')==count_board('o')){
            cout<<player_name<<"'s turn"<<endl;
            get_x_player_choice();
            show_board();
        } else{
            get_computer_choice();
            show_board();

        }
        char winner= check_winner();
        if(winner=='x'){
            system("cls");
            show_board();
            cout<<player_name<< " Won the Game."<<endl;
            break;
        } else if(winner=='o'){
            system("cls");
            show_board();
            cout<<"Computer Won The Game."<<endl;
            break;
        } else if(winner=='D'){
            cout<<"Game is Draw."<<endl;
            break;
        }
    }
}
void player_vs_player(){
    string  x_player_name,o_player_name;
    cout<<"Enter x player name: "<<endl;
    cin>>x_player_name;
    cout<<"Enter o player name: "<<endl;
    cin>>o_player_name;
     while(true){
        system("cls");
        show_board();
        if(count_board('x')==count_board('o')){
            cout<<x_player_name<<"'s turn"<<endl;
            get_x_player_choice();
            show_board();
        } else{
            cout<<o_player_name<<"'s turn"<<endl;
            get_o_player_choice();
            show_board();

        }
        char winner= check_winner();
        if(winner=='x'){
            system("cls");
            show_board();
            cout<<x_player_name<<" won the game."<<endl;
            break;

        } else if(winner=='o'){
            system("cls");
            show_board();
            cout<<o_player_name<<" won the game."<<endl;
            break;
        } else if(winner=='D'){
            cout<<"game is draw."<<endl;
            break;
        } 
        }
    

}

void get_computer_choice(){
    srand(time(0));
    int choice;
    do{
        choice=rand()%10;

    } while(board[choice]!=' ');
        board[choice]='o';
    }


void get_x_player_choice(){
    while(true){
        cout<<"Select your position from (1-9): ";
        int choice;
        cin>>choice;
        choice--;
        if(choice<0 || choice>8){
            cout<<"Please select your choice from 1 to 9"<<endl;
        } else if(board[choice] !=' '){
            cout<<"please select empty position"<<endl;
        }else{
            board[choice]='x';
            break;
        }
    }
}
void get_o_player_choice(){
    while(true){
        cout<<"Select your position from (1-9): ";
        int choice;
        cin>>choice;
        choice--;
        if(choice<0 || choice>8){
            cout<<"Please select your choice from 1 to 9"<<endl;
        } else if(board[choice] !=' '){
            cout<<"please select empty position"<<endl;
        }else{
            board[choice]='o';
            break;
        }
    }
}
int count_board(char symbol){
    int total=0;
    for(int i=0;i<9;i++){
        if(board[i]==symbol){
            total+=1;
        }
    }
    return total;
}
char check_winner(){
    if(board[0]==board[1] && board[1]==board[2] && board[0]!=' '){
        return board[0];
    }
        if(board[3]==board[4] && board[4]==board[5] && board[3]!=' '){
        return board[3];
        }
        if(board[6]==board[7] && board[7]==board[8] && board[6]!=' '){
        return board[6];
        }
        //verical or column
        if(board[0]==board[3] && board[3]==board[6] && board[0]!=' ' ){
            return board[0];
        }
        if(board[1]==board[4] && board[4]==board[7] && board[1]!=' ' ){
            return board[1];
        }
        if(board[2]==board[5] && board[5]==board[7] && board[2]!=' ' ){
            return board[2];
        }
        //checking diagonal
        if(board[0]==board[4] && board[4]==board[8] && board[0]!=' ' ){
            return board[2];
        }
        if(board[2]==board[4] && board[4]==board[6] && board[2]!=' ' ){
            return board[2];
        }
        if(count_board('x')+count_board('o')<9){
            return 'C';
        } else{
            return 'D';
        }
        
    }
      
void show_board(){
    cout<<"   "<<"   |   "<<"    |   "<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"   "<<board[0]<<"  |   "<<board[1]<<"   |   "<<board[2]<<endl;
     cout<<"------------------------"<<endl;
     cout<<"   "<<board[3]<<"  |   "<<board[4]<<"   |   "<<board[5]<<endl;
     cout<<"------------------------"<<endl;
     cout<<"   "<<board[6]<<"  |   "<<board[7]<<"   |   "<<board[8]<<endl;
}
