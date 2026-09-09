#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// YOUR CODE HERE
    scanf("%d",&motorCount);
    scanf("%d",&totalPackageWeight);
    int totalMotorCapacity = motorCount*MOTOR_CAPACITY;
    if(totalMotorCapacity>=totalPackageWeight){
        printf("Yes! The conveyor belt can carry the packages.");
    }else{
        printf("No. The conveyor belt cannot carry the packages.");
    }
}
