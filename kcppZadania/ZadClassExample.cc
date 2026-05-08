#include <iostream>
#include <string>

using namespace std;

class KviCar {
    private:
        int fPlate;
        int fFakePlate;
        int fColor;
    public:
        KviCar() {
            fPlate = 0;
            fFakePlate = 0;
            fColor = 0;
            cout << "The KviCar Object has been created" << endl;
        };

        KviCar(int plate, int fakePlate, int color) {
            fPlate = plate;
            fFakePlate = fakePlate;
            fColor = color;
            cout << "The KviCar Object has been created with parameters" << endl;
        };

        ~KviCar() {
            cout << "The KviCar Object has been destroyed" << endl;
        };

        void SetPlate(int rplate) { fPlate = rplate; };
        void SetFakePlate(int fplate) { fFakePlate = fplate; };
        void SetColor(int color) { fColor = color; };

        int GetPlate() { return fPlate; };
        int GetFakePlate() { return fFakePlate; };
        int GetColor() { return fColor; };

        void Print() {
            cout <<"---------------------------------------"<< endl;
            cout <<"All about me:"<< endl;
            cout <<"---------------------------------------"<< endl;
            cout <<"Plate No.:     "<< fPlate     << endl;
            cout <<"FakePlate No.: "<< fFakePlate << endl;
            cout <<"Color:         "<< fColor     << endl;
            cout <<"---------------------------------------\n\n"<< endl;
        }
};

int main() {

    KviCar samochod;

    samochod.Print();

    samochod.SetPlate(12345678);

    samochod.Print();

    cout << "Kolor samochodu: " << samochod.GetColor() << endl;

    return 0;
}