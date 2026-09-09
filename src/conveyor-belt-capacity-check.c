#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// YOUR CODE HERE
    scanf("%d",&motorCount);
    scanf("%d",&totalPackageWeight);
    int totalMotorCapacity = motorCount*MOTOR_CAPACITY;
    if(totalMotorCapacity>=totalPackageWeight){
        printf("We have plenty of space");
    }else{
        printf("we do not have enough motors");
    }
}
