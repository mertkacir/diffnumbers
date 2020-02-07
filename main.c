//
//  main.c
//  rakamdiff
//
//  Created by Mert Kacir on 7.02.2020.
//  Copyright © 2020 Ömer Kacır. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sayac=0;
    int a,b,c;
    int i;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(a!=b && a!=c && b!=c)
        {
            sayac++;
        }
    }
    printf("Sonuc=%d",sayac);
    return 0;
}
