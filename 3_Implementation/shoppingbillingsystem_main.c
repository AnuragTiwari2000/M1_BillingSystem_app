#include "shoppingbillingsystem.h"

int main()
{  
     
    int select_option,n;
int invoiceFound=0;
float totalBill;
struct purchase pur;
struct purchase purchases;
char customern[20];
 
    FILE *fp;
    char saveBill='y';

    printf("\t\t {{{{{{{{{{{{Welcome to VMart Shopping Center}}}}}}}}}}");
    
    printf("\n1) Show Bill Details");
    printf("\n2) Display all generated Bills");
    printf("\n3) Search Bill or customer");
    printf("\n4) Exit");
    printf("\n\nEnter what you want to do\t");
    scanf("%d",&select_option);
    fgetc(stdin);
    printf("\n\n");

    switch(select_option){
        case 1:
        printf("\n Enter customername:\t");
        fgets(pur.customername,20,stdin);
        pur.customername[strlen(pur.customername)-1]=0;
        strcpy(pur.date,__DATE__);
        printf("\nEnter the numer of products\t");
        scanf("%d",&n);
        pur.numberOfProducts=n;

        for(int i=0;i<n;i++){
            fgetc(stdin);
            printf("\n\n");
            printf("please enter the productName %d:\t",i+1);
            fgets(pur.prd[i].productName,20,stdin);
            pur.prd[i].productName[strlen(pur.prd[i].productName)-1]=0;
            printf("\nplease enter brand %d:\t",i+1);
            fgets(pur.prd[i].brand,20,stdin);
            pur.prd[i].brand[strlen(pur.prd[i].brand)-1]=0;
            printf("\nenter Quantity:\t");
            scanf("%d",&pur.prd[i].quantity);
            printf("\nPlease enter the unit rate:\t");
            scanf("%f" ,&pur.prd[i].rate);
            totalBill += pur.prd[i].quantity * pur.prd[i].rate;


        }
        generateCustomerDetails(pur.customername,pur.date);
            for(int i=0;i<pur.numberOfProducts;i++){
                generateBill(pur.prd[i].productName,pur.prd[i].brand,pur.prd[i].quantity,pur.prd[i].rate);
            }
            generateGrandTotalBill(totalBill);
            printf("\nsave the bill");
            scanf("%s",&saveBill);

            if(saveBill=='y'){
                fp=fopen("shoppingbillingsystem.dat","a+");
                fwrite(&pur,sizeof(struct purchase),1,fp);
                if(fwrite != 0)
                printf("\nsuccessfully saved");
                else
                printf("\nerror");
                fclose(fp);
            }
            break;

            case 2:
            fp = fopen("shoppingbillingsystem.dat","r");
            printf("\n saved bills\n");
            while(fread(&purchases,sizeof(struct purchase),1,fp))
            {float total=0;
                generateCustomerDetails(purchases.customername,purchases.date);
                for(int i=0;i<purchases.numberOfProducts;i++){
                    generateBill(purchases.prd[i].productName,purchases.prd[i].brand,purchases.prd[i].quantity,purchases.prd[i].rate);
                    total+=purchases.prd[i].quantity * purchases.prd[i].rate;
                    

                }
                generateGrandTotalBill(total);
            }
            fclose(fp);
            break;

             

             case 3:
             printf("give one space and enter customer name\t");
             fgetc(stdin);
             fgets(customern,20,stdin);
             customern[strlen(customern)-1]=0;
             
            fp = fopen("shoppingbillingsystem.dat","r");
            printf("\n invoice %s",customern);
            while(fread(&pur,sizeof(struct purchase),1,fp))
            {float totalBill=0;
               if(!strcmp(pur.customername,customern)){
                generateCustomerDetails(pur.customername,pur.date);
                for(int i=0;i<pur.numberOfProducts;i++){
                    generateBill(pur.prd[i].productName,pur.prd[i].brand,pur.prd[i].quantity,pur.prd[i].rate);
                    totalBill+=pur.prd[i].quantity * pur.prd[i].rate;
                    

                }
                generateGrandTotalBill(totalBill);
                invoiceFound=1;
            }}
            if(!invoiceFound){
                printf("\nSorry invoice for %s doesnt exist",customern);
            }
            fclose(fp);
            break;


            case 4:
            printf("\n\n exit");
            exit(0);
            break;

            default:
            printf("invalid option");
            break;


    }
       printf("\n\n");

    return 0;
}