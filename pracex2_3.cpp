#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomTable(){
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j <8; j++ ){
            int ran;
            char run;
           ran = rand()%25;
           if (ran == 0)
           run = 'A';
           else if (ran == 1)
           run = 'B';
           else if (ran == 2)
           run = 'C';
           else if (ran == 3)
           run = 'D';
           else if (ran == 4)
           run = 'E';
           else if (ran == 5)
           run = 'F';
           else if (ran == 6)
           run = 'G';
           else if (ran == 7)
           run = 'H';
           else if (ran == 8)
           run = 'I';
           else if (ran == 9)
           run = 'J';
           else if (ran == 10)
           run = 'K';
           else if (ran == 11)
           run = 'L';
           else if (ran == 12)
           run = 'M';
           else if (ran == 13)
           run = 'N';
           else if (ran == 14)
           run = 'O';
           else if (ran == 15)
           run = 'P';
           else if (ran == 16)
           run = 'Q';
           else if (ran == 17)
           run = 'I';
           else if (ran == 18)
           run = 'S';
           else if (ran == 19)
           run = 'T';
           else if (ran == 20)
           run = 'U';
           else if (ran == 21)
           run = 'V';
           else if (ran == 22)
           run = 'W';
           else if (ran == 23)
           run = 'X';
           else if (ran == 24)
           run = 'Y';
           else if (ran == 25)
           run = 'Z';
           table[i][j] = run;
        }
    }
}

