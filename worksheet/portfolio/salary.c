
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Abdulaziz Falaknaz
 * ID: 201976285
 */

 int main( void ) {

   // definitions of variables for the problem data 
   float salary = 36250;
   float national_insurance = 0.08;
   float tax_rate = 0.15;

    // calculations 
    
    // National Insurance calculations
    float deduction_salary_NI = salary * national_insurance;
    float NI_deduction_final = salary - deduction_salary_NI;

    // Tax deduction calculation 
    float deduction_tax = (NI_deduction_final - 12500) * tax_rate;

    // Final calculation of Take home salary
    float take_home_salary = NI_deduction_final - deduction_tax;

    // printing the final results
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",deduction_salary_NI);
    printf("Tax contribution £%.2f\n",deduction_tax);
    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }