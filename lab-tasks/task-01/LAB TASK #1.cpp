#include <iostream>

using namespace std;

int main()

{// task no #1:


  int a, b  ;
  int c;
  cout << " enter two integers by space ";
  cin >> a>> b ;

  c=a+b;
  a=c-a;

  b=c-b;

  cout<< " the value of a :"<< a<<endl;
  cout << " the value of b:"<< b << endl;


 second part ;

int a,b;
cout<< " enter two integers";
cin >> a>> b;

a= a+b;
b=a-b;
a=a-b;

cout <<" the value of a :"<< a<< endl;
cout <<" the value of b :" << b<<endl;



 TASK NO 2:
int a ,b, c;
int sum ;

cout << " enter three integers ";
cin >> a>>b>>c ;
sum = a+b+c;
int average =sum / 3;
cout << " the value of average is : "<< average ;

 LAB TASK 3:
 int distance , time ;
 cout << " enter the values ";
 cin >> distance >> time ;

 int velocity = distance/time;

 cout << " the value of velocity ="<<velocity ;


    return 0;

 lab task 4 ;

int hours, mint, sec ;
cout <<" enter values of these ";
cin >> hours >> mint >>sec;

 sec = (hours *3600)+(mint * 60 )+sec;
cout << " the time in sec :"<< sec ;


int hours, mint, sec ;
cout <<" enter values of these ";
cin >>sec;

hours = sec/3600;
sec =sec%3600;
mint = sec / 60 ;
sec =sec%60;
sec =sec;
cout <<  hours <<"hours" <<mint <<"mint"<<sec<<"sec";

LAB TASK 5 :

float totalpf ,totalict ,totalmath;
float obtainedpf ,obtainedict , obtainedmath;

cout << " total marks in pf,ict,math ";

cin >> totalpf;
cin>> totalict;
cin>> totalmath;
cout << "enter obtained marks in pf ,ict , math";
cin >> obtainedpf;
cin>> obtainedict;
cin>> obtainedmath;

float percentagepf = (obtainedpf/totalpf)*100;
float percentageict = (obtainedict/totalict)*100;
float percentagemath = (obtainedmath/ totalmath)*100;

cout <<" percentagepf"<<percentagepf<<"percentageict"<<percentageict<<"percentagemath"<<percentagemath;
float allsubjects = totalpf+totalict+totalmath;
float obtallsubjects = obtainedpf+obtainedict+obtainedmath;
 float overallpercentage = (obtallsubjects/allsubjects)*100;

cout<< " overall percentage"<<overallpercentage;

return 0;




}

