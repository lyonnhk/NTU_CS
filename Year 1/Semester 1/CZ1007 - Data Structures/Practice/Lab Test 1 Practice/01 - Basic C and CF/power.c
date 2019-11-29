#include <stdio.h>

int main(){
    float currentInput;
    float resistanceInput;
    float powerLoss;

    printf("Enter the current: \n");
    scanf("%f", &currentInput);
    printf("Enter the resistance: \n");
    scanf("%f", &resistanceInput);

    powerLoss = pow(currentInput, 2)*resistanceInput;

    printf("The power loss: %.2f \n", powerLoss);
    return 0;
}