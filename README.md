# Credit Card Validator

## About

A simple C++ program to validate credit card numbers, using _Luhn's Algorithm_.

## Background Information

Luhn's algorithm determines whether or not a credit card number is valid. For a given credit card number:

1. Double the value of every other digit from right to left, beginning with the penultimate digit.
2. Add the digits of the results of _Step 1_ to the remaining digits in the credit card number.
3. - If the result mod 10 is equal to 0, the number is valid. 
   - If the result mod 10 is not equal to 0, the validation fails.

## Implementation

Run the file named `Credit_Card_Validator.cpp`.
