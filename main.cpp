#include<iostream>

void print_grid(char grid[][3]);
char Win(char grid[][3]);
void print_rules();
void turn(char& player);
void gamePlay(char grid[][3],char& player);

int main(){

    char grid[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char player = 'X';
    int count = 0;


    print_grid(grid);
    print_rules();
    while(1){

        print_grid(grid);
        if(Win(grid) == 'X'){
            std::cout<<"X wins!"<<std::endl;
            break;
        }
        else if(Win(grid) == 'O'){
            std::cout<<"O wins!"<<std::endl;
            break;
        }
        turn(player);
    }

    return 0;
}

void print_grid(char grid[][3]) {
    for(int i = 0; i < 3; i++){
        std::cout<<std::endl;
        for(int j = 0; j < 3; j++){
            std::cout<< grid[i][j]<<" ";
        }
    }
}

void print_rules(){
    std::cout<<"Rules: Player One = X, Player Two = O" << std::endl;
    std::cout<<"Whichever player is able to get 3 marks in a row: up,down,left,right or diagnally wins.  If not it's a tie."<<std::endl;
}

void turn(char& player){
    if(player == 'X')
        player = 'O';
    else
        player = 'X';
}

char Win(char grid[][3]){
    //player X
    //row
    if(grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X')
        return 'X';
    if(grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X')
        return 'X';
    if(grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X')
        return 'X';
    //column
    if(grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X')
        return 'X';
    if(grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X')
        return 'X';
    if(grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X')
        return 'X';
    //diagnally
    if(grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
        return 'X';
    if(grid[2][0] == 'X' && grid[1][1] == 'X' && grid[0][2] == 'X')
        return 'X';
//player O

if(grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O')
        return 'O';
    if(grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O')
        return 'O';
    if(grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O')
        return 'O';
    //column
    if(grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O')
        return 'O';
    if(grid[0][1] == 'X' && grid[1][1] == 'O' && grid[2][1] == 'O')
        return 'O';
    if(grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O')
        return 'O';
    //diagnally
    if(grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
        return 'O';
    if(grid[2][0] == 'O' && grid[1][1] == 'O' && grid[0][2] == 'O')
        return 'O';

    
}

void gamePlay(char grid[][3],char& player){

    int answer;
    std::cout<<"Enter number of the grid";
    std::cin>>answer;

    if(answer == 1)
        grid[0][0] = player;
    else if(answer == 2)
        grid[0][1] = player;
    else if(answer == 3)
        grid[0][2] = player;
    else if(answer == 4)
        grid[1][0] = player;
    else if(answer == 5)
        grid[1][1] = player;
    else if(answer == 6)
        grid[1][2] = player;
    else if(answer == 7)
        grid[2][0] = player;
    else if(answer == 8)
        grid[2][1] = player;
    else if(answer == 9)
        grid[2][2] = player;
}