#include "unity.h"
#include "shoppingbillingsystem.h"

#define PROJECT_NAME "billingsystem"

void setUp(){

}
void tearDown(){

}

void test_generateBillHeader(void){
    TEST_ASSERT_EQUAL(("ramesh" ,__DATE__),generateBillHeader(customer,presentdate));
}
void test_generateBill(void){
    TEST_ASSERT_EQUAL(("shirt","vico",1,100),generateBill(productName,brand,quantity,rate));
}
void test_generateBillFooter(void){
TEST_ASSERT_EQUAL(100,generateBillFooter(totalBill));
}
int test_main(){
    
    UNITY_BEGIN();

    RUN_TEST(test_generateBillHeader);
    RUN_TEST(test_generateBill);
    RUN_TEST(test_generateBillFooter);

    return UNITY_END();



}
