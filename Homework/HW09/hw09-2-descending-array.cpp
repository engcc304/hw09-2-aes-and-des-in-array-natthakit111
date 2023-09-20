/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/

#include <stdio.h>

int main() {
    int a[100] ;
    int n = 0 ;    
    int p ;

    while ( 1 ) {
        printf( "Input : ") ;
        scanf( "%d", &p ) ;

        if ( p  == -1 ) {
            break ;
        }//end if

        if ( n < 100 ) {
            a[n] = p ;
            n++ ;
        } else {
            printf( "อาเรย์เต็มแล้ว\n" ) ;
            break ;
        }//end if
    }//end while

    for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( a[i] > a[j] ) {
                int temp = a[i] ;
                a[i] = a[j] ;
                a[j] = temp ;
            }//end if
        }//end for
    }//end for

    printf( "0-99 : " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", a[i] ) ;
    }//end for
    printf( "\n" ) ;
 
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( a[i] < a[j] ) {
                int temp = a[i] ;
                a[i] = a[j] ;
                a[j] = temp ;
            }//end if
        }//end for
    }//end for
    printf( "99-0 : " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", a[i] ) ;
    }//end for
    printf( "\n" ) ;


    return 0 ;
}//end function
