#include <string>
#include <iostream>
#include <cmath>
using namespace std;
enum enweekday{sun=1,mon=2,tue=3,wed=4,thu=5,fri=6,sat=7 };
void showweekdaymenu()
{
    cout << "**********************************" << endl;
    cout << "   week day are   " << endl;
    cout << "**********************************" << endl;
    cout << "1. sunday" << endl;
    cout << "2. monday" << endl;
    cout << "3.tuesday" << endl;
    cout << "4.wednesday" << endl;
    cout << "5.thursday" << endl;
    cout << "6.friday" << endl;
    cout << "7.saturday" << endl;
}
enweekday readweekday()
{
    enweekday weekday;
    int wd;
    cin >> wd;
    return (enweekday)wd;
}
string GetWeekDayName(enweekday weekDay)
{


    switch (weekDay) {


    case enweekday::sun:
        return "Sunday";
        break;
    case enweekday::mon:
        return "Monday";
        break;
    case enweekday::tue:
        return "Tuesday";
        break;
    case enweekday::wed:
        return "Wednesday";
        break;
    case enweekday::thu:
        return "Thursday";
        break;
    case enweekday::fri:
        return "Friday";
        break;
    case enweekday::sat:
        return "Saturday";
        break;
    default:
        return "Not a week day!\n";
    }


}

int main()
{
    

    showweekdaymenu();


    cout << "today is " << GetWeekDayName(readweekday()) << endl;


    return 0;




}
