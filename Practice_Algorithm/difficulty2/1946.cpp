/*
1946. 간단한 압축 풀기
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


int main() {


    int totalNum = 0 ;
    scanf("%d" , &totalNum ) ;

    int i = 0 ;
    while( i < totalNum ) {

        int num = 0 ;
        scanf("%d" , &num ) ;

        char ch[num] ;
        int cntArr[num] ;

        for( int j = 0 ; j < num ; j++ ) {
            cin >> ch[j] ;
            scanf( "%d" , &cntArr[j] ) ;
        }

        vector<char> result ;

        for( int j = 0 ; j < num ; j++ ) {
            for( int k = 0 ; k < cntArr[j] ; k++ ) {
                result.push_back( ch[j] ) ;
            }
        }

        cout << "#" << ( i + 1 ) << " " << endl ;
        for( int j = 0 ; j < result.size() ; j++ ) {

            if( j % 10 == 0 && j != 0 )
                cout << endl ;

            cout << result[j] ;
        }
        cout << endl ;

        i++ ;
    }

    return 0 ;
}










