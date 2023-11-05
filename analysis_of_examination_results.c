

#include <stdio.h>

int main(void) {

    int passes = 0;
    int failures = 0;
    int student = 1;


    while (student <= 10) {

        printf("%s", "Enter result, (1=pass, 2=fail): ");
        int result = 0;
        scanf("%d", &result);

        if (result == 1) {
            passes = passes +1;
        }
        else {
            failures = failures +1;
        }

        student = student +1;
    }

    printf("Passed %d\n", passes);
    printf("Failures %d\n", failures);

    if (passes > 6) {
        puts("Bonus to instructor!!!");
    }


}