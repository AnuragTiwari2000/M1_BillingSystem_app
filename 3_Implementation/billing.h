/**
 * @file billing.h
 * @author Anurag Tiwari (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef  BILLING_H
#define  BILLING_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void generateBillHeader(char customer[20],char presentdate[30]);
  
void generateBill(char productName[20], char brand[20],int quantity,float rate);
 

void generateBillFooter(float totalBill);
   
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