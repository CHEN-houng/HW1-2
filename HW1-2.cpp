﻿#define _AFXDLL
#include <iostream>
#include <afx.h>
using namespace std;

INT FibonacciSeries( INT nInputNumber )
{
   if( nInputNumber == 1 or nInputNumber == 2){
       return 1;
   }
   if (nInputNumber >= 3) {
       return FibonacciSeries(nInputNumber - 1) + FibonacciSeries(nInputNumber - 2);
   }    
}

INT main( void )
{
    for( INT i = 1; i < 21; i++ ) {
        cout << "Item:\t" << i << "\t" << FibonacciSeries( i ) << endl;
    }
    return 0;
}

