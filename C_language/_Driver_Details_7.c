#include <stdio.h>              //Travel Agency Manager
struct driver
{  
    char name[34];
    char dlno[45];
    char route[40];
    int kms;
};

int main()
{
    struct driver d1,d2,d3;
    printf("******Enter the details of First driver******\n");
    printf("Enter the name of Driver ");
    scanf("%s", & d1.name);
    printf("Enter the DLnumber of Driver ");
    scanf("%s", & d1.dlno);
    printf("Enter the Route of Driver ");
    scanf("%s", & d1.route);
    printf("Enter the Kms of Driver ");
    scanf("%d", & d1.kms);

    printf("\n******Enter the details of Second driver******\n");
    printf("Enter the name of Driver ");
    scanf("%s", & d2.name);
    printf("Enter the DLnumber of Driver ");
    scanf("%s", & d2.dlno);
    printf("Enter the Route of Driver ");
    scanf("%s", & d2.route);
    printf("Enter the Kms of Driver ");
    scanf("%d", & d2.kms);

    printf("\n******Enter the details of Third driver******\n");
    printf("Enter the name of Driver ");
    scanf("%s", & d3.name);
    printf("Enter the DLnumber of Driver ");
    scanf("%s", & d3.dlno);
    printf("Enter the Route of Driver ");
    scanf("%s", & d3.route);
    printf("Enter the Kms of Driver ");
    scanf("%d\n", & d3.kms);

    printf("\n\n*********Printing Information of all Drivers************\n\n");
    printf("For Driver number 1:\n Name is %s\n", d1.name);
    printf("DLnumber is %s\n",d1.dlno);
    printf("Route is %s\n",d1.route);
    printf("Kms is %d\n",d1.kms);
    printf("For Driver number 2:\n Name is %s\n", d2.name);
    printf("DLnumber is %s\n",d2.dlno);
    printf("Route is %s\n",d2.route);
    printf("Kms is %d\n",d2.kms);
    printf("For Driver number 2:\n Name is %s\n", d2.name);
    printf("DLnumber is %s\n",d2.dlno);
    printf("Route is %s\n",d2.route);
    printf("Kms is %d\n",d2.kms);
    return 0;
}