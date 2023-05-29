#include <iostream>
#include <stdlib.h>

using namespace std;

void imprimijogo(char *tic){
    system("clear");
    cout <<" " << tic[0] << " | " << tic[1] << " | " << tic[2] << endl;
    cout <<"------------"<< endl;
    cout <<" " << tic[3] << " | " << tic[4] << " | " << tic[5] << endl;
    cout <<"------------"<< endl;
    cout <<" " << tic[6] << " | " << tic[7] << " | " << tic[8]<<endl;
}

int main(){
    char tic[9]{'0','1','2','3','4','5','6','7','8'};
    char tac, verifica;
    int c;
    bool player = true; 
    bool game = true;
        while(game){    
            for (int i = 0; i < 9; i++){
                imprimijogo(tic);
                if(player){
                    cout << "Vez do 'X': " << endl;
                }else{
                    cout << "Vez do 'O': " << endl;
                }
                cout << "escolha um numero: ";
                cin >> c;
                if(tic[c] == 'X' || tic[c] == 'O'){
                    cout << "A posicao escolhida esta sendo ocupada, digite outro numero: ";
                    cin >> c;
                    if(player){
                        tac = 'X';
                        tic[c] = tac;
                        player = false;
                    }else{
                        tac = 'O';
                        tic[c] = tac;
                        player = true;
                    }
                }else{
                    if(player){
                        tac = 'X';
                        tic[c] = tac;
                        player = false;
                    }else{
                        tac = 'O';
                        tic[c] = tac;
                        player = true;
                    }
                }
                imprimijogo(tic);
                if(tic[0] == tic[1] && tic[0] == tic[2]){
                    if(tic[0]  == 'X'){
                        cout << "Vitoria do 'X'" << endl;
                    }else{
                        cout << "Vitoria do 'O'" << endl;
                    }
                    break;
                }else if(tic[3] == tic[4] && tic[3] == tic[5]){
                    if(tic[3]  == 'X'){
                        cout << "Vitoria do 'X'" << endl;
                    }else{
                        cout << "Vitoria do 'O'" << endl;
                    }
                    break;
                }else if(tic[6] == tic[7] && tic[6] == tic[8]){
                    if(tic[6]  == 'X'){
                        cout << "Vitoria do 'X'"<< endl;
                    }else{
                        cout << "Vitoria do 'O'"<< endl;
                    }
                    break;
                }else if(tic[0] == tic[3] && tic[0] == tic[6]){
                    if(tic[0]  == 'X'){
                        cout << "Vitoria do 'X'" << endl;
                    }else{
                        cout << "Vitoria do 'O'" << endl;
                    }
                    break;
                }else if(tic[1] == tic[4] && tic[1] == tic[7]){
                    if(tic[1]  == 'X'){
                        cout << "Vitoria do 'X'" << endl;
                    }else{
                        cout << "Vitoria do 'O'" << endl;
                    }
                    break;
                }else if(tic[2] == tic[5] && tic[2] == tic[8]){
                    if(tic[2]  == 'X'){
                        cout << "Vitoria do 'X'" << endl;
                    }else{
                        cout << "Vitoria do 'O'" << endl;
                    }
                    break;
                }else if(tic[0] == tic[4] && tic[0] == tic[8]){
                    if(tic[0]  == 'X'){
                        cout << "Vitoria do 'X'" << endl;
                    }else{
                        cout << "Vitoria do 'O'" << endl;
                    }
                    break;
                }else if(tic[2] == tic[4] && tic[2] == tic[6]){
                    if(tic[2]  == 'X'){
                        cout << "Vitoria do 'X'" << endl;
                    }else{
                        cout << "Vitoria do 'O'" << endl;
                    }
                    break;
                }else{
                    cout << "EMPATE" << endl;
                }
            }
        cout << "Recanche?[S/N]: ";
        cin >> verifica;
        if (verifica == 's' || verifica == 'S'){
            tic[0] = '0'; tic[1] = '1'; tic[2] = '2'; 
            tic[3] = '3'; tic[4] = '4'; tic[5] = '5'; 
            tic[6] = '6'; tic[7] = '7'; tic[8] = '8';
            player = true;
        }else if(verifica == 'n' || verifica == 'N'){
            game = false;
        }
    }
    return 0;
}
