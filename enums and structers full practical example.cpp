// enums and structers full practical example.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

enum encolor{red,green,blue,yellow};
enum engender{male,female};
enum enmaritalstatus { single, married };
  
struct staddress {
    string country;
    string city;
    string street;

};
struct stcontactinfo {

    string phonenumber;
    string email;
    staddress adress;


};
struct stperson {
    string name;
    string fammilyname;
    int age;
    stcontactinfo contactinfo;
    engender gender;
    enmaritalstatus maritalstatus;
    encolor favoritecolor;
    staddress myaddress;
};






















int main()
{
    stperson person1;
    person1.name = "ISLAM";
    person1.fammilyname = "BENNOUNE";
    person1.age = 16;
    person1.myaddress.country = "GERMANY";
    person1.myaddress.city = "MUNICH";
    person1.myaddress.street = "A1 STREET";
    person1.contactinfo.email = "email@gmail.com";
    person1.contactinfo.phonenumber = "01269874554";
    person1.favoritecolor=encolor::blue;
    person1.gender = engender::male;
    person1.maritalstatus = enmaritalstatus::single;

    cout << "my name is : " << person1.name << endl;
    cout << "i am : " << person1.age << endl;
    cout << "i live in : " << person1.myaddress.country << endl;
    cout << " exactly in : " << person1.myaddress.city << endl;
    cout << " in the street of : " << person1.myaddress.street << endl;
    cout << "if you want to contact me here is my eamil : " << person1.contactinfo.email << endl;
    cout << "or by this phone number : " << person1.contactinfo.phonenumber << endl;
    cout << "im " << person1.maritalstatus << endl;
    cout << "my favorite color is : " << person1.favoritecolor << endl;

}

