#include <stdio.h>

int main() {
    int principal, rate, years;
    float interest, total_amount, discount, final_settlement;
    
    scanf("%d %d %d", &principal, &rate, &years);

    
    interest = (principal * rate * years) / 100.0;
    printf("%.2f\n", interest);

    total_amount = principal + interest;
    printf("%.2f\n", total_amount);


    discount = interest * 2 / 100;
    printf("%.2f\n", discount);

    final_settlement = total_amount - discount;
    printf("%.2f\n", final_settlement);

    return 0;
}

