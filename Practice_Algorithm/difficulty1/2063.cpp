/*
2063. 중간값 찾기
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPsXKA2UDFAUq&categoryId=AV5QPsXKA2UDFAUq&categoryType=CODE

< input >
199
85 72 38 80 69 65 68 96 22 49 67 51 61 63 87 66 24 80 83 71 60 64 52 90 60 49 31 23 99 94 11 25 24 51 15 13 39 67 97 19 76 12 33 99 18 92 35 74 0 95 71 39 33 39 32 37 45 57 71 95 5 71 24 86 8 51 54 74 24 75 70 33 63 29 99 59 94 52 13 35 99 46 57 71 23 17 3 94 48 77 18 83 11 83 25 59 62 2 78 86 7 94 65 80 32 39 84 60 65 72 61 58 84 8 72 12 19 47 49 49 59 71 52 34 22 21 20 92 33 80 39 74 9 28 97 100 93 29 25 4 66 79 81 98 21 91 62 82 4 59 100 34 1 51 80 92 69 77 39 38 97 51 34 35 19 22 1 67 9 90 31 82 11 51 84 78 70 74 42 100 88 53 80 57 62 32 51 48 63 92 46 4 61 31 98 69 52 88 20

< output >
58
 
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std ;

int main() {

	int size = 0 ;
	scanf( "%d" , &size ) ;

	int getMiddleIndex = ( size / 2 ) ;

	int *numArr = new int[ size ] ;

	for( int i = 0 ; i < size ; i++ ) {

		int num = 0 ;
		scanf( "%d" ,&num ) ;

		numArr[i] = num ;
	}

	sort( numArr , numArr + size ) ;
	printf( "%d\n" , numArr[ getMiddleIndex ] ) ;

	return 0 ;

}


