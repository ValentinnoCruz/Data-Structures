/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valen
 *
 * Created on August 30, 2021, 7:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int num=1;
    
    
    cout << " Enter number of lines for punishment"<<endl;
    cin >> num;
    
    if (num > 0){
        for (int i = 0; i < num; i++ ){
            cout <<"I will always use object oriented programming. " << endl;
        }
    }
        else{
            cout <<"You entered an incorrect value for the number of lines!"<<endl;
        }
          
    return 0;
}

