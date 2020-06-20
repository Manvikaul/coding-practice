//hackerrank-cpp
//You have to complete the function void update(int *a,int *b), which reads two integers as argument, 
//and sets  with the sum of them, and  with the absolute difference of them.

#include <stdio.h>
#include<iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    int c=*a;   
    *a=(*a)+(*b);
    *b=abs((c)-(*b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
