int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
* add - addition two numbers
* @a: first number to add
* @b: second number to add
* Return: the sum
*/

int add(int a, int b)
{
	return (a + b);
}

/**
* sub - subtracts two numbers
* @a: first number to add
* @b: second number to add
* Return: the subtract
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplies two numbers
* @a: first number to add
* @b: second number to add
* Return: the multiple
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divideds two numbers
* @a: first number to add
* @b: second number to add
* Return: the dividend number
*/

int div(int a, int b)
{
	return (a / b);
}

/**
  mod - finds the modulus of two numbers
  @a: first number to add
  @b: second number to add
  Return: the modulus
*/

int mod(int a, int b)
{
	return (a % b);
}
