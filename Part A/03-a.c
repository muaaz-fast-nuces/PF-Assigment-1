#include <stdio.h>

int main(){ 
    int age;
    char eye_test, written_test , driving_test , medical_certificate;

    printf("Enter your age : \n");
    scanf("%i",&age);

    if(age>=18){
        printf("Enter your eyesight exam test result : passed[P] or failed[F] : \n");
        scanf(" %c",&eye_test);
        if (eye_test=='P'){
            printf("Enter your written exam test result : passed[P] or failed[F] : \n");
            scanf(" %c",&written_test);
            if (written_test=='P'){
                printf("Enter your written driving test result : passed[P] or failed[F] : \n");
                scanf(" %c",&driving_test);
                if (driving_test=='P'){
                    if(age>60){
                        printf("Do you have Medical fitness certificate : Yes[Y] or No[N] : \n");
                        scanf(" %c",&medical_certificate);
                        if (medical_certificate == 'Y'){
                            printf("You are eligible for driving license\n");
                            return 0;
                        }
                    }
                    else{
                        printf("You are eligible for driving license\n");
                        return 0;
                    }
                }
            }

        }
    }
    
    printf("You are not eligible for the driving license.\n");

    return 0;
}