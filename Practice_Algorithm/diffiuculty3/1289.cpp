/*
1289. 원재의 메모리 복구하기
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV19AcoKI9sCFAZN&categoryId=AV19AcoKI9sCFAZN&categoryType=CODE

 < input >
10
01010101010101010101010101010101010101010101010101
01
1000110010011111010110000100100000000001001
10011010001110111010111010001100101101
00110101100001010000110010111
101111110101010100111100101111001
01110011110001110
1010101001010101010101010100111111
01010100010100101100111010100010111111011001011000
1111100101101110000
 
 
 
 < output >
#1 49
#2 1
#3 19
#4 23
#5 15
#6 19
#7 6
#8 27
#9 30
#10 8
 
 
 
 
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
    while( T < testSize ) {

        char tmpText[100] = "" ;
        scanf( "%s" , tmpText ) ;

        string str = string( tmpText ) ;

        char *text = new char[ str.length() + 1 ] ;
        strcpy( text , str.c_str() ) ;

        char *answer = new char[ str.length() + 1 ] ;

        for( int i = 0 ; i < str.length() ; i++ )
            answer[i] = '0' ;

        int cnt = 0 ;

        for( int i = 0 ; i < str.length() ; i++ ) {

            if( !strcmp( text , answer ) )
                break ;

            for( int j = i ; j < str.length() ; j++ ) {

                if( j == i ) {
                    if( text[i] == answer[j] )
                        break ;
                    else {
                        answer[j] = text[i] ;
                        cnt++ ;
                        continue ;
                    }
                }
                answer[j] = text[i] ;
            }
        }

        printf("#%d %d\n" , ( T + 1 ) , cnt ) ;

        T++ ;
    }

    return 0 ;
}
























