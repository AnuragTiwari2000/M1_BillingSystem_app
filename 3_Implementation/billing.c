/**
 * @file billing.c
 * @author Anurag Tiwari (anuragrkt46@gmail.com)
 * @brief Billing System to keep the record of a customer 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "billing.h"

void generateBillHeader(char customer[20],char presentdate[30]){
    printf("\n\n");
    printf("\t   Welcome to shopping Center");
    printf("\n\t-----------------------------------");
    printf("\npresentdate:%s",presentdate);
    printf("\nCustomer name: %s",customer);

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

void generateBillFooter(float totalBill){
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
    printf(" TotalBill\t\t\t%.2f",totalBill);
    printf("\ndiscountrate %s\t\t\t%.2f","%",discount);
    printf("\n\t\t\t\t----------------");
    printf("\nnt\t\t\t\t%.2f",nt);
    printf("\ngstax @10%s\t\t\t%.2f","%",gstax);
    printf("\n-------------------------------------------------");
    printf("\nGrandTotal\t\t\t%.2f",grandtotal);
    printf("\n-------------------------------------------------");
return ;
}
