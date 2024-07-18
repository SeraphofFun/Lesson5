#include <iostream>
using namespace std;
int main()
{
    cout << "eded daxil edin - ";
    int n;
    cin >> n;
    n % 2 == 0 && cout << "n cut ededdir" || cout << "n tek eddedir";
    cout << endl;

    cout << "2 eded daxil edin - ";
    int num2_1;
    cin >> num2_1;
    int num2_2;
    cin >> num2_2;
    num2_1 > num2_2&& cout << num2_2 << " daha kicikdir"<<endl;
    num2_2 > num2_1&& cout << num2_1 << " daha kicikdir"<<endl;
    num2_1 == num2_2&& cout << "beraberdiler"<<endl;



    cout << "eded daxil edin - ";
    int num3;
    cin >> num3;
    num3 >0 && cout << "num3 musbet ededdir" ;
    num3 == 0 && cout << "num3 0 ededdir";
    num3 < 0 && cout << "nu3m menfi ededdir";

    cout << endl;



    cout << "2 eded daxil edin - ";
    double num4_1;
    cin >> num4_1;
    double num4_2;
    cin >> num4_2;

    cout << "kolkulatorda ne elemek isteyirsen 1.+ 2.- 3.* 4./  ";
    int choise;
    cin >> choise;
    if (choise == 1) {
        double total = num4_1 + num4_2;
        cout << total << " cavabdir";

    }
    else  if (choise == 2) {
        double total = num4_1 - num4_2;
        cout << total << " cavabdir";
    }
    else  if (choise == 3) {
        double total = num4_1 * num4_2;
        cout << total << " cavabdir";

    }
    else  if (choise == 4) {
        double total = num4_1 / num4_2;
        cout << total << " cavabdir";

    }
    else {
        cout << "ERROR bele variant yoxdur";
    }
    cout << endl;




    cout << "eded daxil edin - ";
    int num5;
    cin >> num5;
    (num5 > 1 && num5 <50)&& cout << " eded 1 ve 50 arrasindadir"||cout<<"edde 1 50 arrasinda deyil";
    cout << endl;




    cout << "2 eded daxil edin - ";
    int num6_1;
    cin >> num6_1;
    int num6_2;
    cin >> num6_2;
    num6_1% num6_2 == 0 ? cout << "Yes" : cout << "No";
    cout << endl;





    cout << "simvol daxil edin - ";
    char a;
    cin >> a;
    int num7 = a;
    if ((num7 > 64 && num7 < 91) || (num7 > 96 && num7 < 124))
        cout << "HERF";
    else if (num7 == 46 || num7 == 33 || num7 == 63 || num7 == 44)
        cout << "PUNKT";
    cout << endl;




    cout << "eded daxil edin - ";
    int num8;
    cin >> num8;
    num8 % 3 == 0 && cout << "edded 3 bolunur" || cout << "edded 3 qalilqli bolunur";
    cout << endl;
    num8 % 5 == 0 && cout << "edded 5 bolunur" || cout << "edded 5 qalilqli bolunur";
    cout << endl;
    num8 % 7 == 0 && cout << "edded 7 bolunur" || cout << "edded 7 qalilqli bolunur";
    cout << endl;



    cout << "eded daxil edin - ";
    int num9;
    cin >> num9;
    num9 < 0 ? num9 *= -1 : num9;
    cout << "modulu = " << num9<<endl;




    int num10;
    cin >> num10;
    int say = (num10 >= 1) + (num10 >= 10) + (num10 >= 100) + (num10 >= 1000);
    cout << "eded " << say << "  reqemlidir" << endl;


    
    
    cout << "eded daxil edin - ";
    int num11;
    cin >> num11;
    int num11_1 = num11 / 1000;
    int num11_2 = num11 %10*10+num11%100/10;
    num11_1 == num11_2 ? cout << "edded polinomdur" : cout << "edded polinom deyil";
    cout << endl;





    long unsigned int const num12c = 854252;
    cout << "sifreni daxil edin\n";
    long unsigned int num12u;
    cin >> num12u;
    num12c == num12u && cout << "Access successfully completed" || cout << "Access denied";
    cout << endl;




    cout << "itin yasini daxil edin - ";
    int num13;
    double insany;
    cin >> num13;
    if (num13 <= 2&&num13>=0) {
        insany = num13 * 10.5;
        cout <<insany<< "  itin insan yasidir";
    }
    else if (num13 > 2) {
        insany = (num13-2) * 4 +21;
        cout << insany << "  itin insan yasidir";

    }
    else {
        cout << "Error ancaq musbet ola bile";
    }
}

