#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
		ifstream source("score1.txt");
        ofstream dest("result.txt");
    int A[] = {};
	string line;
    string lim;
	while(getline(source,line)){
        atof(line.c_str());
	    lim << line << "\n";
	}
	return 0;
}
