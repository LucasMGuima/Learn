3) Which of the following are not legal types in C?
(a) short unsigned int
(b) short float
(c) long double
(d) unsigned long

> R: (b) é ilegal.

4) If c is a variable of type char, which one of the following statements is illegal?
(a) i += c; /* i has type int */
(b) c = 2 * c - 1;
(c) putchar(c);
(d) printf(c);

> R: (D) é iliegal, *printf* precisa de uma string e não de apenas um
caracter.

10) Suppose that i is a variable of type int, j is a variable of type long, and k is a variable of type unsigned int. What is the type of 
the expression i + (int) j * k?

> R: O tipo da expreção será *unsigned int*, pos o *int casting* só se aplica ao *j* e não ao *k*.

11) Suppose that i is a variable of type int, f is a variable of type float, and d is a variable of type double. Explain what conversions take place during the execution of the following statement:
d = i + f;

> R: O valor de *i* é convertido para *float*, feito a adição *i + f* o resultado é convertido para *double* e atribuido a *d*.

14) Does the following statement always compute the fractional part of f correctly (assuming that f and frac_part are float variables)?
frac_part = f - (int) f;
If not, what’s the problem?

> R: Não computara, pós a conversão de *float* para *int* não é permitida visto que o valor de *f* irá exceder o maior valor de *int*.