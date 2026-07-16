//#include <iostream>
//
//using namespace std;
//
//int main()



//cout << "********************************************" << endl;
//cout << "***     PROGRAMMING FUNDAMENTALS-LAB     ***" << endl;
//cout << "***            LAB WEEK 3                ***" << endl;
//cout << "***
//                       FA25-BCS-167             ***" << endl;
//cout << "***           MUFFASER NAEEM              ***" << endl;
//cout << "********************************************" << endl;
//
//

// ACTIVITY # 1 ":


//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main (){
//
//double regularwages;
//double basepay=25;
//double regularhours=40;
//double overtimewages;
//double overtimepay=37.5;
//double overtimehours=10;
//
// double totalwages;
//
// regularwages = basepay* regularhours;
//
// overtimewages= overtimepay * overtimehours ;
//
//  totalwages =regularwages + overtimewages;
//
//  cout <<fixed<<setprecision(2);
//   cout <<"wages for this week $="<<totalwages;


//  # ACTIVITY # 2:
//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//double monthlyPay = 10000.0;
//double contribution;
//// Calculate and display a 5% contribution.
//contribution = monthlyPay * 0.05;
//cout<<fixed<<setprecision(1);
//
//cout<<"5 percent is $" << contribution <<" per month."<<endl;
//// Calculate and display an 8% contribution.
//contribution = monthlyPay * 0.08;
//cout<<"8 percent is $" << contribution << " per month."<<endl;
//// Calculate and display a 10% contribution.
//contribution = monthlyPay * 0.1;
//cout<<"10 percent is $" << contribution << " per month."<<endl;



// ACTIVITY #3:

//This program displays a variety of floating-point numbers in a column with their
//decimal points aligned.
//Solution:
//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//// Declare a variety of double variables.
//double num1 = 127.899;
//double num2 = 3465.148;
//double num3 = 3.776;
//double num4 = 264.821;
//double num5 = 88.081;
//double num6 = 1799.999;
//// Display each variable in a field of
//// 8 spaces with 2 decimal places.
//cout<<fixed<<setprecision(2);
//cout<<setw(8)<<right;
//cout<<num1<<endl;
//cout<<setw(8)<<right;
//cout<<num2<<endl;
//cout<<setw(8)<<right;
//cout<<num3<<endl;
//cout<<setw(8)<<right;
//cout<<num4<<endl;
//cout<<setw(8)<<right;
//cout<<num5<<endl;
//cout<<setw(8)<<right;
//
//cout<<num6<<endl;
//



//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
////
//    double num1=63.55;
//
//    double num2=66.88;
//    double num3 =68.99;
//    double num4 =70.55;
//    double num5 =75.68;
//    double num6 =80.44;
//
//cout<<fixed<<setprecision(2);
//cout<<setw(8)<<right;
//cout<<num1<<endl;
//cout<<setw(8)<<right;
//cout<<num2<<endl;
//cout<<setw(8)<<right;
//cout<<num3<<endl;
//cout<<setw(8)<<right;
//cout <<num4<<endl;
//cout<<setw(8)<<right;
//cout <<num5<<endl;
//cout<<setw(8)<<right;
//cout<<num6<<endl;
//

// ACTIVITY # 4:

//cout<<"Enter purchase amount: ";
//double purchaseAmount;
//cin>>purchaseAmount;
//double tax = purchaseAmount * 0.06;
//cout<<fixed<<setprecision(2);
//cout<<"Sales tax is $" << (tax * 100) / 100.0<<endl;
//
//cout <<"enter purchase amount:";
//double purchaseamount;
//cin >>purchaseamount;
//
//double tax= purchaseamount * 0.06;
//
//cout <<fixed<<setprecision(2);
//
//cout << "sale tax is $"<<(tax * 100)/ 100.0<< endl;



//ACTIVITY #5 :

//double u ,v;
//
//u =56.34;
//v =9.7 ;
//
//cout <<"ceiling of "<<u<<"is"<<ceil(u)<<endl;
//cout <<"floor of "<<u<<"is"<<floor(u)<<endl;
//cout <<"round of "<<u<<"is"<<round (u)<<endl;
//
//cout <<endl;
//cout <<"ceiling of "<<v<<"is"<<ceil(v)<<endl;
//cout <<"floor of "<<v<<"is"<<floor(v)<<endl;
//cout <<"round of "<<v<<"is"<<round (v)<<endl;


//
//
//cout << "********************************************" << endl;
//cout << "***     PROGRAMMING FUNDAMENTALS-LAB     ***" << endl;
//cout << "***            LAB WEEK 3                ***" << endl;
//cout << "***
//                        FA25-BCS-167              ***" << endl;
//cout << "***            MUFFASER NAEEM             ***" << endl;
//cout << "********************************************" << endl;


//LAB TASK #1:

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
//
double totalmoney;

int cents,totalcents,dollarnumbers,quaters,dimes,nickels;
 cout <<"enter the amount of money as a decimal ";
cin >> totalmoney;
cout<<endl;
cents = totalmoney *100;
totalcents= cents;
dollarnumbers =cents/100;
cents =cents%100;
quaters =cents/25;
cents =cents%25;
dimes =cents/10;
cents =cents%10;
nickels =cents/5;
cents =cents%5;

cout <<"$"<<totalmoney<<"="<<totalcents<<"cents"<<endl;

cout <<totalcents<<" cents is equal to "<<dollarnumbers<<" dollars "<<quaters<<" quarters "<<dimes<<" dimes "<<nickels<<" nickels "<<cents<<" pennies ";




 //LAB TASK # 2:


int quaters, dimes , nickels,totalpennies;
cout <<" enter in value with space in quaters ,dimes and nickels"<<endl;
cin >>quaters>>dimes>>nickels;
totalpennies = (quaters * 25 )+(dimes * 10)+ (nickels * 5);

cout <<setw(8)<<right;
cout <<quaters<<"quaters "<<dimes<<"dimes"<<nickels<<"nickels is equal to"<<totalpennies<<"totalpennies"<<endl;


 //LAB TASK # 3:

double centimeters;
 cout <<" enter the values in centimeters ";

 cin >> centimeters;

 int inches = round (centimeters/2.54);
 int yard = inches/36;
 inches %=36;

 int feet = inches/12;
 inches %=12;




cout <<"converted length :" <<yard <<"yard "<<feet<<"feet"<<inches<<"inches";

 //LAB TASK # 4:


int classA,classB,classC,classD;
cout <<"enter the # of tickets for :/n";
cout <<"classA";
cin>>classA;

cout <<"classB";
cin >> classB;

cout <<"classC";
cin >> classC;

cout <<"classD";
cin >>classD;

int incomeA = classA * 20;
  int incomeB = classB * 15;
int incomeC = classC * 10;
int incomeD = classD * 5;

int totalincome =incomeA+incomeB+incomeC+incomeD;

cout <<" totalincome generated ="<<totalincome ;
cout <<"income from classA tickets : $"<<incomeA;
cout <<"income from classB tickets="<<incomeB;
cout <<"income from classC tickets ="<<incomeC;
cout <<"income from classD tickets  ="<<incomeD;


// LAB TASK # 5;

int num, sum;
    cout << "Enter a number between 0 and 10,000: ";
    cin >> num;

int A = num%10;
cout <<A <<"\n";

int B = ceil(num%100)/10;
cout <<B<<"\n";

int C = ceil(num%1000)/100;
cout <<C<<"\n";

int D = ceil(num%10000)/1000;
cout <<D<<"\n";

sum = A + B + C + D;
cout << "The sum of the digits is: "<<sum;

return 0;
}
