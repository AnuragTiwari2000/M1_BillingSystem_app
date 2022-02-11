/**
 * @file shoppingbillingsystem.c
 * @author Anurag Tiwari (you@domain.com)
 * @brief Project on Billing System
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "shoppingbillingsystem.h"

void generateCustomerDetails(char customern[20],char presentdate[30]){
    printf("\n\n");
    printf("\t   Welcome To Vmart shopping Center");
    printf("\n\t-----------------------------------");
    printf("\npresentdate:%s",presentdate);
    printf("\nCustomer name: %s",customern);

    printf("\n");
    printf("--------------------------------------------------------\n");
    printf("Product\t\t");
    printf("Brand\t\t");
    printf("Quantity\t\t");
    printf("TotalBill\t\t");
    printf("\n-------------------------------------------------------");
    printf("\n\n");
    return ;


}
void generateBill(char productName[20], char brand[20],int quantity,float rate){
    printf("%s\t\t",productName);
    printf("%s\t\t",brand);
    printf("%d\t\t",quantity);
    printf("%.2f\t\t",quantity*rate);
    printf("\n");
    return ;

}

void generateGrandTotalBill(float totalBill){
    printf("\n");
    float discount=0;
    if(totalBill>1000){
    discount=0.1*totalBill;}
    else if(totalBill>2000){
         discount=0.2*totalBill;
    }
    else{
         discount=0;
    }
    float nt=totalBill-discount;
    float gstax=0.1*nt;
    float grandtotal=nt+gstax;
    printf("-------------------------------------------------------\n");
    printf(" TotalBill%.2f",totalBill);
    printf("\ndiscountrate %s\t\t\t%.2f","%",discount);
    printf("\n\t\t\t\t----------------");
    printf("\nnt\t\t\t\t%.2f",nt);
    printf("\ngstax @10%s\t\t\t%.2f","%",gstax);
    printf("\n-------------------------------------------------");
    printf("\nGrandTotal\t\t\t%.2f",grandtotal);
    printf("\n-------------------------------------------------");
return ;
}


