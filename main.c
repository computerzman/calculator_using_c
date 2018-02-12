#include <stdio.h>
#include <stdlib.h>
/*
 * @author      Mohamed Hassan Elmetwaly <mhe.developer@gmail.com>
 * @version     1.0
 * @Date        11-2-2018
 */
char operationType[1];
int firstNumber = 0;
int secondNumber = 0;

int main()
{

    printf("Please Specify the operation which you want: \n");
    scanf("%c",&operationType[0]);
    printf("Please Enter First Number: \n");
    scanf("%d",&firstNumber);
    printf("Please Enter Second Number: \n");
    scanf("%d",&secondNumber);
    doOperation(operationType, firstNumber, secondNumber); // Calling doOperation Function
    return 0;
}

/*
* @param opType[] array of text contain the operation type + or - or / or *
*/
char checkOperationType(char opType[])
{
    switch(opType[0])
    {
        case '+' : return '+'; break;
        case '-' : return '-'; break;
        case '/' : return '/'; break;
        case '*' : return '*'; break;
        default : return 0;
    }
}

/* doOperation Function
* @param myOpType[]
* @param myFirstNumber
* @param mySecondNumber
*/
void doOperation(char myOpType[], int myFirstNumber, int mySecondNumber)
{
    char operationTypeStatus[1];
    int result = 0;
    operationTypeStatus[0] = checkOperationType(myOpType);
    if(operationTypeStatus[0] != 0)
    {
        //printf("%d \n", operationTypeStatus);
      switch(operationTypeStatus[0])
        {
            case '+' :
                result = sum(myFirstNumber, mySecondNumber);
                break;
            case '-' :
                result = sub(myFirstNumber, mySecondNumber);
                break;
            case '/' :
                result = division(myFirstNumber, mySecondNumber);
                break;
            case '*' :
                result = multiple(myFirstNumber, mySecondNumber);
                break;
        }
        displayResult(myFirstNumber, mySecondNumber, result, operationTypeStatus);
    }
    else{
        printf("Not Valid Inputs");
    }
}

/* Math Function */
/* Addition Function
* @param x as first number
* @param y as second number
* @return x+y
*/
int sum(int x, int y)
{
    return (x+y);
}

/* Subtract Function
* @param x as first number
* @param y as second number
* @return x-y
*/
int sub(int x, int y)
{
    return (x-y);
}

/* Multiply Function
* @param x as first number
* @param y as second number
* @return x*y
*/
int multiple(int x, int y)
{
    return (x*y);
}

/* Division Function
* @param x as first number
* @param y as second number
* @return x/y
*/
int division(int x, int y)
{
    return (x/y);
}

/* Display Result Function
* @param myFirstNumber as first number
* @param mySecondNumber as second number
* @garam result
* @param resultOptTye[]
*/
void displayResult(int myFirstNumber, int mySecondNumber, int result, char resultOptTye[])
{
    printf("The Result of %d %c %d is: (%d) \n", myFirstNumber, resultOptTye[0], mySecondNumber,result);
}
