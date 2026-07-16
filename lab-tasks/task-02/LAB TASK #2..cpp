#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    LAB TASK #1;

    double amount ;
    cout << " enter amount in dollars:";
    cin >> amount ;

    int totalcents= (amount *100);

    int dollars = totalcents/100;
    int remainingcents=totalcents%100;

    int quaters= remainingcents/25;
       remainingcents = remainingcents%25;

    int dimes = remainingcents/10;
     remainingcents= remainingcents%10;

    int nickels = remainingcents/5;
       remainingcents = remainingcents%5;

    int pennies =remainingcents;


     cout<<"dollers="<<dollars<<"quaters="<<quaters<<"dimes="<<dimes<<"nickels="<<nickels<<"pennies="<<pennies;


 LAB TASK #2;

int quaters,dimes,nickels,pennies;
cout<< " enter the values of all:"<<endl;
cin >> quaters >>dimes>>nickels;
//
//quaters = quaters*25;
//dimes=dimes*10;
//nickels= nickels ;

pennies = quaters*25 +dimes*10+ nickels*5;

cout << quaters<<"quaters "<<dimes<<" dimes" <<nickels<< "nickels"<<"is equal to "<< pennies<<" pennies ";


  LAB TASK # 3

 int centimeters;

 cout <<" put the value of cin "<<endl;
 cin >>centimeters;

 int totalinches = ceil((centimeters/2.54));

 int yards= totalinches/36;
 int remaininginches=totalinches%36;

 int feet= remaininginches/12;
 int inches = remaininginches%12;


cout << centimeters<<"centimeters"<<totalinches<<" totalinches"<<" is equal to "<<yards<<"yards"<< feet<<"feet"<< inches<<"inches";


 lab task #4;

int A,B,C,D;
cout << " enter the values of these";
cin >>A>>B>>C>>D;

int incomeA=20;
int incomeB=15;
int incomeC=10;
int incomeD=5;

int classA=incomeA*A;
int classB=incomeB*B;
int classC=incomeC*C;
int classD=incomeD*D;

int totalincome=classA+classB+classC+classD;

cout<<"income of A $  "<< classA<<endl;
cout <<"income of B $ "<< classB<<endl;

cout <<" income of C $"<< classC<<endl;

cout <<"income of D $ "<< classD<<endl;

cout << "total income generated $= "<< totalincome;

 LAB TASK 5 :
int number ;

cout << " enter a number between 0 and 10000";

cin >> number ;
 int digit1 = number/ 1000;
 int remainder1 = number %1000;


 int digit2 = remainder1 / 100;
 int remainder2 = remainder1 %100;


 int digit3 = remainder2 / 10;
 int remainder3 = remainder2 %10;


 int digit4 = remainder3;


  int sum = digit1 + digit2 + digit3 + digit4;

  cout <<" the sum of digits is = "<<sum <<endl;














    return 0;
}
