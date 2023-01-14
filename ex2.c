/*
km to miles
inches to feet 
pount to kgs
inches to meter
cm to inches
*/
#include <stdio.h>

int main(){
    int i;
    float kmtomile = 0.621371;
    float inchestofeet = 0.0833333;
    float poundtokg = 0.453592;
    float inchestometer = 0.0254;
    float cmtoinches = 0.393701;
    float num1,num2;
    while(1)
    {
        printf("\nUNIT CONVERSION\n");
        printf("Enter....\n1.km to miles\n2.inches to foot\n3.Pound to kg\n4.Inches to meter\n5.cm to inches\n4.0 to exit\n",i);
        scanf("%d",&i);
        switch (i)
        {
            case 0:
            printf("Thank you.....");
            goto end;
            break;

            case 1:
            printf("Enter you number.... ",num1);
            scanf("%f",&num1);
            num2 = num1*kmtomile;
            printf("%f KM is equale to %fMiles",num1,num2);
            break;
            
            case 2:
            printf("Enter you number.... ",num1);
            scanf("%f",&num1);
            num2 = num1*inchestofeet;
            printf("%f inches is equale to %f feet\n",num1,num2);
            break;

            case 3:
            printf("Enter you number.... ",num1);
            scanf("%f",&num1);
            num2 = num1*poundtokg;
            printf("%f Pound is equale to %f Kg\n",num1,num2);
            break;
            
            case 4:
            printf("Enter you number.... ",num1);
            scanf("%f",&num1);
            num2 = num1*inchestometer;
            printf("%f inches is equale to %f meter\n",num1,num2);
            break;
            
            case 5:printf("Enter you number.... ",num1);
            scanf("%f",&num1);
            num2 = num1*cmtoinches;
            printf("%f inches is equale to %f meter\n",num1,num2);
            break;
        }
    }
    end:

    return 0;
}