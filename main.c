/*The purpose of this program is asking the user for the time, when it's received, the program checks if it's morning,
 * afternoon  or evening and sends a greeting according to the time.
 *
 * Author: Angel Daniel Olvera Perales
 * Date: August 27, 2018
 * email: angelolvera00@gmail.com
 */
#include <stdio.h>

int main() {
//Variable that will store the time
    unsigned int hour;
//The program asks the user to give it the time
    printf("Enter the current time: ");
    scanf("%u", &hour);
//The program will analyze and answer accordingly
    if ((hour < 0) || (hour > 23)) {
        printf("Not valid");
        // If the given time is not valid, the program will tell you that it's invalid
    } else{
        // If the time IS valid, it will answer accordingly
        if ((hour >= 2) && (hour < 12)) {
            printf("Good Morning!");
        } else if ((hour >= 12) && (hour < 19)) {
            printf("Good Afternoon!");
        } else if ((hour >= 19) && (hour < 22)) {
            printf("Good Evening!");
        }else{
            printf("Good Night!");
        }
    }

    return 0;
}