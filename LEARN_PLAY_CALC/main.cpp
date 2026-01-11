#include <iostream>
#include<fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct User_information{
   char name[20];
   int age;

};
void Calculator(){
     system("cls");
    int n,result;
    char op;
cout<<"Select operation u want to perform '+' , '-', '*','/' : "<<endl;
cin>>op;
cout<<"\n Enter number of terms : "<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
        cout<<"Enter term "<<i+1<<": "<<endl;
cin>>a[i];

}
 result = a[0];

for(int j=1;j<n;j++){

     switch(op){

    case '+':
                result+=a[j];

                break;
                   case '-':

              result=result - a[j];

                break;
                   case '*':
                       result*=a[j];

                       break;
                  case '/':
                      if(a[j]==0)
                      cout<<"Division by zero is not possible "<<endl;
                      result/=a[j];

                       break;
                  default:
                    cout<<"invalid operater :"<<endl;
}}

     switch(op){

    case '+':
cout<<"\n "<<" Sum result= "<<result<<endl;

                break;
                   case '-':

                cout<<"\n "<<"Subtraction result ="<<result<<endl;
                break;
                   case '*':

                       cout<<"\n "<<"product result="<<result;
                       break;
                  case '/':

                       cout<<"\n "<<"Diviision result ="<<result;
                       break;
                  default:
                    cout<<"invalid operater :"<<endl;
}

}
void learn(){
    system("cls");
    ifstream FILE("quranverses.txt");
    string line;
string day;
cout<<" Please enter today day \n 'M' for Monday \n 'T' for Tuesday \n 'W' for  Wednesday \n 'Th' for Thursday \n 'F' for Friday \n 'S' for Saturday  \n 'Su' for Sunday and i will teach you verse of the day ; "<<endl;
cin>>day;
int tl;
if (day == "M" || day == "m") tl = 1;
    else if (day == "T" || day == "t") tl = 2;
    else if (day == "W" || day == "w") tl = 3;
    else if (day == "Th" || day == "th") tl = 4;
    else if (day == "F" || day == "f") tl = 5;
    else if (day == "S" || day == "s") tl = 6;
    else if (day == "Su" || day == "su") tl = 7;
    else {
        cout << "Invalid day entered\n";
        return;
    }
int cl=1;
while(getline(FILE,line)){
    if (cl==tl){
        cout<<line;
        break;
    }
    cl++;
}

}
#include <iostream>
using namespace std;

#include <iostream>
#include <conio.h> // For getch()
using namespace std;

void rps_game() {
    system("cls");
    char u1[20], u2[20];
    int user1_move = 0, user2_move = 0;
    int user1score = 0, user2score = 0;

    cin.ignore(); // Clear buffer
    cout << "Enter player 1 name: ";
    cin.getline(u1, 20);
    cout << "Enter player 2 name: ";
    cin.getline(u2, 20);

    cout << "Welcome " << u1 << " and " << u2 << " to Rock Paper Scissors!\n";

    for (int i = 0; i < 5; i++) {

        cout << "\n" << u1 << ", make your move (1=Rock, 2=Scissors, 3=Paper): ";
        user1_move = _getch() - '0';
        cout << "*";


        cout << "\n" << u2 << ", make your move (1=Rock, 2=Scissors, 3=Paper): ";
        cin >> user2_move;


        if ((user1_move == 1 && user2_move == 2) ||
            (user1_move == 2 && user2_move == 3) ||
            (user1_move == 3 && user2_move == 1)) {
            cout << u1 << " wins this round!\n";
            user1score++;
        } else if ((user2_move == 1 && user1_move == 2) ||
                   (user2_move == 2 && user1_move == 3) ||
                   (user2_move == 3 && user1_move == 1)) {
            cout << u2 << " wins this round!\n";
            user2score++;
        } else if (user1_move == user2_move) {
            cout << "Tie!\n";
        } else {
            cout << "Invalid move!\n";
        }
    }


    cout << "\nFinal Score: " << u1 << " = " << user1score << ", " << u2 << " = " << user2score << "\n";
    if (user1score > user2score)
        cout << "Congratulations " << u1 << ", you win!\n";
    else if (user2score > user1score)
        cout << "Congratulations " << u2 << ", you win!\n";
    else
        cout << "It's a tie!\n";
}
void Tic_tac_toe() {
    system("cls");
    char board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    char player = 'X';
    int ch;

    while (true) {

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j];
                if (j < 2) cout << " | ";
            }
            cout << endl;
            if (i < 2) cout << "--|---|--\n";
        }

        cout << "\nPlayer " << player << ": ";
        cin >> ch;

        int r = (ch - 1) / 3;
        int c = (ch - 1) % 3;

        if (ch < 1 || ch > 9 ||
            board[r][c] == 'X' ||
            board[r][c] == 'O') {
            continue;
        }

        board[r][c] = player;

        bool win = false;

        for (int i = 0; i < 3; i++) {
            if (board[i][0] == player &&
                board[i][1] == player &&
                board[i][2] == player)
                win = true;

            if (board[0][i] == player &&
                board[1][i] == player &&
                board[2][i] == player)
                win = true;
        }

        if (board[0][0] == player &&
            board[1][1] == player &&
            board[2][2] == player)
            win = true;

        if (board[0][2] == player &&
            board[1][1] == player &&
            board[2][0] == player)
            win = true;

        if (win) {
            cout << "\nPlayer " << player << " wins\n";
            break;
        }

        bool draw = true;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] != 'X' && board[i][j] != 'O')
                    draw = false;

        if (draw) {
            cout << "\nDraw\n";
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }
}string shuffleWord(string word) {
    int n = word.length();
    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    return word;
}
bool wpg(string word, int maxAttempts) {
    string scrambled = shuffleWord(word);
    string guess;
    int attempts = maxAttempts;

    cout << "\nGuess the word: " << scrambled << endl;

    while (attempts > 0) {
        cout << "Your guess: ";
        cin >> guess;

        if (guess == word) {
            cout << "Correct! Word was: " << word << endl;
            return true;
        } else {
            attempts--;
            cout << "Wrong! Attempts left: " << attempts << endl;
        }
    }

    cout << "Level failed. Correct word: " << word << endl;
    return false;
}
void WordPuzzleGame() {
    system("cls");
    srand(time(0));

    string words[5] = {
        "cat",
        "dog",
        "computer",
        "webflow",
        "programming"
    };

    int attempts[5] = {3, 3, 4, 5, 6};

    cout << "=== WORD PUZZLE GAME (5 LEVELS) ===\n";

    for (int i = 0; i < 5; i++) {
        cout << "\n--- Level " << i + 1 << " ---\n";

        if (!wpg(words[i], attempts[i])) {
            cout << "\nGame Over at Level " << i + 1 << endl;
            return;
        }
    }

    cout << "\nCongratulations! You completed all 5 levels!\n";
}

void Play(){
    system("cls");
char g;
cout<<"\n u can play 3 games on this application: "<<endl;
cout<<"Which Game do u want to play now choose: \n 'R' to play rock paper scissor game \n 'T' to play  tic tac toe game \n 'W' to play word puzzle game "<<endl;
cin>>g;
switch(g){
case 'r':
case 'R':
    rps_game();
    break;
case 't':
case 'T':
Tic_tac_toe();
break;
case 'w':
case 'W':
    WordPuzzleGame();
    break;
    default:
        cout<<"\n invalid choice please try again"<<endl;
}
}



int main()
{
char choice,c;



User_information ui;
cout<<"Welcome to '3 in 1' learn play calc application  "<<endl;
cout<<"   So to start and use this application please enter your \n Name: "<<endl;
cin.getline(ui.name,20);
cout<<"\n age: "<<endl;
cin>>ui.age;
ofstream file("userinfo.txt");
if(file.is_open()){
    file<<ui.name<<endl;
    file<<ui.age;
file.close();
}
cout<<" "<< ui.name<<" This is basically a 3 in 1 application it has following features \n 1.It teaches u Quran verses translation on  bases of day \n 2. U can play games \n 3.u can use calculater "<<endl;

do{
        system("cls");
cout<<" \n What do u want to do now choose : \n L TO Learn quran verse translation  of day :  \n P To Play games : \n C To  use Calculator : "<<endl;
cin>>c;
switch(c){
    case 'l':
case 'L':
    learn();
break;
case 'c':
case 'C':
    Calculator();
    break;
case 'p':
case 'P':
    Play();
    break;
default:
    cout<<"\n invalid choice "<<endl;
}
cout<<"\n Do u want to use my application again 'Y' or 'N' : "<<endl;
cin>>choice;
}while (choice=='y' || choice=='Y');
cout<<"Thank You for using my application "<<endl;

    return 0;}

