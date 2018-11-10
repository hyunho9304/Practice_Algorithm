/*
2805. 농작물 수확하기
https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV7GLXqKAWYDFAXB&categoryId=AV7GLXqKAWYDFAXB&categoryType=CODE
*/

#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std ;

int main() {

    int testSize = 0 ;
    scanf("%d" , &testSize ) ;

    int T = 0 ;
    while( T++ < testSize ) {

        int size = 0 ;
        scanf("%d" , &size ) ;

        int **arr = new int*[ size ] ;
        for( int i = 0 ; i < size ; i++ )
            arr[i] = new int[ size ] ;

        for( int i = 0 ; i < size ; i++ )
            

        for( int i = 0 ; i < size ; i++ ){
            for( int j = 0 ; j < size ; j++ )
                cout << arr[i][j] << " " ;
            cout << endl ;
        }

    }
    return 0 ;
}



















