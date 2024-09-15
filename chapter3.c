#include <stdio.h>
#include <math.h>

int sum_of_arr(void){
	
	int arr[] = {1 ,2, 3, 4 ,5};
	int  i , sum = 0 ,*ptr;
	
	ptr = arr;

	for (i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++) {
        sum += *ptr; 
        ptr++;
    }

	printf("Sum of the array: %d\n", sum);
	return 0;
}

int exponent_series(void){
	int a , i=1 ,b , c;
	printf("Enter a number to find its exponents:\t");
	scanf("%d" , &a);
	
	printf("Enter a number upto which the power is calculated:\t");
	scanf("%d" , &c);
	
	for(i ; i <= c ; i++){
		b = pow(a , i);
		printf("exponent power of the given number to the power of %d: %d\n", i , b);
	}
	
	return 0;
}

int read_and_print(void){
	char a , b , c ;
	printf("Enter a character:\t");
	scanf(" %c" , &a);
	printf("Enter a character:\t");
	scanf(" %c" , &b);
	printf("Enter a character:\t");
	scanf(" %c" , &c);
	printf("Given data  : %c %c %c \n", a,b,c);
	
	return 0;
}

int electricity_bill(customer_num , power_used){
	printf("Your customer number: %d" , customer_num);
	printf("\nPower consumed(in units): %d" , power_used);
	
	int bill = power_used *10;
	printf("\nBill: %d" , bill);
	return 0;
}

int graetest_of_three(void){
	int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The greatest number is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The greatest number is %d\n", num2);
    } else {
        printf("The greatest number is %d\n", num3);
    }

    return 0;
}

int salary(void){
	float basicSalary;
    float allowances;
    float bonus;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the allowances: ");
    scanf("%f", &allowances);

    printf("Enter the bonus: ");
    scanf("%f", &bonus);

    float grossSalary = basicSalary + allowances + bonus;

    printf("Gross Salary: $%.2f\n", grossSalary);

    return 0;
}


int reverse(void){
	int num, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;  
        reversedNum = reversedNum * 10 + remainder; 
        num = num / 10;        
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

int marks (void){
	int subjectMarks[5];
    int totalMarks = 500; 
    int sum = 0 , i;
    float percentage;

    for(i = 0; i < 5; i++){
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &subjectMarks[i]);

        if (subjectMarks[i] < 0 || subjectMarks[i] > 100) {
            printf("Invalid marks! Marks should be between 0 and 100.\n");
            return 1; 
        }

        sum += subjectMarks[i]; 
    }

    percentage = (float)sum / totalMarks * 100;

    printf("Total Marks: %d\n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

int temperature(void){
	float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f °F\n", fahrenheit);

    return 0;
}
int interest(void){
	float principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}

int second_order_eq(void){
	float a, b, c, numerator, root1, root2;

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);

    numerator = b * b - 4 * a * c;

    if (numerator > 0) {
        root1 = (-b + sqrt(numerator)) / (2 * a);
        root2 = (-b - sqrt(numerator)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (numerator == 0) {
        root1 = -b / (2 * a);
        printf("Root = %.2f\n", root1);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-numerator) / (2 * a);
        printf("Root 1 = %.2f + %.2f\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2f\n", realPart, imaginaryPart);
    }

    return 0;
}

int factoial_recursion(void){
	
	int factorial(int n) {
	    if (n == 0) {
	        return 1;
	    }
	    else {
	        return n * factorial(n - 1);
	    }
	}
	
	 int n , result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(n);
        printf("Factorial of %d is %d\n", n, result);
    }

    return 0;
}


int factorial(void){
	int n , i;
    int factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }

    return 0;
}

int sqr_series(void){
	int a , i=1 ,b ;
	printf("Enter a number upto which to find its exponents:\t");
	scanf("%d" , &a);
	
	
	for(i ; i <= a ; i++){
		b = pow(i , 2);
		printf("number %d and its square %d\n", i , b);
	}
	
	return 0;
}



int main(void)
{
//	sum_of_arr();
//	exponent_series();
//	read_and_print();
//	electricity_bill(123897 , 200);
//	graetest_of_three();
//  salary();
//  reverse();
//  marks();
//  temperature();
//	interest();
//	second_order_eq();
//  factoial_recursion();
//  factorial();
//	sqr_series();
	return 0;
}

