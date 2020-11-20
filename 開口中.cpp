#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main () {
    srand(time(0));
    int i=rand()% 100;
    int min=0,max=100,x;
    cout << "                  開口中                  " << endl;
    cout << " Try to guess the number(0-100) is " << endl;
    //cout << i << endl;

      while(true){
        cout << " Please input number:";
        cin >> x;
        if(x>=1 and x<=100){
          if(x>min and x<max){
          if(x==i){
          cout << " You Win!!" << endl;
          break;
          }
          if(x<i){
            min =x;
            cout <<"        " << min << " to " << max <<"        " << endl;
          }
          if(x>i){
            max=x;
            cout << min << " to " << max << endl;
          }
        }else{
          cout << "Please input number 1 to 100" << endl;
        }
        }else{
          cout << "Please input number 1 to 100" << endl;
        }
    }
}
