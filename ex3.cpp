#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

// string reverse_num(int num);

// int main (){

    // int i = 1;

    // int num;
    // cout << "Dame el numero que quieres invertir" << endl;
    // cin >> num;

    // while(i > 0){
        
    //     string n_reversed = reverse_num(num); 
    //     cout << n_reversed << endl;
    //     cout << "Dame el numero que quieres invertir" << endl;
    //     cin >> num;
    //     i = num;
//     }


// }

// string reverse_num(int num){

//     int n = num, l;
//     string num_reversed = "";
    
//     while(n != 0){
//         l = n % 10;
//         num_reversed += to_string(l); 
//         n = n / 10;
//         cout << "n: " << n << " l: " << l << endl;
//     }
    
//     return num_reversed;

// }

string reverse_num(int num);


int main (){


    int n;
    string n_reversed = "";

    ifstream archivo;
    ofstream archivo2;


    archivo.open("input.txt");
    if (archivo.is_open()){
        archivo2.open("output.txt");
            if (archivo.is_open()){
                archivo >> n;
                while(n != 0){

                    cout << "bucle";
                    string n_reversed = reverse_num(n); 
                    cout << n_reversed << endl;
                    archivo2 << n_reversed << endl;
        
                    archivo >> n;
        
                }
             
                archivo2.close();
            }
        archivo.close();
    }
    else {
        cout << "error"<< endl;
    }



    return 0;
}

string reverse_num(int num){

    int n = num, l;
    string num_reversed = "";
    
    while(n != 0){
        l = n % 10;
        num_reversed += to_string(l); 
        n = n / 10;
        cout << "n: " << n << " l: " << l << endl;
    }
    
    return num_reversed;

}

