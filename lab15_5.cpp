#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a, int *b, int *c, int *d){

    int r = rand() % 4;

    if(r == 0){
        int t = *a;
        *a = *b;
        *b = t;
    }
    else if(r == 1){
        int t = *b;
        *b = *c;
        *c = t;
    }
    else if(r == 2){
        int t = *c;
        *c = *d;
        *d = t;
    }
    else{
        int t = *a;
        *a = *d;
        *d = t;
    }
}