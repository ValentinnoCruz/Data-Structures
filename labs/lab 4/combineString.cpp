#include <iostream>
#include <cstring>

using namespace std;

 string rand_word,
        word_combd,
        saved;
 int prnt_time;


 string combineStr(string rand_word, int prnt_time);

int main() {
    cout << "Enter a string:\n ";
    cin >> rand_word;

    cout << "Enter a number of times:\n ";
    cin >> prnt_time; 
    
        if (prnt_time == 0)
        {
            return 0;
        }
    
        word_combd =  combineStr(rand_word, prnt_time);
            cout << "The resulting string is: \n";
            cout << word_combd;
            cout << "\n" ;
            
    return 0;
}



string combineStr(string rand_word, int prnt_time)
    {
        word_combd = rand_word;
        for (int i = 1; i < prnt_time ; i++)
        {
            word_combd = word_combd + rand_word;
        }

        return word_combd;
    }
