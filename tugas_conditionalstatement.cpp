#include <iostream>
using namespace std;

//menghitung BMI
float Hitung_BMI(float berat, float tinggi){
    return berat/(tinggi*tinggi);
}

//status BMI
string Status_BMI(float BMI){
    if(BMI < 18.5)
        return "berat badan kurang";
    else if(BMI < 25)
        return "berat badan normal";
    else if(BMI < 30)
        return "berat badan kelebihan";
    else
        return "obesitas";
}

//Input Data
void Input_Data(float & berat, float & tinggi){
    cout << "masukan berat badan (kg) : ";
}
