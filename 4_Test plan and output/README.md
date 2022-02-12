# Test plan
* For every feature defines a test case
   * how to test feature
   * define expexted behaviour
   * capture the actual result

   * ID, description, input, expected output. actual output
 
 
 # TEST PLAN AND OUTPUT
 
 |ID| Description                      | Expected Input                             |                        Expected output                                 | Actual Output      |
 |--|-------------------------------   |-------------------------------------       |------------------------------------------------------------------------|--------------------| 
 |1 | Display customer details on bill | A string of less than 20, a string for date| string should be assigned to customer variable to present data variable|   SUCCESS          |
 |2 | Desplay product details on bill  | Enter the products that customers buys, qantity, rate per unit | Display details of products, brand, quantity, total rate| SUCCESS       |
 |3 | Calculate total bill             | quantity and rate of products per unit, DISCOUNT% and GST%     | Total bill after discount and GST                  | SUCCESS            |
 |4 | Display stored bills             | Press 3 and its user choice yes or no      | display all previous stored bills   |                    SUCCESS                            |
 |5 | Search for bills                 | Enter customer name                        | Bill of the customer name           |                    SUCCESS                            |
