#include<stdio.h>
int main ()
{
    int Net_Salary;
    float Gross_Salary, Allowance, Deduction;
    printf("Net Salary: ");
    scanf("%d",&Net_Salary);

    if(Net_Salary>5000 && Net_Salary<=10000)
    {
        Deduction = 0.02 * Net_Salary;
        Allowance = 0.07 * Net_Salary;
        Gross_Salary = Net_Salary + Allowance - Deduction;

        printf("Gross Salary will be = %.2f\n",Gross_Salary);
        printf("Deduction = %.2f\n",Deduction);
        printf("Allowance = %.2f\n",Allowance);
    }
    else if (Net_Salary>10000)
    {
        Deduction = 0.03 * Net_Salary;
        Allowance = 0.10 * Net_Salary;
        Gross_Salary = Net_Salary + Allowance - Deduction;

        printf("Gross Salary will be = %.2f\n",Gross_Salary);
        printf("Deduction = %.2f\n",Deduction);
        printf("Allowance = %.2f\n",Allowance);
    }
    else if (Net_Salary<=5000)
    {
        Deduction = 0.00;
        Allowance = 0.00;
        Gross_Salary = Net_Salary;

        printf("Gross Salary will be = %.2f\n",Gross_Salary);
        printf("No Deduction and Allowances\n");
    }
     else
     {
         printf("No Result");
     }

     return 0;

}
