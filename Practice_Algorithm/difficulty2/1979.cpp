/*
1979. 어디에 단어가 들어갈 수 있을까
https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PuPq6AaQDFAUq&categoryId=AV5PuPq6AaQDFAUq&categoryType=CODE

< input >
1
5 3
0 0 1 1 1
1 1 1 1 0
0 0 1 0 0
0 1 1 1 1
1 1 1 0 1  
 
 

< output >
#1 2
 
 
 
*/


#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std ;

int main() { 

	int totalNum = 0;
	cin >> totalNum ;

	int i = 0 ;
	while( i < totalNum ) { 

		int N = 0 , K = 0 ;
		cin >> N >> K ;

		int arr[N][N] ; 
		vector<int> A ;
		vector<int> B ;

		for( int j = 0 ; j < N ; j++ ) {
			for( int k = 0 ; k < N ; k++ ) {

				cin >> arr[j][k] ;
				A.push_back( arr[j][k] ) ;
			}
		}

		for( int j = 0 ; j < N ; j++ ) {
			for( int k = j + 1 ; k < N ; k++ ) {

				if( j != k ) {
					int temp = arr[j][k] ;
					arr[j][k] = arr[k][j] ;
					arr[k][j] = temp ;
				}
			}
		}

		for( int j = 0 ; j < N ; j++ ) {
			for( int k = 0 ; k < N ; k++ )
				B.push_back( arr[j][k] ) ;
		}

		int flag = 0 , cnt = 0 ;
		for( int j = 0 ; j < A.size() ; j++ ) {

			if( j % N == 0 )
				flag = 0 ;

			if( A[j] == 1 )
				flag++ ;
			else
				flag = 0 ;

			if( flag == K ) {
				if( ( j+1 ) % N == 0 ){
					cnt++ ;
					flag = 0 ;
				} else {
					if( A[ j + 1 ] != 1 ) {
						cnt++ ;
						flag = 0 ;
					}
				}
			}
		}
		flag = 0 ;
		for( int j = 0 ; j < B.size() ; j++ ) {

			if( j % N == 0 )
				flag = 0 ;

			if( B[j] == 1 )
				flag++ ;
			else
				flag = 0 ;

			if( flag == K ) {
				if( ( j+1 ) % N == 0 ){
					cnt++ ;
					flag = 0 ;
				} else {
					if( B[ j + 1 ] != 1 ) {
						cnt++ ;
						flag = 0 ;
					}
				}
			}
		}


		cout << "#" << ( i + 1 ) << " " << cnt << endl ;

		i++ ;
	}

	return 0 ;
}


	// int arr[4][4] = { 1, 2, 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 ,12 , 13 , 14 , 15 , 16 } ;

	// for( int i = 0 ; i < 4 ; i++ ) {

	// 	for( int j = 0 ; j < 4 ; j++ ) {

	// 		cout << arr[i][j] << " " ;
	// 	}
	// }
	// cout << endl ;

	// for( int i = 0 ; i < 4 ; i++ ) {

	// 	for( int j = i + 1 ; j < 4 ; j++ ) {

	// 		if( i != j ) {

	// 			int temp = arr[i][j] ;
	// 			arr[i][j] = arr[j][i] ;
	// 			arr[j][i] = temp ;
	// 		}
	// 	}
	// }

	// for( int i = 0 ; i < 4 ; i++ ) {

	// 	for( int j = 0 ; j < 4 ; j++ ) {

	// 		cout << arr[i][j] << " " ;
	// 	}
	// }
	// cout << endl ;







