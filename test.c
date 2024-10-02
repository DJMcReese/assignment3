/**
 * @brief Assignment 3 program focusing on for loops
 * @author Dylan McVerry-Reese
 */
#include <stdio.h>

/**
 * @brief determines two integers are factors
 * @param n1 & n2 the two integers being compared
 * @return an integer representing whether n1 is a factor of n2 (1) or not (0)
 */
int is_factor (n1, n2) {
    if (n1 != 0)   {
        if(n2%n1 == 0) { 
          return 1;
       }
        else { return 0;
      }
    }
    if (n1 == 0 && n2 == 0) {
        return 1;
    }
}
/**
 * @brief counts the number of factors an integer has
 * @param num1 the number being factored
 * @return an integer representing of the number of factors
 */
int num_factors (num1) {
    int factors = 0;
    int inc = 0;
    while (inc <= num1) {
        factors += is_factor(inc, num1);
        inc ++;
    }
    return factors;
/**
 * @brief determines whether the given integer num is a prime number
 * @param num the integer to consider
 * @return a variable prime representing whether num is prime (1) or not (0)
 */
int is_prime (num) {
    int test = num_factors(num);
        if (test == 2){
            int prime = 1;
            return prime;
        } else { int prime = 0;
                return prime;
               }
/**
 * @brief sums the factorials up to a number
 * @param n the integer summed to
 * @return sum the sum of the factorial leading up to the given number
 */
int factorial (n) {
    int i;
    int sum = 1;
    for (i = n - 1; i > 0; i--) {
        sum *= i;
    }
    return sum;
}
/**
 * @brief calculates the function c(n, r)
 * @param n and r given values
 * @return the calculation
 */
int n_choose_r (n, r) {
     return (factorial(n) / (factorial(r) * factorial(n - r)));
}
/**
 * @brief sums the fibonacci sequence up to a variable
 * @param far_out given integer that is the max
 * @return total_sum the sum of the fibonacci up far_out
 */
int sum_fibonacci (far_out) {
    int first = 0;
    int second = 1;
    int next;
    int total_sum = 0;
    for (int i = 0; i <= far_out; i++) {
        total_sum += first;
        next = first + second;
        first = second;
        second = next;
    }
    return total_sum;
}

int main(void) {
   /* is_factor();
    num_factors(12);
    num_factors(9);
    
    if(is_prime(11)) {
        printf("is\n");
    } else { printf("isn't\n");}
    if(is_prime(33)) {
        printf("is\n");
    } else { printf("isn't\n");}

    printf("%d\n", factorial(5));

    printf("%d\n", n_choose_r(4, 2));

    printf("%d\n", sum_fibonacci (7));
    */
    return 0;
}

