
#include <iostream>

using namespace std;

string turkce_rakam[10] = {"", "Bir", "İki", "Üç", "Dört", "Beş", "Altı", "Yedi", "Sekiz", "Dokuz"};
string turkce_basamak[7] = {"", "On", "Yüz", "Bin", "On", "Yüz", "Bin"};
string tens[10] = {"", "On", "Yirmi", "Otuz", "Kırk", "Elli", "Altmış", "Yetmiş", "Seksen", "Doksan"};

string convert(int digit, string numbers[15]){

    string result = "";
    int threshold = digit - 1;

    for(int t = 0; t < threshold; t++){

        int asd = stoi(numbers[t]);

        if(asd == 1 && threshold - t == 0 || threshold - t == 3 || threshold - t == 6){

            result += turkce_basamak[threshold - t - 1];

        }else if(threshold - t  == 2 || threshold - t  == 5 || threshold - t  == 8){

            result += tens[asd];

        }else if(digit == 2 && asd == 0){

            result += "Sıfır";

        }else{

            result += turkce_rakam[asd] + turkce_basamak[threshold - t - 1];

        }

    }

    return result;

}

string decimalToText(double num){

    string temp = to_string(num);
    
    temp.erase(temp.find_last_not_of('0') + 1, string::npos);

    if(temp.back() == '.'){

        temp.pop_back();

    }

    string integer[15] = {};
    string decimal[15] = {};

    bool nokta = false;
    bool eksi = false;

    int integer_digit = 0;
    int decimal_digit = 0;

    for(int i = 0; i < temp.length(); i++){

       if(temp[i] == ',' || temp[i] == '.'){

        nokta = true;

       }

       if(temp[i] == '-' && eksi == false){

        eksi = true;
        i--;
        temp.erase(remove(temp.begin(), temp.end(), '-'), temp.end()); 
        continue;

       }

        if(!nokta && !(temp[i] == ',' || temp[i] == '.' || temp[i] == '-')){

            integer[i] = temp[i];
            integer_digit++;

        }else if(nokta && !(temp[i] == ',' || temp[i] == '.' || temp[i] == '-')){

            decimal[i - integer_digit - 1] = temp[i];
            decimal_digit++;

        }

    }

    integer[integer_digit++] = "\0";
    decimal[decimal_digit++] = "\0";

    string integer_part = convert(integer_digit, integer);
    string decimal_part = convert(decimal_digit, decimal);

    string final = "";

    if(eksi == true){

        final += "Eksi";

    }

    final += integer_part;

    if(nokta == true){

        final += "Nokta" + decimal_part;

    }

    final += "\n";

    return final;

}

int main(){

    cout<<decimalToText(-123456.59248);
    cout<<decimalToText(28391.23);
    cout<<decimalToText(-27);
    cout<<decimalToText(0.891);
    cout<<decimalToText(-0.22463);
    cout<<decimalToText(1294);

}
