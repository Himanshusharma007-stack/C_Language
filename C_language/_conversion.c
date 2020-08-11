#include<stdio.h>                                               // km to miles
int main()                                                      // inches to foot
{  int a;                                                           //cms to inches
    float km,inch,cm,pound,inches;                              //pound to kgs
    printf("Enter your choice :\n");                            //inches to meters
    printf("1: for km to miles\n");                              
    printf("2: for inches to foot\n");
    printf("3: for cms to inches\n");
    printf("4: for pound to kgs\n");
    printf("5: for inches to meters\n");
    scanf("%d",&a); 

    switch (a)  
    {
    case 1:
        printf("Enter value you want to convert in miles ");
        scanf("%f",&km);
        printf("%0.0f km= %0.4f miles",km,km/1.609);
        break;
    case 2:
        printf("Enter value you want to convert in foot ");
        scanf("%f",&inch);
        printf("%0.0f inch= %0.4f feet",inch,inch/12);
        break;
    case 3:
        printf("Enter value you want to convert in inches ");
        scanf("%f",&cm);
        printf("%0.0f cms= %0.4f inches",cm,cm/2.54);
        break;
    case 4:
        printf("Enter value you want to convert in kgs ");
        scanf("%f",&pound);
        printf("%0.0f pound= %0.4f kgs",pound,pound/2.205);
        break;
    case 5:
        printf("Enter value you want to convert in meters ");
        scanf("%f",&inches);
        printf("%0.0f inches= %0.4f meters",inches,inches/39.37);
        break;

    default:
        printf("Choice is invalid ");
        break;
    }
    return 0;
}
                                                                                          
                                                                             