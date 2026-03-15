//#include <iostream>
//
//using namespace std;
//
//// SIMPLE FORM :
////int List[5];
//// int i;
////
// for ( i = 0 ; i < 5 ; i ++)
// {
//     cout <<" The digits are "<<i <<endl;
//
//     cin >> List[i];
//
// }
//for ( int i = 0 ; i < 5 ; i ++)
//    cout << List[3]<<endl;
//    cout << endl;
//
//
//
//
//
//    return 0;
//}
//
//int Size = 5 ;
//
//int List[Size];
// int i;
//
// for ( i = 0 ; i < Size ; i ++)
// {
//     cout <<" The digits are "<<i <<endl;
//
//     cin >> List[i];
//
// }
//for ( int i = 0 ; i < Size ; i ++)
//    cout << List[3]<<endl;
//    cout << endl;
//
//    return 0;
//}


// TO FIND A LARGEST AND SUM AND AVERAGE :
//

//double sales[5];
//double largestsale, sum , average ;
//
//for ( int index = 0 ; index < 5; index ++)
//{
//    cin >> sales[index];
//}
//for( int index =0 ; index < 5 ; index++)
//{
//    cout << sales[index] <<endl;
//}
//
//for ( int index =0 ; index < 5 ; index++)
//{
//  sum = sum + sales[index];
//}
//cout <<" Sum is = "<< sum <<endl;
//int maxindex = 0 ;
//
//for ( int index =0 ; index < 5 ; index ++)
//{
//    if( sales[maxindex] < sales[index])
//        maxindex = sales[index] ;
//
//}
//cout <<" MAX Index = "<< maxindex<<endl;
// return 0 ;
// }


//

//double sales[5];
//double largestsale, sum , average ;
//
//for ( int index = 0 ; index < 5; index ++)
//{
//    cin >> sales[index];
//}
//for( int index =0 ; index < 5 ; index++)
//{
//    cout << sales[index] <<endl;
//}
//
//for ( int index =0 ; index < 5 ; index++)
//{
//  sum = sum + sales[index];
//}
//cout <<" Sum is = "<< sum <<endl;
//int maxindex = 0 ;
//int minindex = 0;
//for ( int index =0 ; index < 5 ; index ++)
//{
//    if( sales[maxindex] < sales[index])
//        maxindex = index ;
//    if( sales[ minindex]  > sales[index])
//        minindex = index ;
//
//}
//cout <<" MAX Index = " << maxindex[sales]<<endl;
//cout <<" Min Index = " << minindex[sales]<<endl;
//
// return 0 ;
// }


// VALUE EXCHANGE :

//int Mylist[] = { 0,2,4 ,6 ,8 };
//int Yourlist[5];
// for ( int i = 0 ; i < 5 ; i ++)
// {
//     Yourlist[i]= Mylist[i];
//     cout << Yourlist[i]<<endl;
//
// }
//return 0 ;
//}


//// SIMPLE ARRAY WITH FUNCTIONS :


//void PrintArray( int arr[], int Size)
//{
//    for(int i =0 ; i< Size ; i++)
//        cin >> arr[i];
//
//}
//int SumArray( int arr[], int Size)
//{
//
//    int sum =0 ;
//    for(int i =0 ; i< Size ; i++)
//        sum = sum + arr[i];
//return sum ;
//
//}
//
//
//int main ()
//{
//    int Numbers[]= {2,4,6,8,10};
//    int Size = 5 ;
//
//    PrintArray(Numbers , Size);
//
//    int Result = SumArray( Numbers , Size);
//
//    cout <<" The Result is About "<< Result<< endl;
//    return 0 ;
//
//}

// SIMPLE ARRAY WITH FUNCTIONS :
//
//void PrintArray( int arr[], int Size)
//{
//    for(int i =0 ; i< Size ; i++)
//        cin >> arr[i];
//
//}
//int SumArray( int arr[], int Size)
//{
//
//    int sum =0 ;
//    for(int i =0 ; i< Size ; i++)
//        sum = sum + arr[i];
//return sum ;
//
//}
// void printArray(const int list[], int listSize)
// {
// for (int index = 0; index < listSize; index++)
// cout << list[index] << " ";
// }
//int main ()
//{
//
//     int Numbers[]= {2,4,6,8,10};
//    int Size = 5 ;
//
//    PrintArray(Numbers , Size);
//
//    int Result = SumArray( Numbers , Size);
//
//    cout <<" The Result is About "<< Result<< endl;
//    cout << Numbers[3];
//
//
//    return 0 ;
//
//}
//

// CONST RELATED PROBLEMS :


//
//int SumArray(   const int arr[], int Size)
//{
//    int sum =0 ;
//    for(int i =0 ; i< Size ; i++)
//        sum = sum + arr[i];
//
//    return sum ;
//
//}
//
//int main ()
//{
//
//     int Numbers[]= {2,4,6,8,10};
//    int Size = 5 ;
//
//    int Result = SumArray( Numbers , Size);
//
//    cout <<" The Result is About "<< Result<< endl;
//    cout << Numbers[3];
//
//
//    return 0 ;
//
//}
//

//  SEQUENTAIL FINDINGS :
//int main()
//{
////
//int Numbers[]= { 2,4 ,6 ,8 ,10 };
//int Size = 5 ;
//
//int Target ;
//cout <<" Enter the Target You want to Check "<<endl;
//cin >> Target ;
//
//bool found = false ;
//int index = -1 ;
//
//for ( int i = 0 ; i < Size ; i++ ){
//    if(Numbers[i] == Target){
//    found = true ;
//    index = i ;
//
//    break ;
//    }
//}
//
//    if( found )
//        cout <<Target <<" Found in Index"<< index<<endl;
//        else
//    cout <<Target<< " Not found in index "<< index<<endl;
//
//return 0 ;
//}


// AUTO DECLERATION TYPE :
//
//int Numbers[] = { 2,4,6 ,8,10};
//cout <<" Array Elements "<<endl;
//for (auto value : Numbers)
//{
//    cout << value <<endl;
//
//}
//return 0 ;
//}




// SWAPPING HAPPENING : NEED TO UNDERSTAND IT ::
//
//int main()
//{
//    int Numbers[]={ 2, 4, 10 , 5 , 1};
//    int Size = 5 ;
//
//    for( int i = 0 ; i < Size - 1 ; i++){
//        int minindex = i ;
//
//    for(int j = i+1 ; j < Size ; j++)
//    {
//         if( Numbers[j]< Numbers[minindex])
//            minindex= j ;
//
//    }
//        int temp = Numbers[i];
//        Numbers[i]=Numbers[minindex];
//        Numbers[minindex]= temp ;
//    }
//
//        for( int i = 0 ; i < Size ; i++)
//        {
//            cout << Numbers[i]<<endl;
//            cout << endl;
//
//        }
//        return 0 ;
//}
//


//
//  2D ARRAYS :

//
//int main ()
//{
// const int Number_of_rows = 3;
// const int Number_of_columns = 3;
//
// int matrix[Number_of_rows][Number_of_columns]={ {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}};
//
// int largest = 0 ;
// // assign zero to both :
//
//// for( int i=0 ; i < Number_of_rows ; i++ )
////    {
////    for ( int j = 0 ; j< Number_of_columns ; j ++)
////    matrix[Number_of_rows][Number_of_columns]=0;
//// cout << " Values = "<< matrix[Number_of_rows][Number_of_columns]<<endl;
//// }
//
//// Initialize the value :
//
////int row = 2 ;
////
////for ( int i = 0 ; i < Number_of_columns ; i++)
////    cin >> matrix[row][i];
//
//    // To find the sum ;
////int row = 2;
////    for( int i = 0 ; i < Number_of_columns ; i++)
////        sum = sum + matrix[row][i];
////
////    cout << " sum is "<<sum <<endl;
////
////
////return 0 ;
////}
//
////  FIND SUM BY COLUMNS :
// int sum =0 ;
// for ( int col = 0 ; col < Number_of_columns ; col++)
// {
//
//
//     for ( int row = 0 ; row < Number_of_rows ; row ++)
//      sum = sum + matrix[row][col];
//
//      cout <<" sum ="<<sum <<endl;
// }
//
//
//return 0 ;
//}
//
//
//{{1,2,3},{4,5,6},{7,8,9}};

// SIMPLE INPUT AND OUTPUT OF 2D ARRAYS :
// int main()
// {
//     int matrix[3][3];
//
//     cout <<" Enter 9 Elements "<<endl;
//
//     for( int row =0 ; row < 3 ; row++)
//     {
//         for( int col =0 ; col < 3 ; col ++)
//            cin >>matrix[row][col];
//     }
//
//      cout <<" output is Here"<<endl;
//
//        for( int row = 0 ; row < 3 ; row++)
//     {
//         for( int col = 0 ; col < 3 ; col ++)
//            cout << matrix[row][col] ;
//            cout << endl;
//     }
//  return 0 ;
//
// }


//  FIND SUM :
// int main()
// {
//     int matrix[3][3];
//
//     cout <<" Enter 9 Elements "<<endl;
//
//     for( int row =0 ; row < 3 ; row++)
//     {
//         for( int col =0 ; col < 3 ; col ++)
//            cin >>matrix[row][col];
//     }
//
//      cout <<" output is Here"<<endl;
//
//      int sum =0 ;
//
//
//        for( int row = 0 ; row < 3 ; row++)
//     {
//         for( int col = 0 ; col < 3 ; col ++){
//            sum = sum + matrix[row][col];
//            cout << matrix[row][col] ;
//            cout << endl;
//     }
//     }
//      cout <<" Sum is Here "<<sum ;
//
//
//  return 0 ;
//
// }

// SUM BY ROW :
// int main()
// {
//     int matrix[3][3];
//
//     cout <<" Enter 9 Elements "<<endl;
//
//     for( int row =0 ; row < 3 ; row++)
//     {
//         for( int col = 0 ; col < 3 ; col ++)
//            cin >>matrix[row][col];
//     }
//
//      cout <<" output is Here"<<endl;
//
//      int sum = 0 ;
//
//
//     int  row = 2 ;
//         for( int col = 0 ; col < 3 ; col ++){
//           // sum = sum + matrix[row][col];
//            cout << matrix[row][col] ;
//            cout << endl;
//     }
//
//     // SUMM Y COLUMN :
//
//     int  col = 2 ;
//         for( int row = 0 ; row < 3 ; row ++){
//            sum = sum + matrix[row][col];
//            cout << matrix[row][col] ;
//            cout << endl;
//     }
//
//      cout <<" Sum is Here "<<sum ;
//
//
//  return 0 ;
//
// }
//
 // find the LARGEST :
//  int main()
// {
//     int matrix[3][3];
//
//     cout <<" Enter 9 Elements "<<endl;
//
//     for( int row =0 ; row < 3 ; row++)
//     {
//         for( int col =0 ; col < 3 ; col ++)
//            cin >>matrix[row][col];
//     }
//
//      cout <<" output is Here " <<endl;
//
//      int sum =0 ;
//      int largest;
//     for( int row = 0 ; row < 3 ; row ++){
//             largest = matrix[row][0];
//
//         for( int col = 1 ; col < 3 ; col ++){
//           if( largest < matrix[row][col])
//           largest = matrix[row ][ col ];
//         }
//       cout <<" largest "<<largest<<endl;
//     }
//
//  return 0 ;
//
// }
//
//
//void Printmatrix( int Array[][3], int listsize)
//{
//    int row , col ;
//    int sum = 0 ;
//
//    for( row = 0 ; row < 3 ; row ++ )
//        {
//        for( col = 0 ; col < 3 ; col++)
//        {
//          sum = sum + Array[row][col];
//        cout <<" Sum is = "<<sum <<endl;
//
//        }
//
//        }
//}
//
//int main ()
//{
//    const int Number_of_row=3;
//         const int Number_of_column =3 ;
//         int matrix[Number_of_row][Number_of_column]={{1,2,3},{4,5,6},{7,8,9}};
//
//         int listsize = 3 ;
//
//       Printmatrix(matrix, listsize);
//
//         return 0 ;
//
//
//}

// LARGEST IN FUNCTION :

//
//void Printmatrix( int Array[][3], int listsize)
//{
//    int row , col ,largest ;
//    int sum = 0 ;
//
//    for( row = 0 ; row < 3 ; row ++ ){
//        largest = Array[row][0];
//
//
//        for( col = 0 ; col < 3 ; col++)
//        {
//          sum = sum + Array[row][col];
//          if( largest < Array[row][col] )
//            largest = Array[row][col];
//
//        cout <<" Sum is = "<<sum <<endl;
//
//        }
// cout <<" The largest in row is "<<largest<<endl;
//        }
//}
//
//int main ()
//{
//    const int Number_of_row=3;
//         const int Number_of_column =3 ;
//         int matrix[Number_of_row][Number_of_column]={{1,2,3},{4,5,6},{7,8,9}};
//
//         int listsize = 3 ;
//
//       Printmatrix(matrix, listsize);
//
//         return 0 ;
//
//}
//
//
//
//#include <iostream>
//using namespace std;
//
//const int ROWS = 3;
//const int COLS = 4;
//
//// --- Function to input a 3x4 matrix ---
//void inputMatrix(int A[][COLS]) {
//    cout << "Enter elements of a 3x4 matrix:\n";
//    for (int r = 0; r < ROWS; r++)
//        for (int c = 0; c < COLS; c++)
//            cin >> A[r][c];
//}
//
//// --- Function to print original or transposed matrix ---
//void printMatrix(int R, int C, int M[][ROWS]) {
//    for (int r = 0; r < R; r++) {
//        for (int c = 0; c < C; c++)
//            cout << M[r][c] << " ";
//        cout << endl;
//    }
//}
//
//// --- Function to compute transpose (3x4 → 4x3) ---
//void transpose(int A[][COLS], int T[][ROWS]) {
//    for (int r = 0; r < ROWS; r++)
//        for (int c = 0; c < COLS; c++)
//            T[c][r] = A[r][c];
//}
//
//// --- MAIN PROGRAM ---
//int main() {
//    int Matrix[ROWS][COLS];
//    int Transpose[COLS][ROWS];   // 4x3 result
//
//    // Input
//    inputMatrix(Matrix);
//
//    // Transpose
//    transpose(Matrix, Transpose);
//
//    // Output original
//    cout << "\nOriginal Matrix (3x4):\n";
//    printMatrix(ROWS, COLS, (int (*)[ROWS])Matrix); // cast for print
//
//    // Output transpose
//    cout << "\nTranspose Matrix (4x3):\n";
//    printMatrix(COLS, ROWS, Transpose);
//
//    return 0;
//}

#include<iostream>
using namespace std;
int main()
{
    int a[2]={0};
    cout<<a[0];
}















