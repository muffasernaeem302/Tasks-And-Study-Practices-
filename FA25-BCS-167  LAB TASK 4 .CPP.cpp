#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
//     int num1;
//     cout <<"enter the value of interger";
//     cin >>num1;
//     if (num1>0)
//        cout <<"this num is written positive"<<endl;
//     if (num1<0)
//        cout << " the num is written negative"<<endl;
//     if (num1==0)
//        cout <<"the num is equal to zero"<<endl;


// lab activity :
// number 1
//
//int num1,num2;
//cout << " enter two integers";
//cin >>num1>>num2;
//
//if (num1<num2)
//
//cout <<num1<<"is smaller than "<<num2;

// number 2:
//
//int num1,num2;
//  cout <<"enter two integers";
//
//  cin >>num1>>num2;
//  if (num1<num2)
//
//    cout << num1 <<" is smaller than "<< num 2<<endl;
//  if (num1>num2)
//cout <<num1<< " is greater than  "<<num2<<endl;
//
//if (num1==num2)
//    cout <<num1<<"  equal to "<<num2<<endl;


// number 3:

//int age ;
//cout <<" enter the age of person";
//cin >>age ;
//if (age<18)
//{
//
//cout <<"the is not eligible for voting ";
//}
//else
//{
//    cout <<"the person is eligble for voting";
//}
//

// number 4 LAB ACTIVITIES ;


//
//int number ;
//cout <<"enter the integer ";
//cin >>number ;
//if (number %5==0)
//cout <<"hifive"<<endl;
//if (number %2==0)
//cout << "hieven"<<endl;
////
//
//double wages , rate , hours ;
//
//
//cout <<" enter the working hours ";
//cin >> hours ;
//cout <<" enter the pay rate ";
//cin >>rate ;
//
//if (hours > 40.0)
//
//  wages = 40.0 *rate + 1.5 * rate *(hours -40.0);
//  else
//  wages = hours * rate ;
//cout<< "the wages are $="<<wages <<endl;s
//
//
//
//cout << "********************************************" << endl;
//cout << "*** PROGRAMMING FUNDAMENTALS-LAB               ***"
//cout << "*** LAB WEEK 4 ***"                          << endl;
//cout << "*** FA25-BCS-167 "                           << endl;
//cout << "*** MUFFASER NAEEM ......                  ...<<ENDL;
//cout << "********************************************" << endl;

 LAB TASK # 1;

  int num1;
     cout <<"enter the value of integer";
     cin >>num1;
     if (num1>0)
        cout <<"this num IS +1 "<<endl;
     if (num1<0)
        cout << " the num is-1"<<endl;

     if (num1==0)
        cout <<"the num is= 0"<<endl;



 LAB TASK # 3:


    char ch ;
    cout <<" enter the character ";
    cin >> ch ;

    if ((ch >='A')&&(ch <='Z'))
        cout << ch <<" the character is an uppercase ";
    else  if ((ch >='a')&&(ch <='z'))
        cout <<ch << " the character is lowercase ";
  else
    cout <<ch<< " is not a character " ;


 LAB TASK # 2;

int a,b,c ;
int sum =0;

cout << "enter values of integers " ;
cin >> a>>b>>c ;

if (a>0) sum+=a;
if (b>0) sum+=b;
if (c>0) sum+=c;

cout << " the sum is integers ="<<sum <<endl;


 LAB TASK # 1 :


const float cartoncapacity= 5.28;
const float productioncost=1.18;

const float profitpercarton=0.95;


float totalmilk;
 cout <<" enter the amount of milk produced ";

cin >> totalmilk;


int numcarton = static_cast <int>(totalmilk/cartoncapacity);

double milkinfridge = totalmilk - (numcarton * cartoncapacity);

double cost = totalmilk * productioncost;

double profit = numcarton * profitpercarton;


cout <<" number of carton required :"<<numcarton<<endl;
cout << " extra milk stored in fridge :"<< milkinfridge <<endl;
cout << " total cost:"<<cost<<" $" <<endl;
cout << " profit:"<<profit <<"$"<<endl;



LAB TAK # 2:


    string name;
    double gross;

    // Deduction rates
    const double FEDERAL_TAX = 0.15;
    const double STATE_TAX = 0.035;
    const double SOCIAL_SECURITY_TAX = 0.0575;
    const double MEDICARE_TAX = 0.0275;
    const double PENSION_TAX = 0.05;
    const double HEALTH_INSURANCE = 75.00;

    // Input
    cout << "Enter employee name: ";
    cin >> ws;
    getline(cin, name);

    cout << "Enter gross amount: ";
    cin >> gross;

    // Deductions
    double federal = gross * FEDERAL_TAX;
    double state = gross * STATE_TAX;
    double social = gross * SOCIAL_SECURITY_TAX;
    double medicare = gross * MEDICARE_TAX;
    double pension = gross * PENSION_TAX;
    double health = HEALTH_INSURANCE;

    // Net Pay
    double netPay = gross - (federal + state + social + medicare + pension + health);

    // Output formatting
    cout << fixed << setprecision(2);
    cout << left << setw(25) << name << endl;
    cout << left << setw(25) << "Gross Amount:"       << "$" << right << setw(10) << gross << endl;
    cout << left << setw(25) << "Federal Tax:"        << "$" << right << setw(10) << federal << endl;
    cout << left << setw(25) << "State Tax:"          << "$" << right << setw(10) << state << endl;
    cout << left << setw(25) << "Social Security Tax:"<< "$" << right << setw(10) << social << endl;
    cout << left << setw(25) << "Medicare/Medicaid:"  << "$" << right << setw(10) << medicare << endl;
    cout << left << setw(25) << "Pension Plan:"       << "$" << right << setw(10) << pension << endl;
    cout << left << setw(25) << "Health Insurance:"   << "$" << right << setw(10) << health << endl;
    cout << left << setw(25) << "Net Pay:"            << "$" << right << setw(10) << netPay << endl;

//LAB TASK #3:


    const int COOKIES_PER_BOX = 12;
    const int BOXES_PER_CARTON = 24;
    const double PRICE_BOX = 3.14;
    const double PRICE_LEFT_BOX = 1.14;

    int cookies;
    cout << "Enter the quantity of cookies produced: ";
    cin >> cookies;


    int boxes = cookies / COOKIES_PER_BOX;
    int remainingCookies = cookies % COOKIES_PER_BOX;


    int cartons = boxes / BOXES_PER_CARTON;
    int leftoverBoxes = boxes % BOXES_PER_CARTON;


    double profit = cartons * (BOXES_PER_CARTON * PRICE_BOX)   // cartons
                  + leftoverBoxes * PRICE_LEFT_BOX;            // leftover boxes

    cout << fixed << setprecision(2) << endl;
    cout << "# of cookies boxes: " << boxes << endl;
    cout << "# of cookies cartons : " << cartons << endl;
    cout << "# of left over boxes : " << leftoverBoxes << endl;
    cout << "# of remaining cookies: " << remainingCookies << endl;
    cout << "Profit : $" << profit << endl;

    return 0;
}





































