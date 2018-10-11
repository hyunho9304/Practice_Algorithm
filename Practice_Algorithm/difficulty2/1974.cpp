/*
1974. 스도쿠 검증
https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Psz16AYEDFAUq&categoryId=AV5Psz16AYEDFAUq&categoryType=CODE

< input >
1
7 3 6 4 2 9 5 8 1
5 8 9 1 6 7 3 2 4
2 1 4 5 8 3 6 9 7
8 4 7 9 3 6 1 5 2
1 5 3 8 4 2 9 7 6
9 6 2 7 5 1 8 4 3
4 2 1 3 9 8 7 6 5
3 9 5 6 7 4 2 1 8
6 7 8 2 1 5 4 3 9
 
 

< output >
#1 1
 
 
*/


#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std ;

int arr[9][9] ;

int main() {

	int totalNum = 0 ;
	cin >> totalNum ;

	int i = 0 ;
	while( i < totalNum ) { 

		for( int j = 0 ; j < 9 ; j++ ) {
			for( int k = 0 ; k < 9 ; k++ )
				cin >> arr[j][k] ;
		}

		int answerArr[9] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
		vector<int> answerVec( answerArr , answerArr + 9 ) ;

		vector<int> A ;
		vector<int> B ;

		vector<int> vec1 ;
		vector<int> vec2 ;
		vector<int> vec3 ;
		vector<int> vec4 ;
		vector<int> vec5;
		vector<int> vec6 ;
		vector<int> vec7 ;
		vector<int> vec8 ;
		vector<int> vec9 ;

		vector<vector<int>> asdf = { vec1 , vec2 , vec3 , vec4 , vec5 , vec6 , vec7 , vec8 , vec9 } ;

		int flag = 0 ;

		for( int j = 0 ; j < 9 ; j++ ) {
			A.clear() ;
			for( int k = 0 ; k < 9 ; k++ )
				A.push_back( arr[j][k] ) ;

			sort( A.begin() , A.end() ) ;
			if( A != answerVec ) {
				flag = -1 ;
				break ;
			}
		}

		if( flag != -1 ) {

			for( int k = 0 ; k < 9 ; k++ ) {
				B.clear() ;
				for( int j = 0 ; j < 9 ; j++ )
					B.push_back( arr[j][k] ) ;

				sort( B.begin() , B.end() ) ;
				if( B != answerVec ) {
					flag = -1 ;
					break ;
				}
			}
		}

		if( flag != -1 ) {

			for( int j = 0 ; j < 9 ; j++ ) {
				for( int k = 0 ; k < 9 ; k++ ) {

					int a = j / 3 ;
					switch( a ) {
						case 0 : {
							int b = k / 3 ;
							switch( b ) {
								case 0 : {
									vec1.push_back( arr[j][k] ) ; break ;
								}
								case 1 : {
									vec2.push_back( arr[j][k] ) ; break ;
								}
								case 2 : {
									vec3.push_back( arr[j][k] ) ; break ;
								}
								default :
									break ;
							}
							break ;
						}
						case 1 : {
							int b = k / 3 ;
							switch( b ) {
								case 0 : {
									vec4.push_back( arr[j][k] ) ; break ;
								}
								case 1 : {
									vec5.push_back( arr[j][k] ) ; break ;
								}
								case 2 : {
									vec6.push_back( arr[j][k] ) ; break ;
								}
								default :
									break ;
							}
							break ;
						}
						case 2 : {
							int b = k / 3 ;
							switch( b ) {
								case 0 : {
									vec7.push_back( arr[j][k] ) ; break ;
								}
								case 1 : {
									vec8.push_back( arr[j][k] ) ; break ;
								}
								case 2 : {
									vec9.push_back( arr[j][k] ) ; break ;
								}
								default :
									break ;
							}
							break ;
						}
						default :
							break ;
					}
				}
			}
		}

		sort( vec1.begin() , vec1.end() ) ;
		sort( vec2.begin() , vec2.end() ) ;
		sort( vec3.begin() , vec3.end() ) ;
		sort( vec4.begin() , vec4.end() ) ;
		sort( vec5.begin() , vec5.end() ) ;
		sort( vec6.begin() , vec6.end() ) ;
		sort( vec7.begin() , vec7.end() ) ;
		sort( vec8.begin() , vec8.end() ) ;
		sort( vec9.begin() , vec9.end() ) ;

		if( vec1 != answerVec )
			flag = -1 ;
		if( vec2 != answerVec )
			flag = -1 ;
		if( vec3 != answerVec )
			flag = -1 ;
		if( vec4 != answerVec )
			flag = -1 ;
		if( vec5 != answerVec )
			flag = -1 ;
		if( vec6 != answerVec )
			flag = -1 ;
		if( vec7 != answerVec )
			flag = -1 ;
		if( vec8 != answerVec )
			flag = -1 ;
		if( vec9 != answerVec )
			flag = -1 ;


		cout << "#" << ( i + 1 ) << " " ;
		if( flag != -1 )
			cout << 1 << endl ;
		else
			cout << 0 << endl ;

		vec1.clear() ;
		vec2.clear() ;
		vec3.clear() ;
		vec4.clear() ;
		vec5.clear() ;
		vec6.clear() ;
		vec7.clear() ;
		vec8.clear() ;
		vec9.clear() ;

		i++ ;
	}

	return 0 ;
}















