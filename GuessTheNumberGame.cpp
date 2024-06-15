#include<iostream>
#include<cstdlib>// stdlib.h
#include<ctime>// time.h
using namespace std;
// int random =offset+rand()%range 
int main(){
    srand(time(0));
    int random=1+ (rand()%100);
    cout<<"\n\t\t\tWelcome to guess number game"<<endl;
    while(true){
        cout<<"\n Enter the difficulty level: \n";
        cout<<"1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game\t"<<endl;
        int difficultyChoice;
        cout<<"Enter the Number: ";
        cin>>difficultyChoice;

        srand(time(0));
        int random=1+ (rand()%100);
        int playerChoice;
        if(difficultyChoice==1){
            cout<<"\nYou have only 10 choices for finding the secret number bw 1 and 100.";
            int choicesleft=10;
            for(int i=1;i<10;i++){
                cout<<"\n enter the number: ";
                cin>>playerChoice;
                if(playerChoice==random){
                    cout<<"wooho!! You won "<<playerChoice<<" is the secret number"<<endl;
                    cout<<"Thanks for playing"<<endl;
                    cout<<"You can play again :)"<<endl;
                    break;
                } else if(playerChoice>random){
                    cout<<"Your number "<<playerChoice<<" which is higher than random"<<endl;
                } else if(playerChoice<random){
                     cout<<"Your number "<<playerChoice<<" which is lesser than random"<<endl;
                }
                choicesleft--;
                cout<< choicesleft<< " choice left"<<endl;
                if(choicesleft==0){
                    cout<<"You couldn't find the seceret number, the seceret number is "<<random<<" You Lose!!"<<endl;
                    cout<<"Play another game to win!! \n\n";
                }
            }

        } else if(difficultyChoice==2){
             cout<<"\nYou have only 7 choices for finding the secret number bw 1 and 100.";
            int choicesleft=7;
            for(int i=1;i<7;i++){
                cout<<"\n enter the number: ";
                cin>>playerChoice;
                if(playerChoice==random){
                    cout<<"wooho!! You won "<<playerChoice<<" is the secret number"<<endl;
                    cout<<"Thanks for playing"<<endl;
                    cout<<"You can play again :)"<<endl;
                    break;
                } else if(playerChoice>random){
                    cout<<"Your number "<<playerChoice<<" which is higher than random"<<endl;
                } else if(playerChoice<random){
                     cout<<"Your number "<<playerChoice<<" which is lesser than random"<<endl;
                }
                choicesleft--;
                cout<< choicesleft<< " choice left"<<endl;
                if(choicesleft==0){
                    cout<<"You couldn't find the seceret number, the seceret number is "<<random<<" You Lose!!"<<endl;
                    cout<<"Play another game to win!! \n\n";
                }
            }

        } else if(difficultyChoice==3){
             cout<<"\nYou have only 3 choices for finding the secret number bw 1 and 100.";
            int choicesleft=3;
            for(int i=1;i<10;i++){
                cout<<"\n enter the number: ";
                cin>>playerChoice;
                if(playerChoice==random){
                    cout<<"wooho!! You won "<<playerChoice<<" is the secret number"<<endl;
                    cout<<"Thanks for playing"<<endl;
                    cout<<"You can play again :)"<<endl;
                    break;
                } else if(playerChoice>random){
                    cout<<"Your number "<<playerChoice<<" is higher than random"<<endl;
                } else if(playerChoice<random){
                     cout<<"Your number "<<playerChoice<<" is lesser than random"<<endl;
                }
                choicesleft--;
                cout<< choicesleft<< " choice left"<<endl;
                if(choicesleft==0){
                    cout<<"You couldn't find the seceret number, the seceret number is "<<random<<" You Lose!!"<<endl;
                    cout<<"Play another game to win!! \n\n";
                }
            }

        } else if(difficultyChoice==0){
            exit(0);


        } else{
            cout<<"Invalid choice, choose bw 1, 2 and 3 to play the game"<<endl;
        }

    }
    return 0;
}