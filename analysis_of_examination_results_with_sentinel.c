

#include <stdio.h>

int main(void) {

    int passes = 0;
    int failures = 0;
    int student = 0;

    printf("Enter result, (1=pass, 2=fail, -1=ESC): ");
    int result = 0;
    scanf("%d", &result);

    
    while (result != -1) {

        if (result == 1) {
            passes = passes +1;
        }
        else {
            failures = +1;
        }

        student = student +1;

        printf("Enter result, (1=pass, 2=fail, -1=ESC): ");
        scanf("%d", &result);

    }

    if (passes && failures != 0){

        printf("Passed %d\n", passes);
        printf("Failed %d\n", failures);
    }
    else {

        printf("No results were entered");

    }

    if (passes > 5) {
        puts("Bonus to instructor!!!1!!");
    }

}