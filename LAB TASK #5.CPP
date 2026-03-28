#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

//int num1 , num2 ;
//cout <<" enter two numbers ";
//cin >> num1 >> num2;
//
// if ( num1 != num2 )
// {
//     cout << num1 << " is not equal to "<< num2<<endl;
//     if (num1 < num2 )
//       cout << num1 <<" is smaller than num2"<<endl;
//     else
//        cout << num1 <<" is larger than "<<num2<<endl;
// }
//   else
//     cout <<num1 <<" is equal to "<< num2 ;
//


// EXAMPLE 2:
//     int num1 , num2;
//     cout << " enter two intergers"<<endl;
//     cin >>num1>>num2;
//
//     if (num1 !=num2)
//     {
//         cout <<num1 <<" is not equal to "<< num2 <<endl;
//
//
//         else if ( num1< num2 )
//         cout << num1 <<" is smaller than "<< num2 <<endl;
//         else if (num1 < num2 )
//            cout <<num1 <<" is larger than <<"num2<< endl;
//     }
//         else
//            cout << num1 <<" is equal to" << num2 ;



// SWITCH CASE :
//
//int day ;
//cout <<" enter day ";
//cin >> day ;
//
//switch (day )
//{
//case 1:
//    cout << " Monday ";
//    break;
//
//case 2 :
//    cout << " Tuesday ";
//    break;
//
//case 3 :
//    cout << " wednesday";
//    break;
//case 4:
//    cout << " Thursday";
//    break;
//
//case 5:
//    cout << " Friday ";
//    break ;
//
//case 6 :
//    cout << " saturday";
//    break;
//
//case 7 :
//    cout << " sunday";
//    break;
//
//default:
//    cout << " invalid choice "<<endl;

//}


 GRADED LAB TASK :

// LAB TASK 1 :

int a , b ,c ;
cout << " enter three intergers ";
cin >> a >> b >> c ;

int smallest = a ;

if (b < smallest ) smallest = b;
if ( c < smallest ) smallest = c;

cout << " the smallest interger is "<< smallest << endl;

// LAB TASK 2;

int a, b ,c ,d ;
cout << "enter four integers"<<endl;
cin >>a>>b;
cin >> c >> d ;

int largest =a;

 if (b > largest ) largest = b ;
 if (c > largest ) largest = c ;
 if (d > largest ) largest = d ;

 cout <<" the largest integer is "<< largest << endl;

 // LAB TASK 3 :

  int a , b,c ;
  cout << "enter  three integers";
  cin >>a>>b>>c;

  int count = 0 ;

  if ( a==b && b==c){
    count = 3;}
  else if (a==b || b==c || a==c ){
    count = 2;}
  else {
    count = 0 ;}

    cout << count <<endl;

 LAB TASK 4:

 int num ;
 cout << " enter num";
 cin >> num ;

 if (num ==0)
    cout <<"the number is zero ";
 else if (num == 1 )
    cout << " the number is first";
 else if ( num ==2 )

   cout << " the number is second ";
 else if (num ==3 )
    cout << " the number is three";
 else if (num ==4)
    cout << " the number is four ";
 else if (num == 5)
    cout << " the number is five ";
 else if (num == 6)
    cout << " the number is six ";
 else if (num == 7)
    cout << " the number is seven ";
 else if (num == 8)
    cout << " the number is eight ";
 else if (num == 9 )
    cout << " the number is nine";
 else
    cout << " the number is invalid :";


// LAB TASK 5:

int num ;
char ch ;

cout <<" enter an integer between 0 and 35 ";
cin >> num ;
 if ( num >= 0&& num <=9 ){
    cout <<num << endl;}

 else if (num >=10&& num <= 35 ) {
    ch = static_cast<char>('A'+(num -10));
 cout << ch << endl;
 }
    else
    cout <<" invalid number "<< endl;


// LAB TASK 6 :

int a, b , c ;
cout << "enter sides of triangle ";
cin >> a>>b>>c ;

if (a*a== b*b+c*c)
    cout << "the triangle is right triangle"<< endl;
else if (b*b ==a*a+c*c)
    cout << " the triangle is right triangle "<< endl;
else if (c*c ==a*a + b *b )
    cout << " the triangle is right triangle "<< endl ;
else
    cout << " the triangle is not right "<< endl;


 LAB task 7 :

char ch ;
cout << " enter a  ch ";
cin >> ch ;

if (ch=='a' || ch =='A' || ch == 'e' || ch =='E'|| ch == 'i' || ch == 'I' || ch ==' o'|| ch == 'O' || ch=='u' || ch == 'U' ) {
 cout << ch<<" vowel"<< endl;
}
 else{
    cout << "the ch is consonant ";
 }

// LAB TASK 8 ;
 int books ;
 cout << "enter the number of books purchased ";
 cin >> books ;

 if ( books == 0)
    cout <<"earns  0 points "<< endl;
if ( books == 1 )
 cout << " earn 5 points "<< endl;
 if (books ==2 )
    cout << " earn 15 points "<< endl;
 if (books ==3)
 cout << " earn  30 points ";
 if (books >= 4 )
    cout << " earn 60 points ";

 else
 cout << " invalid input ";

// LAB TASK # 8 SECOND METHOD :
  int books ;
 cout << "enter the number of books purchased ";
 cin >> books ;

 if ( books>= 0) {

 switch(books){



 case 1:
     cout <<"  0 points "<< endl;
     break;


 case 2:
    cout << "5 points  "<< endl;
    break;

 case 3:
    cout << " 15 points ";
    break;

 default:
    cout <<" 60 points "<<endl;

 }

 }
 else {
    cout << " Invalid output";
 }


 // LAB TASK 9 :

 cout << "1 for height in Inches and weight in Pounds" << endl;
 cout << "2 for height in Meters and weight in Kilograms" << endl;
 cout << "3 for height in Feet and Inches, and weight in pounds" << endl;
 int choice;
 double BMI, weight, height;
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
     cout << "Enter your height in Inches: ";
     cin >> height;
     cout << "Enter your weight in Pounds: ";
     cin >> weight;
     BMI = (weight * 703) / (height * height) ;
     break;
 case 2 :
    cout << " enter height in meters";
    cin >> height ;
    cout <<" enter weight in kilograms ";
    cin >> weight ;

    BMI= weight / (height *height );
    break;

 case 3:
     int inches, feet;
    cout<<" enter your height in feet and inches ";
    cin >> feet >> inches ;
    height =inches +(feet *12);
    cout << "enter weight in pounds ";
    cin >> weight ;
     BMI = (weight*703) / height *height ;

 }

 cout << fixed<< setprecision(2) << " ur BMI is :"<< BMI<< endl;

  if (BMI < 18.5)
    cout << " underweight ";
  else if ( BMI >=18.5 && BMI <= 24.9)
    cout << " normal ";
  else if ( BMI >=25&& BMI <= 29.9 )
    cout << " overweight ";
  else if ( BMI >= 30 )
    cout << " obese";






    return 0;
}
