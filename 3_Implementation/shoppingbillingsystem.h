

#ifndef  SHOPPINGBILLINGSYSTEM_H
#define  SHOPPINGBILLINGSYSTEM_H 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void generateCustomerDetails(char customern[20],char presentdate[30]);
  
void generateBill(char productName[20], char brand[20],int quantity,float rate);
 

void generateGrandTotalBill(float totalBill);
   
struct products{
    char productName[20];
    char brand[20];
    float rate;
    int quantity;

};

struct purchase{
    char customername[20];
    char date[20];
    int numberOfProducts;
    struct products prd[20];
};


#endif