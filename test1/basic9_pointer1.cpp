#include <iostream>
#include <cmath>

using namespace std;


void update(int *a,int *b) {
    // Complete this function    
    // pa = pointer = pb
    // a = pointer = b
    // *a = *a + *b;
    // *b = abs(*a - *b);
    int* temp_a = a;
    int* temp_b = b;

    int temp_sum = *temp_a + *temp_b;
    int temp_sub = abs(*temp_a - *temp_b);
    
    *a = temp_sum;
    *b = temp_sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}