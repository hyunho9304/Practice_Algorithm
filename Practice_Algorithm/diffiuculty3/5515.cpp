/*
5515. 2016년 요일 맞추기 D3
https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWWOwecaFrIDFAV4&categoryId=AWWOwecaFrIDFAV4&categoryType=CODE
*/


#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std ;

int main() {

    int maxDate[12] = [ 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 ] ;
    int firstDayOfMonth[12] = { 0 } ;

    for( int i = 0 ; i < 12 ; i++ ) {

        if( i == 0 )
            firstDayOfMonth[i] = 4 ;
        else {

            firstDayOfMonth[i] = ( maxDate[i-1] + 1 ) / 7
        }

    }
}











