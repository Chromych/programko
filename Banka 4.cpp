#include <iostream>
#include <Windows.h>
using namespace std;
//je ta fakt dobry kamo
int main() {
    int zustatekpepe = 0;
    int vyberpepe;
    int zustatekjarmila = 500;
    int vyberjarmila;
    int zustatekjamal = 8000000;
//zmrde
    int vyberjamal;
//to je super
    zacatek:
    system("CLS");
    cout << "Banka Blanka\n";

    cout << "1) Pepe\n";
    cout << "2) Jarmila\n";
    cout << "3) Jamal\n";
//je to srajda
 int user;
    cout << "Kdo se chce prihlasit?\n";
    cin >> user;
    switch(user) {

        case 1:
        system("CLS");
        int pinpepe;
        cout << "Zadejte PIN:\n";
        cin >> pinpepe;

        if(pinpepe == 1234) {
            pepemenu:
            system("CLS");

            int pepehovolba;
            cout << "Vitej v bance\n";

            cout << "1) Vyber\n";
            cout << "2) Zustatek\n";
            cout << "3) Poslat penize\n";
            cout << "4) Odhlasit se\n";

            cout << "Co chcete udelat\n";
            cin >> pepehovolba;

            switch(pepehovolba) {

                case 1:
                system("CLS");
                cout << "Kolik chcete vybrat:\n";
                cin >> vyberpepe;

                if(vyberpepe <= 0) {
                    cout << "Chyba, zadejte predepsanou castku";
                    Sleep(1500);
                    goto pepemenu;

                }else{

                zustatekpepe = zustatekpepe - vyberpepe;

                cout << "Vybrali jste " << vyberpepe << "CZK" << "\n";
                Sleep(1500);
                goto pepemenu;

                }
                break;
                case 2:

                system("CLS");
                cout << "Vas zustatek je: " << zustatekpepe << "CZK" << "\n";
                Sleep(1500);
                goto pepemenu;
                break;

                case 3:
                system("CLS");

                int poslatkomupepe;
                cout << "Bankovni prevod\n";
                cout << "--------------------\n";
                cout << "1) Jarmile" << "\n";
                cout << "2) Jamalovi" << "\n";

                cout << "Komu chcete poslat penize \n";
                cin >> poslatkomupepe;

                switch(poslatkomupepe) {

                case 1:
                system("CLS");

                int poslatpepel;
                cout << "Kolik chcete poslat Jarmile?\n";
                cin >> poslatpepel;

                if(poslatpepel <= 0) {

                    cout << "Chyba, zadejte predepsanou castku";
                    Sleep(1500);
                    goto pepemenu;

                }else {
                zustatekpepe = zustatekpepe - poslatpepel;
                zustatekjarmila = zustatekjarmila + poslatpepel;
                cout << "Poslal si " << poslatpepel << "CZK Jarmile";
                Sleep(1500);
                goto pepemenu;
                }
                break;

                case 2:
                system("CLS");

                int poslatpepej;
                cout << "Kolik chcete poslat Jamalovi?\n";
                cin >> poslatpepej;
                zustatekpepe = zustatekpepe - poslatpepej;
                zustatekjamal = zustatekjamal + poslatpepej;
                cout << "Poslal si " << poslatpepej << "CZK Jamalovi";
                Sleep(1500);
                goto pepemenu;
                break;

                }

                break;

                case 4:
                goto zacatek;
                break;

            }

        }else {

            system("CLS");
            cout << "Nespravny PIN" << "\n";
            Sleep(1500);
            goto zacatek;

        }

        break;

        case 2: //Jarmila
        system("CLS");
        int pinjarmila;
        cout << "Zadejte PIN:" << "\n";
        cin >> pinjarmila;

        if(pinjarmila == 5678) {

            jarmilamenu:
            system("CLS");
            int jarmilavolba;
            cout << "Vitej Jarmilo v bance\n";
            cout << "--------------------" << "\n";
            cout << "1) Vyber" << "\n";
            cout << "2) Zustatek" << "\n";
            cout << "3) Poslat penize" << "\n";
            cout << "4) Odhlasit se" << "\n";
            cout << "--------------------" << "\n";
            cout << "Co chcete udelat? " << "\n";
            cin >> jarmilavolba;

            switch(jarmilavolba) {

                case 1:
                system("CLS");
                cout << "Kolik chcete vybrat: " << "\n";
                cin >> vyberjarmila;
                zustatekjarmila = zustatekjarmila - vyberjarmila;
                cout << "Vybrali jste " << vyberjarmila << "CZK" << "\n";
                Sleep(1500);
                goto jarmilamenu;
                break;

                case 2:
                system("CLS");
                cout << "Vas zustatek je: " << zustatekjarmila << "CZK" << "\n";
                Sleep(1500);
                goto jarmilamenu;
                break;

                case 3:
                system("CLS");

                int poslatkomujarmila;
                cout << "Bankovni prevod\n";

                cout << "1) Pepemu\n";
                cout << "2) Jamalovi\n";

                cout << "Komu chcete poslat penize \n";
                cin >> poslatkomujarmila;
                switch(poslatkomujarmila) {

                case 1:
                system("CLS");

                int poslatjarmilap;
                cout << "Kolik chcete poslat Pepemu?\n";
                cin >> poslatjarmilap;
                zustatekjarmila = zustatekjarmila - poslatjarmilap;
                zustatekpepe = zustatekpepe + poslatjarmilap;
                cout << "Poslal si " << poslatjarmilap << "CZK Pepemu";
                Sleep(1500);
                goto jarmilamenu;
                break;

                case 2:
                system("CLS");
                int poslatjarmilaj;

                cout << "Kolik chcete poslat Jamalovi?" << "\n";
                cin >> poslatjarmilaj;
                zustatekjarmila = zustatekjarmila - poslatjarmilaj;
                zustatekjamal = zustatekjamal + poslatjarmilaj;
                cout << "Poslal si " << poslatjarmilaj << "CZK Jamalovi";
                Sleep(1500);
                goto jarmilamenu;
                break;

                }
                break;

                case 4:
                goto zacatek;
                break;
            }

        }else {

            system("CLS");
            cout << "Nespravny PIN\n";
            Sleep(1500);
            goto zacatek;

        }

        break;

        case 3: //Jamal
        system("CLS");
        int pinjamal;

        cout << "Zadejte PIN:\n";
        cin >> pinjamal;

        if(pinjamal == 6666) {
            jamalmenu:
            system("CLS");

            int jamalvolba;
            cout << "Vitej Jamale v bance\n";

            cout << "1) Vyber\n";
            cout << "2) Zustatek\n";
            cout << "3) Poslat penize\n";
            cout << "4) Odhlasit se" << "\n";

            cout << "Co chcete udelat? \n";
            cin >> jamalvolba;

            switch(jamalvolba) {

                case 1:
                system("CLS");
                cout << "Kolik chcete vybrat:\n";
                cin >> vyberjamal;
                zustatekjamal = zustatekjamal - vyberjamal;
                cout << "Vybrali jste " << vyberjamal << "CZK" << "\n";
                Sleep(1500);
                goto jamalmenu;
                break;



                case 2:
                system("CLS");
                cout << "Vas zustatek je: " << zustatekjamal << "CZK" << "\n";
                Sleep(1500);
                goto jamalmenu;
                break;



                case 3:
                system("CLS");
                int poslatkomujamal;
                cout << "Bankovni prevod\n";

                cout << "1) Pepemu\n";
                cout << "2) Jarmile\n";

                cout << "Komu chcete poslat penize\n";
                cin >> poslatkomujamal;
                switch(poslatkomujamal) {

                case 1:
                system("CLS");

                int poslatjamalp;
                cout << "Kolik chcete poslat Pepemu?\n";
                cin >> poslatjamalp;
                zustatekjamal = zustatekjamal - poslatjamalp;
                zustatekpepe = zustatekpepe + poslatjamalp;
                cout << "Poslal si " << poslatjamalp << "CZK Pepemu";
                Sleep(1500);
                goto jamalmenu;
                break;

                case 2:
                system("CLS");

                int poslatjamalj;
                cout << "Kolik chcete poslat Jarmile?\n";
                cin >> poslatjamalj;
                zustatekjamal = zustatekjamal - poslatjamalj;
                zustatekjarmila = zustatekjarmila + poslatjamalj;
                cout << "Poslal si " << poslatjamalj << "CZK Jarmile";
                Sleep(1500);
                goto jamalmenu;
                break;
                }
                break;

                case 4:
                goto zacatek;
                break;
            }
        }else {

            system("CLS");
            cout << "Nespravny PIN" << "\n";
            Sleep(1500);
            goto zacatek;

        }
        break;
    }
}
