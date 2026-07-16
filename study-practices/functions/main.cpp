#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <iomanip>

using namespace std;
//

//int main ()
//{
//    int num ;
//    cout <<" Enter a integer greater than 6 "<<endl;
//    cin >> num ;
//    while ( num <6 )
//    {
//        cout <<" You entered a small digit . TRY AGAIN "<<endl;
//        cin >> num ;
//
//    }
//    cout <<" num is = "<<num ;
//    return 0 ;
//
//}

// Function 1 :


//void getscore(int &score);
//void printgrade( int score );
//
//int main ()
//{
//int courseScore ;
//cout <<" based on the course score we assign a grade on it "<<endl;
//
//getscore(courseScore);
//printgrade(courseScore);
//
//}
//// function definitions :
//
//void getscore(int &score)
//{
//    cout <<" Enter the course score "<<endl;
//    cin >> score;
//
//    cout <<" the course score is "<< score <<endl;
//
//}
//void printgrade(int score )
//{
//
//cout <<" Your grade for the course is "<<endl;
//
//if (score >= 90 )
//    cout <<" A "<<endl;
//else if (score >= 80 )
//    cout <<" B "<<endl;
//else if ( score >= 70 )
//    cout <<" C " <<endl;
//else if ( score >= 60 )
//    cout <<" D" <<endl;
//else
//    cout <<" F "<<endl;
//
//}
//
//plindrome



// Function 2 :

//
//bool is_plindromeNum(int num )
//{
//
//      int revproduct=0  ;
//      int product = 0 ;
//       int digit ;

//
//    int original = num ;
//
//    while ( num > 0){
//            digit = num % 10 ;
//            revproduct = revproduct * 10 + digit ;
//            num = num / 10 ;
//
//    }
//    cout <<" Reverse Product is "<<revproduct<<endl;
//
//    if (original == revproduct )
//        return true ;
//    else
//        return false ;
//
//
//}
//int main ()
//{
//    int number ;
//    cout <<" Enter the integer Which is Palindrome or NOt ?"<<endl;
//     cout <<" we want the Reverse of the Number "<<endl;
//    cin >> number ;
//
//    int result = is_plindromeNum(number);
//
//    cout <<" The Output is Here "<<result <<endl;
//    return 0 ;
//
//}


// Function 3 :

//bool isVowel(char ch )
//{
//    tolower(ch);
//    if (ch == 'a' || ch == 'e' || ch=='i'|| ch=='o'|| ch=='u')
//        return true;
//    else
//        return false ;
//
//}
//int main()
//{
//    char character ;
//    cout <<" Enter a Character to check "<<endl;
//    cin >> character;
//
//    int result = isVowel(character);
//    cout <<" Result is Here "<<result<<endl;
//    return 0 ;
//
//}


// Function 4 :

//
//int isVowel(char ch )
//{
//     ch = tolower(ch);
//
//   return (ch == 'a' || ch == 'e' || ch=='i'|| ch=='o'|| ch=='u');
//
//}
//int main()
//{
//    char character ;
//    int count = 0 ;
//int totalVowels = 0 ;
//
//    cout <<" Enter a Character to check "<<endl;
//    for ( int i=1 ; i <= 3 ; i++)
//    {
//
//        cin >> character;
//        count ++;
//       totalVowels + = isVowel(character);
//
//    }
//
//
//    cout <<" Result is Here "<<totalVowels<<endl;
//    cout <<" count is = "<<count <<endl;
//
//    return 0 ;
//
//}


// Function 4 :

// TO find PI SQRT :
//
//const double PI = 3.1419 ;
//
//double PIReturn(double num)
//{
//
//double result = sqrt(num);
//
//return result ;
//}
//
//// To find SurfaceAREAS :
//
//
// double SurfaceAreaFind( double num )
// {
//   int result1 = 4* PI *pow(num , 2);
//
//   return result1 ;
// }
// // To Find The Volume :
//
// double VolumeAreaFind( double num )
// {
//     double  result2= ((4.0/3.0)* PI * pow (num , 3 ) );
//
//     return result2 ;
//
// }
//
//int main ()
//{
//    // PI RELEATED :
//
//cout << " Put the PI and get it's SQRT " <<endl;
//
//double  result = PIReturn(PI);
//
//cout <<" Result is Here "<<result<<endl;
//cout <<endl;
//
//// Surface Area Find :
//
//double radius ;
//cout <<" You Entered Radius "<<endl;
//cin >> radius ;
//
//double  result1 = SurfaceAreaFind(radius);
//
//cout <<" Result is Here "<<result1;
//
//cout << endl;
//
//// Find Volume :
//
//double radius2 ;
//cout <<" Enter radius to Find Volume "<<endl;
//cin >> radius2 ;
//
//double result2 = VolumeAreaFind(radius2);
//
//cout <<" Result is Here "<<result2<<endl;
//
//}



// Function 5 :

//
//int reverseDigit( int num )
//{
//    int original = num ;
//     int reversePro = 0 ;
//
//  while (num >0 )
//  {
//      int digits = num % 10 ;
//        reversePro = reversePro * 10 + digits ;
//        num = num / 10 ;
//
//  }
//
//  return reversePro;
//
//}
//int main ()
//{
//    int num ;
//    cout <<" Enter the Integer for Reverse "<<endl;
//    cin >> num ;
//     int result = reverseDigit(num );
//
//     cout << " The Result is Here "<<result<<endl;
//
//}
//
//

// Function 8 :
//
//const double PI = 3.1416;
//
////--------------------------------------------
//// Function to find distance between two points
////--------------------------------------------
//double distance(double x1, double y1, double x2, double y2) {
//    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}
//
////--------------------------------------------..
//// Function to find radius using center & point
////--------------------------------------------
//double radius(double x1, double y1, double x2, double y2) {
//    return distance(x1, y1, x2, y2);
//}
//
////--------------------------------------------
//// Function to find circumference
////--------------------------------------------
//double circumference(double r) {
//    return 2 * PI * r;
//}
//
////--------------------------------------------
//// Function to find area
////--------------------------------------------
//double area(double r) {
//    return PI * r * r;
//}
//
////--------------------------------------------
//// Main program
////--------------------------------------------
//int main() {
//    double x1, y1, x2, y2;
//
//    cout << "Enter center of circle (x1 y1): ";
//    cin >> x1 >> y1;
//
//    cout << "Enter a point on the circle (x2 y2): ";
//    cin >> x2 >> y2;
//
//    double r = radius(x1, y1, x2, y2);
//
//    cout << "\nRadius: " << r << endl;
//    cout << "Diameter: " << 2 * r << endl;
//    cout << "Circumference: " << circumference(r) << endl;
//    cout << "Area: " << area(r) << endl;
//
//    return 0;
//}
//


// Function 9 :
//
//int RegularBill( int num )
//{
//    int BillingAmount;
//    int BasicChannels ;
//    cout <<" Enter the number of basic Channels "<<endl;
//    cin >> BasicChannels;
//
//    BillingAmount = BasicChannels * num ;
//
//    return BillingAmount;
//
//}
//int PremiumBill( int num1 )
//{
//    int BillingAmount ;
//    int PremiumChannels;
//    cout <<" Enter the Premium Channels "<<endl;
//    cin >> PremiumChannels;
//
//    BillingAmount = PremiumChannels * num1 ;
//
//    return BillingAmount;
//
//}
////Main function :
//
//int main(){
//
//    // For Basic Channels :
//
//    int number1 ;
//    cout <<" Enter the TAX on Basic Channels "<<endl;
//    cin >> number1;
//
//    int result1 = RegularBill(number1);
//
//    cout <<" The Regular Bill is here "<<result1<<endl;
//
//
//    // For Premium Channels :
//
//    int number2 ;
//    cout <<" Enter the TAX on premium Channels "<<endl;
//    cin >> number2;
//
//    int result2 = PremiumBill(number2 );
//
//    cout <<" The Premium Bill is Here " <<result2<<endl;
//
//    return 0 ;
//
//
//}

// Function 10 :
//
////---------------------------------------------------------
//// Function to calculate mean
////---------------------------------------------------------
//double mean(double a, double b, double c, double d, double e) {
//    return (a + b + c + d + e) / 5.0;
//}
//
////---------------------------------------------------------
//// Function to calculate standard deviation
////---------------------------------------------------------
//double stdDev(double a, double b, double c, double d, double e, double m) {
//    return sqrt((pow(a - m, 2) +
//                 pow(b - m, 2) +
//                 pow(c - m, 2) +
//                 pow(d - m, 2) +
//                 pow(e - m, 2)) / 5.0);
//}
//
////---------------------------------------------------------
//// Main program
////---------------------------------------------------------
//int main() {
//    double x1, x2, x3, x4, x5;
//
//    cout << "Enter five numbers: ";
//    cin >> x1 >> x2 >> x3 >> x4 >> x5;
//
//    double m = mean(x1, x2, x3, x4, x5);
//    double s = stdDev(x1, x2, x3, x4, x5, m);
//
//    cout << "\nMean = " << m << endl;
//    cout << "Standard Deviation = " << s << endl;
//
//    return 0;
//}

// Function 11  :'
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
////---------------------------------------------------------
//// Function to compute periodic payment R
////---------------------------------------------------------
//double periodicPayment(double L, double r, int m, int t) {
//    double i = r / m;            // periodic interest rate
//    int n = m * t;               // total number of payments
//
//    return (L * i) / (1 - pow(1 + i, -n));
//}
//
////---------------------------------------------------------
//// Function to compute unpaid balance after k payments
////---------------------------------------------------------
//double unpaidBalance(double L, double r, int m, int t, int k) {
//    double R = periodicPayment(L, r, m, t);
//    double i = r / m;
//    int n = m * t;
//
//    return R * (1 - pow(1 + i, -(n - k))) / i;
//}

//---------------------------------------------------------
// Main program (menu-driven)
////---------------------------------------------------------
//int main() {
//    double L, r;
//    int m, t, k;
//    int choice;
//
//    do {
//        cout << "\n===== Loan Calculator Menu =====\n";
//        cout << "1. Calculate Periodic Payment\n";
//        cout << "2. Calculate Unpaid Balance After k Payments\n";
//        cout << "3. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            cout << "Enter loan amount (L): ";
//            cin >> L;
//            cout << "Enter annual interest rate (decimal, e.g., 0.08): ";
//            cin >> r;
//            cout << "Enter payments per year (m): ";
//            cin >> m;
//            cout << "Enter number of years (t): ";
//            cin >> t;
//
//            double R = periodicPayment(L, r, m, t);
//            cout << "\nPeriodic Payment R = " << R << endl;
//        }
//        else if (choice == 2) {
//            cout << "Enter loan amount (L): ";
//            cin >> L;
//            cout << "Enter annual interest rate r (decimal): ";
//            cin >> r;
//            cout << "Enter payments per year (m): ";
//            cin >> m;
//            cout << "Enter number of years (t): ";
//            cin >> t;
//            cout << "Enter number of payments made (k): ";
//            cin >> k;
//
//            double UB = unpaidBalance(L, r, m, t, k);
//            cout << "\nUnpaid Loan Balance L0 = " << UB << endl;
//        }
//        else if (choice != 3) {
//            cout << "Invalid choice! Try again.\n";
//        }
//
//    } while (choice != 3);
//
//    cout << "Program ended.\n";
//    return 0;
//}


// Function 12 :


//-----------------------------------------------------------
// Function to calculate billing amount
//-----------------------------------------------------------
//double billingAmount(double hourlyRate, int minutes, bool lowIncome) {
//    double charge = 0.0;
//
//    if (lowIncome) {
//         Low-income case
//        if (minutes > 30) {
//            int extra = minutes - 30;
//            charge = hourlyRate * 0.40 * (extra / 60.0);
//        }
//    }
//    else {
//         Not low-income
//        if (minutes > 20) {
//            int extra = minutes - 20;
//            charge = hourlyRate * 0.70 * (extra / 60.0);
//        }
//    }
//
//    return charge;
//}
//
//-----------------------------------------------------------
// Main program
//-----------------------------------------------------------
//int main() {
//    double hourlyRate;
//    int minutes;
//    char incomeChoice;
//
//    cout << "Enter hourly rate: ";
//    cin >> hourlyRate;
//
//    cout << "Enter total consulting time (minutes): ";
//    cin >> minutes;
//
//    cout << "Low income? (Y/N): ";
//    cin >> incomeChoice;
//
//    bool isLowIncome = (incomeChoice == 'Y' || incomeChoice == 'y');
//
//    double amount = billingAmount(hourlyRate, minutes, isLowIncome);
//
//    cout << "\nBilling Amount = $" << amount << endl;
//
//    return 0;
//}
//



// REFERENCE PARAMETERS :


// FUNCTION 13 :

//
//const double CONVERSION = 2.54;
//const int INCHES_IN_FOOT = 12;
//const int CENTIMETERS_IN_METER = 100;
//
//void showChoices();
//void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct);
//void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in);
//
//int main()
//{
//    int feet, inches;
//    int meters, centimeters;
//    int choice;
//
//    do
//    {
//        showChoices();
//        cin >> choice;
//        cout << endl;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter feet and inches: ";
//            cin >> feet >> inches;
//            cout << endl;
//
//            feetAndInchesToMetersAndCent(feet, inches, meters, centimeters);
//
//            cout << feet << " feet, "
//                 << inches << " inches = "
//                 << meters << " meter(s), "
//                 << centimeters << " centimeter(s)." << endl;
//            break;
//
//        case 2:
//            cout << "Enter meters and centimeters: ";
//            cin >> meters >> centimeters;
//            cout << endl;
//
//            metersAndCentTofeetAndInches(meters, centimeters, feet, inches);
//
//            cout << meters << " meter(s), "
//                 << centimeters << " centimeter(s) = "
//                 << feet << " feet, "
//                 << inches << " inches." << endl;
//            break;
//
//        case 99:
//            cout << "Exiting program..." << endl;
//            break;
//
//        default:
//            cout << "Invalid input. Try again." << endl;
//        }
//
//        cout << endl;
//
//    } while (choice != 99);
//
//    return 0;
//}
//
//void showChoices()
//{
//    cout << "Enter--" << endl;
//    cout << "1: Convert FEET & INCHES → METERS & CENTIMETERS" << endl;
//    cout << "2: Convert METERS & CENTIMETERS → FEET & INCHES" << endl;
//    cout << "99: Quit" << endl;
//    cout << "Your choice: ";
//}
//
//void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct)
//{
//    int totalInches = f * INCHES_IN_FOOT + in;
//    int totalCentimeters = static_cast<int>(totalInches * CONVERSION);
//
//    mt = totalCentimeters / CENTIMETERS_IN_METER;
//    ct = totalCentimeters % CENTIMETERS_IN_METER;
//}
//
//void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in)
//{
//    int totalCentimeters = mt * CENTIMETERS_IN_METER + ct;
//
//    int totalInches = static_cast<int>(totalCentimeters / CONVERSION);
//
//    f = totalInches / INCHES_IN_FOOT;
//    in = totalInches % INCHES_IN_FOOT;
//}

// function 14c :


//void Number( double num)
//{
//
//
//
//    cout <<fixed<<showpoint<<setprecision(2);
//
//    cout <<" The result is here :"<< num * 3 ;
//
//
//}
//int main ()
//{
//    double num ;
//    cout <<" WE want the number to its three time "<<endl;
//      cin >> num ;
//    Number(num );
//    return 0 ;
//}


// function 15 :

//void Numbers(int num1 , int num2 )
//{
//
//
//    if (num1 == 0)
//         cout <<"  Second number cannot be divided by the first number because the first number is 0."<<endl;
//    else
//    {
//          int result = num2/num1;
//                cout <<" The Result is Here :"<< result ;
//    }
//
//
//
//}
//int main ()
//{
//    int num1 , num2;
//    cout <<" Enter two integers to Fill the criteria "<<endl;
//    cin >> num1 >> num2 ;
//    Numbers(num1 , num2 );
//
//    return 0 ;
//
//}

// Function 16 :

//void Numbers( int&num1 , double&num2 , string&Name)
//{
//cout <<" Here we return the Values of These Data Types "<<endl;
//cout <<"NUM1 is "<<num1 <<" Num2 IS "<<num2 <<" String name is "<<Name <<endl;
//
//}
//int main ()
//{
//    int num1 = 0;
//    double num2 = 0 ;
//    string Name = " ";
//
//    Numbers(num1 , num2 , Name);
//
//    return 0 ;
//
//}


// Function 17 :
//
//void Updatesum(int&sum , int testscore)
//{
//    sum = sum + testscore ;
//
//}
//int main ()
//{
//    int total  = 50 ;
//    int score = 20 ;
//
//    Updatesum( total , score );
//    cout <<" Total "<<total ;
//
//}

// function no 18 :
//
//// ---------------------------
//// Function Prototypes
//// ---------------------------
//void timeConversionMenu();
//void displayTimeMenu();
//void getInput24(int& hours, int& minutes);
//void convertTo12(int hours, int minutes);
//
//
//// ---------------------------
//// TIME MENU
//// ---------------------------
//
//int main ()
//{
//    char choice ;
//
//    do {
//
//            cout << "        MAIN MENU\n";
//        cout << "==============================\n";
//        cout << "1. Time Conversion (24 hr - 12 hr)\n";
//        cout << "2. 4-Digit Number Operations\n";
//        cout << "Q. Quit\n";
//        cout << "Enter your choice: "<<endl;
//
//        cout <<" Enter choice "<<endl;
//
//        cin >> choice ;
//        switch(choice)
//        {
//        case'1':
//            timeConversionMenu();
//            break ;
//
//        case 'q':
//        case'Q':
//            cout <<" Program Terminated "<<endl;
//            break ;
//
//        default:
//            cout <<" Try Again "<<endl;
//        }
//
//
//        }while(choice!='Q' && choice != 'q');
//
//        return 0 ;
//
//    }
//void timeConversionMenu()
//
//{
//
//  displayTimeMenu();
//
//  char choice , again ;
//  cin >> choice ;
//  if (choice =='A'|| choice== 'a')
//  {
//       cout <<" you choose To You  U can change the time from 24 to 12 hours "<<endl;
//       int h , m ;
//
//       getInput24(h  , m );
//      convertTo12( h , m);
////
////  }
////  else
////    cout <<" Error "<<endl;
////}
////
////
////
////  void displayTimeMenu()
////  {
////  cout <<" A . U can change the time from 24 to 12 hours "<<endl;
////  cout <<" B .   U can change the time from 12 to hours 24 "<<endl;
////
////  cout << endl;
////  }
////  void getInput24(int& hours , int &minutes )
////  {
////      cout <<" Hours "<<endl;
////      cin >> hours ;
////      cout <<" Minutes "<<endl;
////      cin >> minutes;
////
////  }
//// void convertTo12(int hours , int minutes )
////{
////    string period ;
////    if ( hours >= 12 )
////        period = "PM";
////    if ( hours < 12 )
////        period = " AM ";
////
////    if ( hours == 0)
////        hours = 12 ;
////    else if ( hours > 12 )
////        hours = hours - 12 ;
////    cout <<" Time in Notation of 12 "<<endl;
////    cout <<setw(2)<<setfill('0')<<hours <<":"<<minutes<<" "<<period <<endl;
////}
//
//// function 19:
//int sumDigits( int number );
//int reverse( int number );
//bool isPalindrome( int number );
//
//int main ()
//{
//    int number ;
//
//    do{
//        cout << "Enter an Integer Having four digits " <<endl;
//        cin >> number ;
//         if ( number < 1000 || number >9999)
//         {
//             cout <<" Please Enter an integer Between 4 Digits "<<endl;
//         }
//    }while( number < 1000 || number > 9999);
//
//    cout <<" To Find  sum of the digits of an integer."<<endl;
//    cout <<"  integer in reverse order:"<<endl;
//    cout <<" . A number is a palindrome"<<endl;
//
//    int sum = sumDigits(number);
//    int reverseNumber = reverse(number);
//    bool ispalindrome = isPalindrome(number );
//
//    cout <<" The results are as Given "<<endl;
//    cout <<" The sum of Digits are "<<sum <<endl;
//    cout <<" The Reversed of Digits are "<<reverseNumber<<endl;
//    cout <<" The palindrome  Check Happen "<<endl;
//
//    if(ispalindrome)
//    cout << " Yes The Result is palindrome "<<endl;
//    else
//        cout <<" Not a Palindrome Number "<<endl;
//}
//
//
//int sumDigits(int number )
//{
//    int sum = 0 ;
//    while ( number >0 )
//    {
//    sum = sum + number% 10 ;
//    number = number / 10 ;
//    }
//    return sum ;
//
//}
//int reverse( int number)
//{
//    int rev = 0 ;
//    while ( number >0)
//    {
//    rev = rev * 10 + number % 10 ;
//    number = number / 10 ;
//    }
//    return rev ;
//
//}
//bool isPalindrome( int number )
//{
//    int reversed = reverse( number );
//    if ( reversed== number )
//        return true ;
//    else
//        return false ;
//
//}
//

//
//int main()
//{
//
//     int const Size = 5 ;
//     int arr[Size];
//
//     int sum =0 ;
//
// cout << " Take the input of Arrays " <<endl;
//
//     for ( int i= 0 ; i < Size ; i++)
//     {
//
//
//        cin >> arr[i];
//
//    sum = sum + arr[i];
//
//     }
//     for ( int i = 0 ; i < Size ; i ++ )
//
//     {
//          cout << " Out put of the arrays are " <<endl;
//          cout << arr[i] ;
//
//          cout <<endl;
//
//     }
//          cout << " Sum is "<< sum << endl;
//
//     return 0 ;
//
//}




//int main()
//{
//
//    const int Size = 5 ;
//     int arr[Size];
//
//    int maximum ;
//
//    int minimum ;
//
//     int sum =0 ;
//
// cout << " Take the input of Arrays " <<endl;
//
//     for ( int i= 0 ; i < Size ; i++)
//     {
//        cin >> arr[i];
//        sum = sum + arr[i];
//
//
//     }
//         for ( int i= 0 ; i < Size ; i++)
//         {
//        maximum =arr[0];
//
//        minimum = arr[0] ;
//
//              if ( arr[i]> maximum )
//            maximum= arr[i];
//        if ( arr[i]< minimum )
//            minimum = arr[i];
//
//         }
//     for ( int i = 0 ; i < Size ; i ++ )
//
//     {
//          cout << " Out put of the arrays are " <<endl;
//          cout << arr[i] ;
//
//          cout <<endl;
//
//     }
//          cout << " Sum is "<< sum << endl;
//    cout << "Minimum Value is about "<<minimum <<endl;
//    cout << " Maximum Value is about"<<maximum <<endl;
//
//     return 0 ;
//
//}
//


// Arrays :
//
//void PrintArray( int Arr[], int number)
//{
//    int sum = 0 ;
//
//    for ( int i = 0 ; i < number ; i++)
//        {
//        cout << Arr[i]<<endl;
//        sum = sum + Arr[i];
//
//        }
//        cout <<" Sum is Here "<<sum <<endl;
//
//
//}
//int main()
//{
//
//    int Number []= {1, 2 , 3, 4 ,5 };
//
//    int Size = sizeof(Number)/ sizeof(Number[0]);
//
//    PrintArray(Number,Size );
//
//    return 0 ;
//


