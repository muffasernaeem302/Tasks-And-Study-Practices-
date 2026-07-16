#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    // LAB ACTIVITY #1 :
//    srand(time(0));
//
//int number1 = rand()% 10;
//int number2 = rand()% 10;
//cout << " what is "<< number1<<"+"<<number2<<"?";
//int answer;
//cin >> answer;
//
//while (number1+number2 != answer)
//{
//    cout <<" wrong answer. try again. what is "<< number1<<"+"<<number2<<"?";
//    cin >>answer;
//}
//cout <<" you got it !"<<endl;

 // LAB ACTIVITY NO 2 :



//
//int limit, number;
//int sum;
//int counter; //loop control variable
//cout << "Enter the number of integers in the list: ";
//cin >> limit;
//cout << endl;
//sum = 0;
//counter = 0;
//cout <<"Enter "<< limit << " integers.\n";
//
//while (counter < limit)
//{
//cin >> number;
//sum = sum + number;
//counter++;
//}
//
//cout << "The sum of the "<< limit << " numbers = " <<
//sum << endl;
//
//if (counter != 0)
//cout << "The average = "<< sum / counter;
//else
//cout << "No input.";


// LAB ACTIVITY 3 :

//const int SENTINEL = -999;
//int number; //variable to store the number
//int sum = 0; //variable to store the sum
//int count = 0; //variable to store the total
//cout <<"Enter positive integers ending with " << SENTINEL <<
//endl;
//cin >> number;
//while (number != SENTINEL)
//{
//sum = sum + number;
//count++;
//cin >> number;
//}
//
//cout << "The sum of " << count << " numbers = " << sum
//<< endl;
//
//if (count != 0)
//cout << "The average = " << sum / count;
//else
//cout << "No input." << endl;

//lab activity 4:


//
//int num; //variable to store the random number
//int guess; //variable to store the number guessed by the user
//bool done; //boolean variable to control the loop
//srand(time(0));
//num = rand() % 100;
//done = false ;
//while (!done)
//    {
//cout << "Enter an integer greater than or equal to 0 and less than 100: ";
//cin >> guess;
//cout << endl;
//if (guess == num)
//{
//cout << "You guessed the correct number." << endl;
//done = true;
//}
//else if (guess < num)
//cout << "Your guess is lower than the number.\n" <<
//"Guess again!";
//else
//cout << "Your guess is higher than the number.\n"
//<<"Guess again!";

//} //end while

// lab activity 5 :


//
//int number, sum = 0, count;
//for (count = 0; count < 5; count++)
//{
//
//cin >> number;
//sum += number;
//}
//cout << "sum is " << sum << endl;

// lab ACTIVITY 6 :
//
//int number, max;
//cin >> number;
//max = number;
//do
//{
//cin >> number;
//if (number > max)
//max = number;
//}
//while (number != 0);
//cout <<"max is " << max <<" and number " << number <<endl;


cout << "********************************************" << endl;
cout << "***     PROGRAMMING FUNDAMENTALS-LAB     ***" << endl;
cout << "***            LAB WEEK 3                ***" << endl;
cout << "***           FA25-BCS-167               ***" << endl;
cout << "***           MUFFASER NAEEM              ***"<< endl;
cout << "********************************************" << endl;
// GRADED LAB TASK :
// LAB TASK 1:
int choice ;

do {


cout <<" Choose which program u want to check "<<endl;

cin >> choice ;
switch ( choice ){

case 1 :
    {
int num ;
int sum = 0 , count ;

 for (count = 0 ; count < 2 ; count ++)
{
    cin >> num;
    sum = sum + num;
}
cout<< " sum is "<< sum << endl;
break ;
}


// WITH WHILE ;
//
//int  numberpos ;
//
//int countertask = 0 , sumtask =0;
//
//while (countertask <=10)
// {
//     cout << " enter the integer "<< endl;
//     cin >> numberpos;
//
//     if (numberpos<0)
//        cout << " the number u put is invalid "<< " put again";
//     else
//        sumtask = sumtask + numberpos;
//     countertask++;
//
// }
// cout << " the sum "<< sumtask;

// LAB TASK # 2;
case 2 :{
// for loop ;

int digit ;
cout << " enter the value of the digit ";
cin >> digit ;

 long long answer = 1 ;

for (int i = 1; i <= digit ; i++ )
{
   answer = answer*i ;

}
 cout << " the given factorial "<< answer<<endl;
 break ;

 }

//
// while loop ;
//
//int value ;
//cout << " enter the value of factorial digit."<< endl;
//cin>>value;
//
//int hold = value ;
//long long factorial = 1;
//
//while ( hold > 0){
//    factorial*= hold
//    hold-- ;}
//
//    cout << " the value of factorial "<< factorial;
case 3 :{
// LAB TASK # 3 ;
  int even = 2 ;
  int odd  = 1 ;

 cout << " enter the value of first 20 even numbers"<<endl;

  int count = 1;

 while (count<=20){
    cout << even <<" " ;
 even+= 2 ;
 count ++;
 }
  cout << " enter the value of first  20 odd numbers"<<endl;
 count =1;
 while (count<=20){
    cout <<odd<<" ";
 odd+= 2;
 count ++;
 }
break;
}


case 4 :{

 //lab task 4;

//-----------------part a -----------------;

int a , b ;
cout << " enter the value of a and b ";
cin >> a   >> b;

if (a<=b)
cout << " numbers is from "<<a<<" to " << b <<" are ";
for (int i = a ; i <= b ; i++){
    cout << i <<endl;}


//}
//
////---------------part b ----------------;
//
int x ,y ;
cout << " enter the values of x and y ";
cin >> x >> y ;

if (x< y ){
    while (x<=y){
    cout <<x <<" ";

    x++;}
}
    else
    while(x >= y ){
        cout << " x"<<" " ;
        x --;}

  //  }
// --------------part c ---------------;

int n  , sum_cube = 0 ;

 cout << " enter a positive value:  ";
 cin >> n ;
if (n > 0)
{
    for (int  i = 1; i <=n ; i++)
    {
        sum_cube = sum_cube + (i*i*i);

    }
    cout << " sum of cubes from 1 to "<< n <<"is "<< sum_cube<< endl;

}
else {
    cout << " invalid integer";

}

cout << endl;

//---------------part c ----------;

//
int num  = 0 ;
 int sum_cube1  = 0;
	cout << "Enter a positive integer: ";
	cin >> num;
	if (n > 0)
	{
		for (int i = 1; i <= num ; i++)
		{
			sum_cube1 = sum_cube1 + (i * i * i);
		}
		cout << "Sum of cubes from 1 to " << num  << " is: " << sum_cube1 << endl;
	}
	else
	{
		cout << "Invalid integer." << endl;
	}
	cout << endl;
break ;}
case 5 :
{


//
//// LAB TASK 5 :
//
int num2;
cout << " enter a positive value ";
cin >> num2;

if (num2 >=1)
{
    int steps = 0;

    while (num2!=1)
    {
        if (num2%2==0)
    {
        num2=num2/2;
        cout << " the next value is "<<num2;
    }
    else{
        num2 = num2 *3;
        num2 = num2 +1;
        cout <<" the next value is "<<num2;
    }
    steps ++;
    }
    cout <<" the next value is "<<num2 <<" number of steps are "<< steps;
    }
else {
    cout << " error happen "<<endl;
}
cout << endl;
break ;}
case 6 :
  {




// lab task 6 :
//
int a , b ;
int count = 2 , sum = 0 ;
cout << "Enter the value of integers ";

cin >> a>>b;
while ( a % b != 0)
{
    sum =  a+b ;
    cout << " sum is "<< sum << endl;

    cout << " enter two integers ";
    cin >> a>> b ;
    count = count +2;

}
 cout << " loop ended "<< endl;
  cout << " the total integers entered are "<< count <<endl;
break ;
  }

case 7 :
    {

// LAB TASK 7 ;

int N= 0 , integer = 0 , num_zero = 0;
cout << " Enter # of integer u want to enter ";
cin >> N;

 for ( int i=0 ; i < N ; i++ )
 {
    cout << " Input integers # "<< i+1<<endl;
    cin >> integer;
    if ( integer == 0)
    {
        num_zero ++;
    }

 }
 cout << " number of zeros "<<num_zero;
 cout <<endl;


break ;
}

default:
     cout <<" Invalid statement " <<endl;
}
     }while ( choice != 0 && choice !=8 );

    return 0;
}
