#include <iostream>
#include <fstream >
using namespace std;

int main(){
string data;

ofstream outputfile("data.txt",ios::app);
if(!outputfile.is_open()){
    cout<<"file not open";
}
else{
    outputfile<<"comsat";
}

outputfile.close();


ifstream inputfile("data.txt");
if(!inputfile.is_open()){
    cout<<"file not open"<<endl;
}
else{
    getline(inputfile,data);
    cout<<data;
}
inputfile.close();
}
















// PRACTICE 1
//
//int main ()
//{
//    int Array[4] = { 2 , 4, 6 ,8 };
//    cout << Array << " "<< &Array[0]<< endl;
//    cout << *Array  <<" "<< *(Array+2)<< endl;
//
//    int *ptr = Array ;
//    cout << Array[2]<<" " << ptr[2] << endl;
//
//}


//void incr( int  *n)
//{
//     *n = *n + 1 ;
//}


// ---------------

//void Digit( int *Array)
//{
//    for ( int i = 0 ; i < 5 ; i++)
//        Array[i]= 2 * Array[i];
//
//}

// ---------------------;
//void swapping(int *p1 , int *p2 )
//{
//    int temp = *p1;
//    *p1 = * p2 ;
//    * p2 = temp ;
//
//}
//int main()
//{

    // First one :

//  int num = 10 ;
//  int *ptr = &num ;
//  cout << ptr <<endl;


  // Second one :

//  int num = 15 ;
//   int *ptr = & num ;
//   cout << * ptr << endl;

// Going to Arrays :

//int Array[5 ]= { 2 , 4 ,6, 8, 10 };
//int * ptr = & Array[3 ];
//cout << ptr << endl;


//int Array[5 ]= { 2 , 4 ,6, 8, 10 };
//int * ptr = & Array[3 ];
//cout <<* ptr << endl;

//
//int Array[5 ]= { 2 , 4 ,6, 8, 10 };
//int * pointer = Array;
//
//cout <<Array  << endl;
//cout <<Array + 0   << endl;
//cout <<&Array[0]  << endl;
//cout <<pointer  << endl;
//
//
//cout << Array + 1 <<endl;
//cout <<&Array[1]  << endl;
//
//
//cout <<*Array  << endl;
//cout <<*Array + 0   << endl;
//cout << * &Array[0]  << endl;
//cout << * pointer  << endl;



// -------------------------
//
//int Array[5]= { 2 ,4,6,8,10 };
//int * ptr = Array ;
//// ===== Value:
//
////for ( int  i = 0 ; i < 5 ; i ++ )
////    {
////    cout << ptr[i]<<endl;
////    cout << * (ptr + i )<<endl;
////    }
//// ---------- For Address :
////
////for (int  i = 0 ; i < 5 ; i++ )
////    {
////    cout << *ptr<<endl;
////    ptr++;
//
//// just like ... Array + 1 and so on ;
//    //}
//    for ( int  i = 0 ; i < 5 ; i ++ )
//    {
//    cout << ptr[i]<<endl;
//    cout << ptr +  i <<endl;
//    }
//
//
//
//ptr = ptr + 3 ;
//cout << * ptr <<endl;
//ptr = ptr - 2 ;
//cout <<
//

//-----------WORK :

//char name = 'A';
//char *ptr = &name ;
//cout << (void*)ptr <<endl;

// ---------- FUNCTIONS WITH POINTERS :
//
//int num = 10 ;
// int temp = num ;
//  incr( &num );
//  cout << num <<endl;

//---------VALUR CHANGING :


//  int Array [5] = { 2 ,2, 4, 6,7};
//  Digit(Array);
//  for( int i=0 ; i < 5 ; i++)
//  {
//      cout << Array[i]<<endl;
//
//  }

// When changing the value we have to use amperSand :

//int first = 10 ;
//int second = 20 ;
//swapping(&first, &second);
//
//cout <<" The swapping is happening here "<<endl;
//
//cout << first<<" " << second <<endl;



//struct EmployeeType
//{
//    string Name ;
//    int Id ;
//    double Salary ;
////
////};
//int main ()
//{
//    EmployeeType person ;
//     cout <<" The Name of the Employee is :"<<endl;
//
//    cin >> person.Name;
//     cout <<" The Id of the Employee is :"<<endl;
//
//    cin >> person.Id;
//     cout <<" The Salary of the Employee is :"<<endl;
//
//     cin >> person.Salary;
//
//
//     cout <<" The Information of the Employee is Here "<<endl;
//     cout <<" The Name of the Employee is :"<<person.Name<<endl;
//      cout <<" The Id of the Employee is :"<<person.Id<<endl;
//       cout <<" The Salary of the Employee is :"<<person.Salary<<endl;

//    return 0;
//}


// PRACTICE NO 2 :
//
//struct book
//{
//
//    int book_id;
//    string book_name;
//    float book_price ;
//
//};
//
//void displaybook(book b123);
//void Updatebook ( book &b123);
//int main ()
//{
//    book b1 = { 1 , " C++ is Great", 4500 };
//    cout << b1.book_id<<endl;
//    b1.book_name = " C++ is Best ";
//
//    cout << b1.book_name << endl;
//    book b2 = b1 ;
//
//    cout <<b2.book_name<< "\n";
//
//    if( b2.book_price > b1 .book_price)
//        cout << " b2 "<< endl;
//    displaybook(b1 );
//    Updatebook(b1);
//     displaybook(b1 );
//    return 0 ;
//
//}
//void displaybook(book b123)
//{
//    cout << b123.book_name<< endl;
//
//
//
//    if ( b123 .book_price > 1000 )
//        cout <<" Too expensive . "<< b123.book_price<< endl;
//    else
//        cout << " Too Cheap "<< b123.book_price<< endl;
//
//}
//void Updatebook ( book &b123)
//{
//    b123.book_name = b123.book_name +"!";
//    b123.book_price  += 100 ;
//
//}
//
//


// PRACTICE NO 3 ;
//struct EmployeeType
//{
//    string Firstname ;
//    string lastname ;
//    int Address1 ;
//    int address2 ;
//    string phone ;
//    string fax ;
//
//};

//struct NameType
//{
//    string Firstname;
//    string Lastname ;
//
//};
//
//struct AddressType
//{
//    int Address1 ;
//    int Address2 ;
//
//};
//
//struct ContactType
//{
//    string phone ;
//    string fax ;
//
//};
//
//struct EmployeeType
//{
//    NameType Name ;
//    AddressType Address ;
//    ContactType Contact ;
//
//};
//
//
//
//int main()
//{
//EmployeeType newemployee;
//
//    cout <<" Here i enter the name : "<< endl;
//    cin >> newemployee.Name.Firstname ;
//    cout << " Name "<< newemployee.Name.Firstname <<endl;
//
//}
//
//struct NameType
//{
//    string Firstname;
//    string Lastname ;
//
//};
//int main  ()
//{
// NameType Name ;
// Name.Firstname = " muffaser ";
// Name.Lastname = " Naeem ";
//
//
//
// NameType *ptr = &Name ;
//
// cout << ptr->Firstname;

//}



// FILE HANDLING :
// int main ()
// {
// WRITE A DATA :
//
//    ofstream outfile("fout.txt");
//
//    outfile << " Hello World !"<< endl;
//
//    outfile.close();
//
//    cout << " data is stored Successfully "<< endl;
//
//// READ A FILE :
//
//ifstream infile ("fout.txt");
//string line ;
//
//cout <<" Reading a file "<< endl;
//
//while( getline(infile,line))
//       {
//          cout << line << endl;
//       }
//
//infile.close();

    // second one :

//write :

//fstream infile( "mix.txt ", ios::out );
//infile<< " Hello File "<< endl;
//infile.close();
//
//// Read ;
//
//infile.open( "mix.txt" , ios::in);
// string line ;
//
// while ( getline(infile , line  )){
//cout << " Line "<< endl;
// }
// infile.close();











