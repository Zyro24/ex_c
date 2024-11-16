#include <stdio.h>

/*
Hacer un programa que me ensene a programar en C
*/

int main(){
    int n = -1, r = 0;
    do {
        puts("\n### MENU ###\n"
        
        "\n## BASICS OF C ##\n"
        
        "\n1. Compilation Steps"
        "\n2. Comments"
        "\n3. Tokens"
        "\n4. Keywords"
        "\n5. Identifiers"
        "\n6. User Input"
        "\n7. Basic Syntax"
        "\n8. Data Types"
        "\n9. Variables"
        "\n10. Integer Promotions"
        "\n11. Type Conversion"
        "\n12. Type Casting"
        "\n13. Booleans\n"

        "\n## Constants and Literals in C ##\n"

        "\n14. Constants"
        "\n15. Literals"
        "\n16. Escape sequences"
        "\n17. Format Specifiers\n"

        "\n## Operators in C ##\n"

        "\n18. Operators"
        "\n19. Arithmetic Operators"
        "\n20. Relational Operators"
        "\n21. Logical Operators"
        "\n22. Bitwise Operators"
        "\n23. Assignment Operators"
        "\n24. Unary Operators"
        "\n25. Increment and Decrement Operators"
        "\n26. Ternary Operator"
        "\n27. sizeof Operator"
        "\n28. Operator Precedence"
        "\n29. Misc Operators"

        "## Decision Making ##"

        "\n30. Decision Making"
        "\n31. if statement"
        "\n32. if...else statement"
        "\n33. nested if statements"
        "\n34. switch statement"
        "\n35. nested switch statements"

        "\n## Loops in C ##\n"

        "\n36. Loops"
        "\n37. While loop"
        "\n38. For loop"
        "\n39. Do...while loop"
        "\n40. Nested loop"
        "\n41. Infinite loop"
        "\n42. Break Statement"
        "\n43. Continue Statement"
        "\n44. goto Statement\n"

        "\n0. Salir\n"
        "\nSeleccione una opcion:");

        r = scanf("%d",&n);
        
        if(r != 1){
            while(getchar() != '\n');
            puts("error");
            getchar();
            continue;
        }

        putchar('\n');

        switch(n){
            case 0:
            puts("\n ### ... Adios! ... ###\n");
            return 0;

            case 1:
            puts("\n### COMPILATION STEPS ###\n"

            "\na. Preprocessing"
            "\nb. Compiling"
            "\nc. Assembling"
            "\nd. Linking\n");
            break;

            case 2:
            puts("\n### COMMENTS ###\n"

            "\na. /* --- */"
            "\nb. //\n");
            break;

            case 3:
            puts("\n### TOKERNS ###\n"

            "\n- Character set"
            "\n- Keyword tokens"
            "\n- Literal tokens"
            "\n- Identifier tokens"
            "\n- Operator tokens"
            "\n- Special symbol tokens\n"

            "\n- C Character set"
            "\n- Uppercase: A to Z"
            "\n- Lowercase: a to z"
            "\n- Digits: 0 to 9"
            "\n- Special characters: ! \" # $ \x25 & ' ( ) * + - . : , ; ` ~ = < > { } [ ] ^ _ \\ /\n"
            
            "\n- C Keywords: (32 Keywords)"
            "\n- C Literals"
            "\n- C Identifiers"
            "\n- C Operators"
            "\n- C Special symbols\n");
            break;

            case 4:
            puts("\n### KEYWORDS ###\n"

            "\n1. auto"
            "\n2. break"
            "\n3. case"
            "\n4. char"
            "\n5. const"
            "\n6. continue"
            "\n7. default"
            "\n8. do"
            "\n9. double"
            "\n10. else"
            "\n11. enum"
            "\n12. extern"
            "\n13. float"
            "\n14. for"
            "\n15. goto"
            "\n16. if"
            "\n17. int"
            "\n18. long"
            "\n19. register"
            "\n20. return"
            "\n21. short"
            "\n22. signed"
            "\n23. sizeof"
            "\n24. static"
            "\n25. struct"
            "\n26. switch"
            "\n27. typedef"
            "\n28. union"
            "\n29. unsigned"
            "\n30. void"
            "\n31. volatile"
            "\n32. while\n"

            "\n## Primary Types C Keywords ##\n"

            "\n- int: Declares an integer variable"
            "\n- long: Declares a long integer variable"
            "\n- short: Declares a short integer variable"
            "\n- signed: Declares a signed variable"
            "\n- double: Declares a double-precision variable"
            "\n- char: Declares a character variable"
            "\n- float: Declares a floating-point variable"
            "\n- unsigned: Declares an unsigned variable"
            "\n- void: Specifies a void return type\n"
            
            "\n## User-defined Types C Keywords ##"
            "\n- struct: Declares a structure type"
            "\n- typedef: Creates a new data type"
            "\n- union: Declares a union type"
            "\n- enum: Declares an enumeration type\n"

            "\n## Storage Types C Keywords ##\n"
            "\n- auto: Specifies automatic storage class"
            "\n- extern: Declares a variable or function"
            "\n- static: Specifies static storage class"
            "\n- register: Specifies register storage class\n"
            
            "\n## Conditionals C Keywords ##"
            "\n- goto: Jumps to a labeled statement"
            "\n- if: Starts an if statement"
            "\n- else: Executes when the if condition is false"
            "\n- case: Labels a statement within a switch"
            "\n- switch: Starts a switch statement"
            "\n- default: Specifies default statement in switch\n"
            
            "\n## Loops and Loop Control C Keywords ##\n"

            "\n- For: Starts a for-loop"
            "\n- do: Starts a do-while loop"
            "\n- while: starts a while loop"
            "\n- continue: Skips an iteration of a loop"
            "\n- break: Terminates a loop or switch statement\n"
            
            "\n## Other C Keywords ##"
            "\n- const: Specifies a constant value"
            "\n- Sizeof: Determines the size of a data type"
            "\n- Volatile: compiler that the value of the variable may change at any time\n"
            );
            break;

            case 5:
            puts("\n### C Identifiers ###\nNaming Rules of C Identifiers\n"

            "\nKeywords can't be used as identifiers as they are predefined."
            "\n- Out of the character set that C uses, only the alphabets (upper and lowercase) and the underscore symbol (_) are allowed in the identifier.\n"

            "\nIt implies that you can't use characters like the punctuation symbols etc. as a part of the identifier."
            "\n- The identifier must start either with an alphabet (upper or lowercase) or an underscore. It means, a digit cannot be the first character of the identifier."
            "\n- The subsequent characters may be alphabets or digits or an underscore."
            "\n- Same identifier can't be used as a name of two entities. An identifier can be used only once in the current scope.\n"
            
            "\n## Valid C Identifiers ##\n"
            "\nage, Age, AGE, average_age, __temp, address1, phone_no_personal, _my_name"

            "\n## Invalid C Identifiers ##\n"

            "\nAverage-age, my name, $age, #phone, 1mg, phy+maths\n"

            "\n- Global Identifiers"
            "\n- Local Identifiers"
            );
            break;

            case 6:
            puts("\n### Need for User Input in C ###\n"

            "\nUser Input Function: The scanf()\n"

            "\nFormat Specifier Type:"
            "\n- %c Character"
            "\n- %d Signed integer"
            "\n- %f Float values"
            "\n- %i Unsigned integer"
            "\n- %l or %ld or %li Long"
            "\n- %lf Double"
            "\n- %Lf Long double"
            "\n- %lu Unsigned int or unsigned long"
            "\n- %lli or %lld Long long"
            "\n- %llu Unsigned long long\n"
            );
            break;

            case 7:
            puts("\n### Basic Input ###\n"

            "\n#include <stdio.h> // Header File\n"
            "\nint a=10; // Global declarations\n"

            "\n// The main function"
            "\nint main() {"
            "\n  char message[] = \"Hello World\"; // Local variable"
            "\n  printf(\"%s\", message);"
            "\n  return 0;"
            "\n}\n"
            
            "\n- Tokens in C"
            "\n- Identifiers in C"
            "\n- Keywords in C"
            "\n- Semicolons in C"
            "\n- Comments in C"
            "\n- Source Code\n"

            "\n- Source Code"
            "\n- The main() Function"
            "\n- Header Files"
            "\n- Variable Declaration"
            "\n- Statements in a C Program"
            "\n- Whitespaces in a C Program"
            "\n- Compound Statements in C"
            );
            break;

            case 8:
            puts("### Datatypes ###\n"

            "\n- Basic Types: They are arithmetic types and are further classified into: (a) integer types and (b) floating-point types."
            "\n- Enumerated types: They are again arithmetic types and they are used to define variables that can only assign certain discrete integer values throughout the program."
            "\n- The type void: The type specifier void indicates that no value is available.\n"

            "\nDerived types: They include (a) Pointer types, (b) Array types, (c) Structure types, (d) Union types and (e) Function types.\n"

            "\nInteger Data Types in C\nchar 1 byte -128 to 127 or 0 to 255\nunsigned char 1 byte 0 to 255"
            "\nsigned char 1 byte -128 to 127\nint 2 or 4 bytes -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647"
            "\nunsigned int 2 or 4 bytes 0 to 65,535 or 0 to 4,294,967,295\nshort 2 bytes -32,768 to 32,767\nunsigned short 2 bytes 0 to 65,535"
            "\nlong 8 bytes -9223372036854775808 to 9223372036854775807\nunsigned long 8 bytes 0 to 18446744073709551615\n"

            "\n#include <stdio.h>"
            "\n#include <stdlib.h>"
            "\n#include <limits.h>"
            "\n#include <float.h>\n"

            "\nint main(int argc, char** argv) {"
            "\n  printf(\"CHAR_BIT: %d\\n\", CHAR_BIT);"
            "\n  printf(\"CHAR_MAX: %d\\n\", CHAR_MAX);"
            "\n  printf(\"CHAR_MIN: %d\\n\", CHAR_MIN);"
            "\n  printf(\"INT_MAX: %d\\n\", INT_MAX);"
            "\n  printf(\"INT_MIN: %d\\n\", INT_MIN);"
            "\n  printf(\"LONG_MAX: %ld\\n\", (long) LONG_MAX);"
            "\n  printf(\"LONG_MIN: %ld\\n\", (long) LONG_MIN);"
            "\n  printf(\"SCHAR_MAX: %d\\n\", SCHAR_MAX);"
            "\n  printf(\"SCHAR_MIN: %d\\n\", SCHAR_MIN);"
            "\n  printf(\"SHRT_MAX: %d\\n\", SHRT_MAX);"
            "\n  printf(\"SHRT_MIN: %d\\n\", SHRT_MIN);"
            "\n  printf(\"UCHAR_MAX: %d\\n\", UCHAR_MAX);"
            "\n  printf(\"UINT_MAX: %u\\n\", (unsigned int) UINT_MAX);"
            "\n  printf(\"ULONG_MAX: %lu\\n\", (unsigned long) ULONG_MAX);"
            "\n  printf(\"USHRT_MAX: %d\\n\", (unsigned short) USHRT_MAX);"
            "\n  return 0;"
            "\n}\n"

            "\nCHAR_BIT : 8"
            "\nCHAR_MAX : 127"
            "\nCHAR_MIN : -128"
            "\nINT_MAX : 2147483647"
            "\nINT_MIN : -2147483648"
            "\nLONG_MAX : 9223372036854775807"
            "\nLONG_MIN : -9223372036854775808"
            "\nSCHAR_MAX : 127"
            "\nSCHAR_MIN : -128"
            "\nSHRT_MAX : 32767"
            "\nSHRT_MIN : -32768"
            "\nUCHAR_MAX : 255"
            "\nUINT_MAX : 4294967295"
            "\nULONG_MAX : 18446744073709551615"
            "\nUSHRT_MAX : 65535\n"
            
            "\n## Floating-Point Data Types in C ##\n"

            "\nType - Storage size - Value range - Precision"
            "\nfloat 4 byte 1.2E-38 to 3.4E+38 6 decimal places"
            "\ndouble 8 byte 2.3E-308 to 1.7E+308 15 decimal places"
            "\nlong double 10 byte 3.4E-4932 to 1.1E+4932 19 decimal places\n"

            "\n#include <stdio.h>"
            "\n#include <stdlib.h>"
            "\n#include <limits.h>"
            "\n#include <float.h>"
            "\nint main(int argc, char** argv) {"
            "\n  printf(\"Storage size for float : %zu \\n\", sizeof(float));"
            "\n  printf(\"FLT_MAX : %g\\n\", (float) FLT_MAX);\n  printf(\"FLT_MIN : %g\\n\", (float) FLT_MIN);"
            "\n  printf(\"-FLT_MAX : %g\\n\", (float) -FLT_MAX);\n  printf(\"-FLT_MIN : %g\\n\", (float) -FLT_MIN);"
            "\n  printf(\"DBL_MAX : %g\\n\", (double) DBL_MAX);\n  printf(\"DBL_MIN : %g\\n\", (double) DBL_MIN);"
            "\n  printf(\"-DBL_MAX : %g\\n\", (double) -DBL_MAX);\n  printf(\"Precision value: %d\\n\", FLT_DIG );"
            "\n  return 0;"
            "\n}\n"

            "\nStorage size for float : 4"
            "\nFLT_MAX : 3.40282e+38"
            "\nFLT_MIN : 1.17549e-38"
            "\n-FLT_MAX : -3.40282e+38"
            "\n-FLT_MIN : -1.17549e-38"
            "\nDBL_MAX : 1.79769e+308"
            "\nDBL_MIN : 2.22507e-308"
            "\n-DBL_MAX : -1.79769e+308"
            "\nPrecision value: 6\n"

            "\n## User-defined Data Types in C ##"
            "\nStruct Data Type\n"
            
            "\nstruct student {"
            "\n  char name[20];"
            "\n  int marks, age;"
            "\n};\n"

            "\n## Union Data Type ##\n"
            "\nunion ab {"
            "\n  int a;"
            "\n  float b;"
            "\n};\n"

            "\nThe void Data Type in C\n"
            "\n1. Function returns as void: There are various functions in C that do not return any value or you can say they return void. A function with no return value has the return type as void. For example, void exit (int status);"
            "\n2. Function arguments as void: There are various functions in C which do not accept any parameter. A function with no parameter can accept a void. For example, int rand(void);"
            "\n3. Pointers to void: A pointer of type void * represents the address of an object, but not its type. For example, a memory allocation function void *malloc( size_t size ); returns a pointer to void which can be casted to any data type.\n"

            "\n## Arrays Data Type in C ##\n"
            "\nint marks[5];"
            "\nint marks[ ]={50,56,76,67,43};"

            "\n## Pointers Data Type in C ##\n"
            "\nint x;"
            "\nint *y;"
            "\ny = &x;"
            );
            break;

            case 9:
            puts("### Variables ###\n"
            "\n## Naming Conventions of C Variables ##\n"

            "\nint _num = 5; // valid integer variable"
            "\nfloat marks = 55.50; // valid float variable"
            "\nchar choice = '0'; // valid char variable\n"

            "\n// invalid variable name"
            "\n// cannot use \"-\""
            "\nint sub-1 = 35;\n"
            
            "\n// invalid; must have data type"
            "\navg = 50;\n"

            "\n// invalid; name can be used for"
            "\n// declaration only once in a function"
            "\nint choice = 0;\n"

            "\n// Valid integer name"
            "\nint sal_of_employee = 20000;\n"

            "\n// Valid because all are of same type"
            "\nint phy, che, maths;\n"

            "\n// error because variables of"
            "\n// different types in same statement"
            "\nint sal, float tax;\n"

            "\n1. char: Typically a single octet(one byte). It is an integer type."
            "\n2. int: The most natural size of integer for the machine."
            "\n3. float: A single-precision floating point value."
            "\n4. double: A double-precision floating point value."
            "\n5. void: Represents the absence of type.\n"

            "\n## Variable Definition in C ##\n"
            "\n- type variable_list;\n"
            "\nint i, j, k;"
            "\nchar c, ch;"
            "\nfloat f, salary;"
            "\ndouble d;\n"

            "\ntype variable_name = value;"
            "\n// declaration of d and f"
            "\nextern int d = 3, f = 5;\n"
            
            "\n// definition and initializing d and f"
            "\nint d = 3, f = 5;\n"
            "\n// definition and initializes z"
            "\nbyte z = 22;\n"
            "\n// the variable x has the value 'x'"
            "\nchar x = 'x';\n"

            "\n## Variable Declaration in C ##\n"

            "\n// declaration with initialization"
            "\nint x = 10;\n"

            "\n// declare first and assign later"
            "\nint y;"
            "\ny = 20;\n"

            "\n// define and initialize two variables"
            "\nint d = 3, f = 5;\n"

            "\n// the variable x has the value 'x'"
            "\nchar x = 'x';\n"

            "\n// Variable declaration:\n"

            "\nextern int a, b;"
            "\nextern int c;"
            "\nextern float f;\n"

            "\nint main () {"
            "\n  /* variable definition: */"
            "\n  int a, b;"
            "\n  int c;"
            "\n  float f;"
            "\n  /* actual initialization */"
            "\n  a = 10;"
            "\n  b = 20;"
            "\n  c = a + b;"
            "\n  printf(\"value of c : %d \\n\", c);"
            "\n  f = 70.0/3.0;"
            "\n  printf(\"value of f : %f \\n\", f);"
            "\n  return 0;"
            "\n}\n"
            
            "\n// function declaration\nint func();\n\nint main() {\n"
            "\n// function call\nint i = func();\n}\n\n// function definition\nint func() {\nreturn 0;\n}\n"
            "\n## Lvalues and Rvalues in C ##\n- lvalue expressions\n- rvalue expressions\n"
            "\n// valid statement\nint g = 20;\n\n// invalid statement\n// it would generate compile-time error\n10 = 20;\n"
            "\nVariables in C can be classified based on the following parameters:\nData types: int, float, char or struct types."
            "\nScope: global or local variables.\nStorage type: automatic, static, register or extern.\n"
            );
            break;

            case 10:
            puts("### Integer Promotions ###\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char a = 251;"
            "\n  unsigned char b = a;"
            "\n  printf(\"a = %c\", a);"
            "\n  printf(\"\\nb = %c\", b);"
            "\n  if (a == b)"
            "\n    printf(\"\\n Same\");"
            "\n  else"
            "\n    printf(\"\\n Not Same\");"
            "\n  return 0;"
            "\n}\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char a = 50;"
            "\n  int b = a << 2;"
            "\n  printf (\"b as int: %d as char: %c\", b, b);"
            "\n  return 0;"
            "\n}\n"

            "\n## Integer Promotion Rules ##\n"
            "\n- The integer types in C are char, short, int, long, long long and enum. Booleans are also treated as an integer type when it comes to type promotions."
            "\n- No two signed integer types shall have the same rank, even if they have the same representation."
            "\n- The rank of a signed integer type shall be greater than the rank of any signed integer type with less precision."
            "\n- The rank of long int > the rank of int > the rank of short int > the rank of signed char."
            "\n- The rank of char is equal to the rank of signed char and unsigned char."
            "\n- Whenever a small integer type is used in an expression, it is implicitly converted to int which is always signed."
            "\n- All small integer types, irrespective of sign, are implicitly converted to (signed) int when used in most expressions."
            
            "\n\n- Byte and short values: They are promoted to int."
            "\n- If one operand is a long: The entire expression is promoted to long."
            "\n- If one operand is a float: The entire expression is promoted to float."
            "\n- If any of the operands is double: The result is promoted to double."

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char x = 68;"
            "\n  char y = 34;"
            "\n  printf(\"The value of x is: %d\", x);"
            "\n  printf(\"\\nThe value of y is: %d\", y);"
            "\n  char z = x/y;"
            "\n  printf(\"\\nThe value of z: %d\", z);"
            "\n  return 0;"
            "\n}\n"
            );
            break;

            case 11:
            puts("### Type Conversion ###\n"

            "\n## Implicit Type Conversion in C ##\n"

            "\nByte and short values: They are promoted to int."
            "\nIf one operand is a long: The entire expression is promoted to long."
            "\nIf one operand is a float: The entire expression is promoted to float."
            "\nIf any of the operands is double: The result is promoted to double."

            "\n#include <stdio.h>"
            "\nint main(){"
            "\n  int  i = 17;char c = 'c'; /* ascii value is 99 */"
            "\n  int sum;sum = i + c;"
            "\n  printf(\"Value of sum: %d\\n\", sum);"
            "\n  return 0;"
            "\n}\n"

            "\nUsual Arithmetic Conversion\n"
            "\nint => unsigned int => long => unsigned long => long long => unsigned long long => float => double => long double\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char a = 'A';"
            "\n  float b = a + 5.5;"
            "\n  printf(\"%f\", b);"
            "\n  return 0;"
            "\n}\n"

            "\n## Explicit Type Conversion in C ## \n"
            "\ntype2 var2 = (type1) var1;\n"
            "\n#include <stdio.h>\n"
            "\nint main(){\n"
            "\n  int x = 10, y = 4;"
            "\n  float z = x/y;\n"
            "\n  printf(\"%f\", z);\n"
            "\n  return 0;"
            "\n}\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int x = 10, y = 4;"
            "\n  float z = (float)x/y;"
            "\n  printf(\"%f\", z);"
            "\n  return 0;"
            "\n}\n"

            "\n## Typecasting Functions in C ##\n"

            "\nThe atoi() Function\n"

            "\n#include <stdio.h>"
            "\n#include <stdlib.h>\n"
            "\nint main(){"
            "\n  char str[] = \"123\";"
            "\n  int num = atoi(str);"
            "\n  printf(\"%d\\n\", num);"
            "\n  return 0;"
            "\n}\n"

            "\nThe itoa() Function\n"

            "\n#include <stdio.h>"
            "\n#include <stdlib.h>\n"
            "\nint main(){"
            "\n  int num = 123;"
            "\n  char str[10];"
            "\n  itoa(num,str, 10);"
            "\n  printf(\"%s\\n\", str);"
            "\n  return 0;"
            "\n}\n"

            "\nThe malloc() Function\n"

            "\nint *ptr = (int*)malloc(n * sizeof(int));\n"

            "\n#include <stdio.h>"
            "\n#include <stdlib.h>\n"

            "\nfloat divide(int, int);\n"

            "\nint main(){"
            "\n  int x = 10, y = 4;"
            "\n  float z = divide(x, y);"
            "\n  printf(\"%f\", z);"
            "\n  return 0;"
            "\n}\n"

            "\nfloat divide(int a, int b){"
            "\n  return (float)a/b;"
            "\n}\n"
            );
            break;

            case 12:
            puts("\n### Type Casting ###\n"

            "\n(type_name) expression\n"

            "\n#include <stdio.h>\n"
            "\nint main() {"
            "\nint sum = 17, count = 5;"
            "\ndouble mean;"
            "\nmean =  sum / count;"
            "\nprintf(\"Value of mean: %f\\n\", mean);\n"
            "\n}\n"

            "\n#include <stdio.h>\n"
            "\nint main() {"
            "\n  int sum = 17, count = 5;"
            "\n  double mean;"
            "\n  mean = (double) sum / count;"
            "\n  printf(\"Value of mean: %f\\n\", mean);"
            "\n}\n"

            "\nRules of Type Promotions:"
            "\n- Byte and short values : They are promoted to int."
            "\n- If one operand is a long : The entire expression is promoted to long."
            "\n- If one operand is a float : The entire expression is promoted to float."
            "\n- If any of the operands is double : The result is promoted to double.\n"

            "\n## Integer Promotion in C ##\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int i = 17;"
            "\n  char c = 'c';  /* ascii value is 99 */"
            "\n  int sum;\n"
            "\n  sum = i + c;"
            "\n  printf(\"Value of sum : %d\\n\", sum);\n"
            "\n}\n"

            "\n## Usual Arithmetic Conversion ##\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int i = 17;"
            "\n  char c = 'c';  /* ascii value is 99 */"
            "\n  float sum;\n"
            "\n  sum = i + c;"
            "\n  printf(\"Value of sum : %f\\n\", sum);"
            "\n}\n"
            );
            break;

            case 13:
            puts("\n### Booleans ###\n"

            "\n## Using enum to Implement Boolean Type in C ##\n"

            "\n#include <stdio.h>\n"

            "\nint main (){"
            "\n  enum bool {false, true};"
            "\n  enum bool x = true;"
            "\n  enum bool y = false;"
            "\n  printf (\"%d\\n\", x);"
            "\n  printf (\"%d\\n\", y);"
            "\n}\n"

            "\ntypedef enum as BOOL\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  typedef enum {false, true} BOOL;"
            "\n  BOOL x = true;\nBOOL y  = false;"
            "\n  printf (\"%d\\n\", x);"
            "\n  printf (\"%d\\n\", y);"
            "\n}\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  typedef enum {false, true} BOOL;"
            "\n  int i = 0;"
            "\n  while(true){"
            "\n    i++;"
            "\n    printf(\"%d\\n\", i);"
            "\n    if(i >= 5)\n      break;"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nBoolean Values with #define\n"

            "\n#include <stdio.h>\n"
            "\n#define FALSE 0"
            "\n#define TRUE 1\n"
            "\nint main(){\n"
            "\n  printf(\"False: %d \\n True: %d\", FALSE, TRUE);\n"
            "\n  return 0;"
            "\n}\n"

            "\nBoolean Type in stdbool.h\n"

            "\n#include <stdio.h>"
            "\n#include <stdbool.h>\n"
            "\nint main(){\n"
            "\n  bool a = true;"
            "\n  bool b = false;\n"
            "\n  printf(\"True: %d\\n\", a);"
            "\n  printf(\"False: %d\", b);\n"
            "\n  return 0;"
            "\n}\n"

            "\n#include <stdio.h>"
            "\n#include <stdbool.h>\n"
            "\nint main(){"
            "\n  bool x;"
            "\n  x = 10 > 5;"
            "\n  if(x)"
            "\n    printf(\"x is True\\n\");"
            "\n  else"
            "\n    printf(\"x is False\\n\");"
            "\n  bool y;"
            "\n  int marks = 40;"
            "\n  y = marks > 50;"
            "\n  if(y)"
            "\n    printf(\"Result: Pass\\n\");"
            "\n  else"
            "\n    printf(\"Result: Fail\\n\");\n"
            "\n}\n"

            "\n#include <stdio.h>"
            "\n#include <stdlib.h>"
            "\n#include <stdbool.h>\n"
            "\nint main(void){\n"
            "\n  bool loop = true;"
            "\n  int i = 0;\n"
            "\n  while(loop){"
            "\n    i++;"
            "\n    printf(\"i: %d \\n\", i);\n"
            "\n    if (i >= 5)"
            "\n      loop = false;"
            "\n  }"
            "\n  printf(\"Loop stopped!\\n\");"
            "\n  return EXIT_SUCCESS;"
            "\n}\n"
            );
            break;

            case 14:
            puts("\n- Using the const Keyword\n"

            "\n- Using the #define Directive\n"

            "\n## Defining a Constant Using the const Keyword ##"
            "\nconst type NAME = val;"
            "\nconst float PI = 3.14159265359;\n"
            
            "\n#include <stdio.h>\nint main(){"
            "\n  const float PI = 3.14159265359;"
            "\n  float radius = 5;"
            "\n  float area = PI*radius*radius;"
            "\n  printf (\"area: %f\", area);"
            "\n  return 0;"
            "\n}\n"

            "\nconst float PI = 3.14159265359;"
            "\nPI=22/7;\n"

            "\nerror: assignment of read-only variable 'PI'\n"

            "\nconst float PI;"
            "\nPI = 3.14159265359;\n"

            "\nerror: assignment of read-only variable 'PI'\n"

            "\nDefining a Constant Using the #define Directive"
            "\n#define name = value\n#define PI = 3.14159265359\n"

            "\nExample: Define a Constant Using the #define\n"

            "\n#include <stdio.h>"
            "\n#define LENGTH 10"
            "\n#define WIDTH 5"
            "\n#define NEWLINE '\\\n'\n"
            "\nint main() {"
            "\n  int area;"
            "\n  area = LENGTH * WIDTH;"
            "\n  printf(\"length: %d width: %d\", LENGTH, WIDTH);"
            "\n  printf(\"%c\", NEWLINE);"
            "\n  printf(\"value of area : %d\", area);"
            "\n  return 0;"
            "\n}\n"

            "\nChanging the Value of a Constant\n"
            "\nExample: Change the Value of a Constant\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  const int x = 10;"
            "\n  printf(\"Initial Value of Constant: %d\\n\", x);\n"
            "\n  // y is a pointer to constant x\nint* y = &x;\n"
            "\n  // assign new value"
            "\n  *y = 100;"
            "\n  printf(\\\"Value of Constant after change: %d\\\", x);"
            "\n  return 0;"
            "\n}\n"
            );
            break;

            case 15:
            puts("\n### Literals ###\n"

            "\n- Using literal representation"
            "\n- Using an expression"
            "\n- int x = 10;\n"

            "\n- int x = 10;"
            "\n- int y = x*2;\n"

            "\n## Integer Literals in C ##"
            "\nint x = 200;"
            "\nint y = -50;\n"
            "\nint c = 89U;"
            "\nlong int d = 99998L;\n"

            "\n#include <stdio.h>\n"
            "\nint main(){\n"
            "\n  int oct = 025;"
            "\n  int hex = 0xa1;"
            "\n  printf(\"Octal to decimal: %d\\n\", oct);"
            "\n  printf(\"Hexadecimal to decimal: %d\\n\", hex);"
            "\n}\n"

            "\n#include <stdio.h>\n"
            "\nint main(){\n"
            "\n  int x = 0b00010000;"
            "\n  printf(\"binary to decimal: %d\", x);"
            "\n}\n"

            "\n212      /* valid */"
            "\n215u     /* valid */"
            "\n0xFeeL   /* valid */"
            "\n078      /* invalid: 8 is not an octal digit */"
            "\n032UU    /* invalid: cannot repeat a suffix */\n"

            "\n85       /* decimal */"
            "\n0213     /* octal */"
            "\n0x4b     /* hexadecimal */"
            "\n30       /* int */"
            "\n30u      /* unsigned int */"
            "\n30l      /* long */"
            "\n30ul     /* unsigned long */\n"

            "\n## Floating-point Literals in C ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  float x = 10.55;"
            "\n  float y = -1.333;"
            "\n  printf(\"x and y are: %f, %f\", x, y);"
            "\n}"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  float x = 100E+4;"
            "\n  float y = -1.3E-03;"
            "\n  printf(\"x: %f\\n\", x);"
            "\n  printf(\"y: %f\\n\", y);"
            "\n}\n"

            "\n3.14159     /* valid */"
            "\n314159E-5L  /* valid */"
            "\n510E        /* invalid: incomplete exponent */"
            "\n210f        /* invalid: no decimal or exponent */"
            "\n.e55        /* invalid: missing integer or fraction */\n"

            "\n## Character Literals in C ##\n"

            "\nchar x = 'I';\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\nchar x = 'I';"
            "\n  printf(\"x: %c\\n\", x);"
            "\n  printf(\"x: %d\\n\", x);"
            "\n}"

            "\n## Escape Sequences in C ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char x = 'I';"
            "\n  char y = 'J';"
            "\n  printf(\"x: %c\\ny: %c\", x,y);"
            "\n}\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char x = '\u09A9';"
            "\n  printf(\"x: %c\\n\", x);"
            "\n  printf(\"x: %d\\n\", x);"
            "\n}\n"

            "\n## String Literals in C ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char arr[] = \"Hello World\";"
            "\n  printf(\"arr: %s\", arr);"
            "\n}\n"

            "\narr: Hello World\n"

            "\nchar arr[] = \"Hello \\"
            "\nWorld\";\n"

            "\nint arr[] = {10, 20, 30, 40};\n"

            "\nstruct marks {"
            "\n  int phy;"
            "\n  int che;"
            "\n  int math"
            "\n};\n"

            "\nstruct marks m1 = {50, 60, 70};\n"
            );
            break;

            case 16:
            puts("\n### Escape Sequence ###\n"

            "\n## Escape Sequence in C ##\n"

            "\nprintf(\" Hello \\n World \");\n"

            "\nAll Escape Sequences in C\n"

            "\nEscape sequence Meaning"
            "\n\\\\  \\ character"
            "\n\\'  ' character"
            "\n\\\"  \" character"
            "\n\\?  ? character"
            "\n\\a  Alert or bell"
            "\n\\b  Backspace"
            "\n\\f  Form feed"
            "\n\\n  Newline"
            "\n\\r  Carriage return"
            "\n\\t  Horizontal tab"
            "\n\\v  Vertical tab"
            "\n\\ooo  Octal number of one to three digits"
            "\n\\xhh . . .  Hexadecimal number of one or more digits\n"

            "\nNewline Escape Sequence (\\n)\n"

            "\n#include <stdio.h>\n"
            "\nint main(){\n"
            "\n  printf(\"Hello.\\nGood morning.\\nMy name is Ravi\");"
            "\n}\n"

            "\nTab Escape Sequence (\\t)\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\"Name:\\tRavi\\tMarks:\\t50\");"
            "\n}\n"

            "\nBackslash Escape Sequence (\\\\)"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\"Directory in Windows: C:\\\\users\\\\user\");"
            "\n}\n"

            "\nDouble and Single Quotes Escape Sequences (\\\" and \\')"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\"Welcome to \\\"TutorialsPoint\\\"\\n\");"
            "\n  printf (\"\\'Welcome\\' to TutorialsPoint\");"
            "\n}\n"

            "\nBackspace Escape Sequence (\\b)\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\"Welcome to\\b TutorialsPoint\");"
            "\n}\n"

            "\nOctal Number Escape Sequence (\\ooo)\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\"%c\", '\\141');"
            "\n  return 0;"
            "\n}\n"

            "\nHexadecimal Number Escape Sequence (\\xhh)\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\\\"%c\\\", '\\x41');"
            "\n  return 0;"
            "}\n"

            "\nAlert or Bell Number Escape Sequence (\\a)"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\"Hello \\a world\\n\");"
            "\n  return 0;"
            "\n}\n"
            );
            break;

            case 17:
            puts("\nFormat Specifiers\n"

            "\nWhy Do We Use Format Specifiers in C?\n"

            "\nFormat Specifiers in printf() Function\n"

            "\nint printf(format_string, expr1, expr2, . . );\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int age = 18;"
            "\n  float percent = 67.75;"
            "\n  printf(\"Age: %d \\nPercent: %f\", age, percent);"
            "\n  return 0;"
            "\n}\n"

            "\nFormat Specifiers in scanf() Function\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int age;"
            "\n  float percent;"
            "\n  printf(\"Enter Age and Percent: \\n\");"
            "\n  scanf(\"%d %f\", &age, &percent);"
            "\n  printf(\"Age: %d Percent: %f\", age, percent);"
            "\n  return 0;"
            "}\n"

            "\nTypes of Format Specifiers\n"

            "\nFormat Specifier Type"
            "\n%c  Character"
            "\n%d  Signed integer"
            "\n%e  or %E Scientific notation of floats"
            "\n%f  Float values"
            "\n%g or %G  Similar as %e or %E"
            "\n%hi  Signed integer (short)"
            "\n%hu  Unsigned Integer (short)"
            "\n%i  Unsigned integer"
            "\n%l or %ld  or %li Long"
            "\n%lf  Double"
            "\n%Lf  Long double"
            "\n%lu  Unsigned int or unsigned long"
            "\n%lli or %lld  Long long"
            "\n%llu  Unsigned long long"
            "\n%o  Octal representation"
            "\n%p  Pointer"
            "\n%s  String"
            "\n%u  Unsigned int"
            "\n%x or %X  Hexadecimal representation\n"

            "\n- A minus symbol (-) tells left alignment."
            "\n- A number after % specifies the minimum field width. If a string is less than the width, it will be filled with spaces."
            "\n- A period (.) is used to separate field width and precision."

            "\nInteger Format Specifiers\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int num = 20;"
            "\n  printf(\"Signed integer: %d\\n\", num);"
            "\n  printf(\"Unsigned integer: %i\\n\", num);"
            "\n  printf(\"Long integer: %ld\\n\", num);"
            "\n  printf(\"Octal integer: %o\\n\", num);"
            "\n  printf(\"Hexadecimal integer: %x\\n\", num);"
            "\n  return 0;"
            "\n}\n"

            "\nFloating-point Formats\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  float num = 5.347;"
            "\n  printf(\"float: %f\\n\", num);"
            "\n  printf(\"double: %lf\\n\", num);"
            "\n  printf(\"Scientific notation: %e\\n\", num);"
            "\n  printf(\"width and precision: %4.2f\\n\", num);"
            "\n  return 0;"
            "\n}\n"

            "\nString Formats\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  char ch = 'D';"
            "\n  char word[]=\"Hello World\";"
            "\n  printf(\"As character: %c\\n\", ch);"
            "\n  printf(\"As its ASCII value: %d\\n\", ch);"
            "\n  printf(\"String format: %s\", word);"
            "\n  return 0;"
            "\n}\n"

            "\nFormat Specifiers in File IO Functions\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int x,y,z;"
            "\n  FILE *fp = fopen(\"test.txt\",\"w\");"
            "\n  x = 10; y = 20; z = 30;"
            "\n  fprintf(fp, \"%d, %d, %d\", x,y,z);"
            "\n  fclose(fp);"
            "\n  return 0;"
            "\n}\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int x,y,z;"
            "\n  FILE *fp = fopen(\"test.txt\",\"r\");"
            "\n  fscanf(fp, \"%d, %d, %d\", &x,&y,&z);"
            "\n  printf(\"%d, %d, %d\", x,y,z);"
            "\n  fclose(fp);"
            "\n  return 0;"
            "\n}\n"
            );
            break;

            case 18:
            puts("\n### Operators ###\n"

            "\n- Unary operators - ++ (increment), -- (decrement), ! (NOT), ~ (compliment), & (address of), * (dereference)"
            "\n- Binary operators - arithmetic, logical and relational operators except !"
            "\n- Ternary operators - The ? operator\n"

            "\n- Arithmetic Operators"
            "\n- Relational Operators"
            "\n- Logical Operators"
            "\n- Bitwise Operators"
            "\n- Assignment Operators"
            "\n- Misc Operators\n"

            "\nArithmetic Operators\n"
            "\na + b\n"

            "\nOperator - Description - Example"
            "\n+  Adds two operands. A + B = 30"
            "\n-  Subtracts second operand from the first. A - B = -10"
            "\n*  Multiplies both operands. A * B = 200"
            "\n/  Divides numerator by de-numerator. B / A = 2"
            "\n%  Modulus Operator and remainder of after an integer division. B % A = 0"
            "\n++ Increment operator increases the integer value by one. A++ = 11"
            "\n-- Decrement operator decreases the integer value by one. A-- = 9\n"

            "\nRelational Operators\n"

            "\na > b\n"

            "\nOperator Description Example\n"
            "\n==  Checks if the values of two operands are equal or not. If yes, then the condition becomes true. (A == B) is not true."
            "\n!=  Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true. (A != B) is true."
            "\n>   Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true. (A > B) is not true."
            "\n<   Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true. (A < B) is true."
            "\n>=  Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true. (A >= B) is not true."
            "\n<=  Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true. (A <= B) is true.\n"

            "\nLogical Operators\n"

            "\na >= 50 && b >= 50\n"

            "\nOperator - Description - Example"
            "\n&&  Called Logical AND operator. If both the operands are non-zero, then the condition becomes true. (A && B) is false."
            "\n||  Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true. (A || B) is true."
            "\n!   Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false. !(A && B) is true.\n"

            "\nBitwise Operators"
            "\np  q  p & q  p | q  p ^ q"
            "\n0  0  0  0  0"
            "\n0  1  0  1  1"
            "\n1  1  1  1  0"
            "\n1  0  0  1  1\n"

            "\nOperator - Description - Example"
            "\n&   Binary AND Operator copies a bit to the result if it exists in both operands. (A & B) = 12, i.e., 0000 1100"
            "\n|   Binary OR Operator copies a bit if it exists in either operand. (A | B) = 61, i.e., 0011 1101"
            "\n^   Binary XOR Operator copies the bit if it is set in one operand but not both. (A ^ B) = 49, i.e., 0011 0001"
            "\n~   Binary One's Complement Operator is unary and has the effect of 'flipping' bits.  (~A ) = ~(60), i.e,. -0111101"
            "\n<<  Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand. A << 2 = 240 i.e., 1111 0000"
            "\n>>  Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. A >> 2 = 15 i.e., 0000 1111\n"

            "\nAssignment Operators\n"

            "\nOperator - Description - Example"
            "\n=   Simple assignment operator. Assigns values from right side operands to left side operand C = A + B will assign the value of A + B to C"
            "\n+=  Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand. C += A is equivalent to C = C + A"
            "\n-=  Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand. C -= A is equivalent to C = C - A"
            "\n*=  Multiply AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand. C *= A is equivalent to C = C * A"
            "\n/=  Divide AND assignment operator. It divides the left operand with the right operand and assigns the result to the left operand. C /= A is equivalent to C = C / A"
            "\n%=  Modulus AND assignment operator. It takes modulus using two operands and assigns the result to the left operand. C %= A is equivalent to C = C % A"
            "\n<<= Left shift AND assignment operator. C <<= 2 is same as C = C << 2"
            "\n>>= Right shift AND assignment operator. C >>= 2 is same as C = C >> 2"
            "\n&=  Bitwise AND assignment operator. C &= 2 is same as C = C & 2"
            "\n^=  Bitwise exclusive OR and assignment operator. C ^= 2 is same as C = C ^ 2"
            "\n|=  Bitwise inclusive OR and assignment operator. C |= 2 is same as C = C | 2\n"

            "\nMisc Operators --> sizeof & ternary\n"

            "\nOperator - Description - Example"
            "\nsizeof() Returns the size of a variable. sizeof(a), where a is integer, will return 4."
            "\n& Returns the address of a variable. &a; returns the actual address of the variable."
            "\n* Pointer to a variable. *a;"
            "\n? : Conditional Expression. If Condition is true ? then value X : otherwise value Y\n"

            "\nOperators Precedence in C\n"

            "\nCategory - Operator - Associativity"
            "\nPostfix () [] -> . ++ - - Left to right"
            "\nUnary + - ! ~ ++ - - (type)* & sizeof Right to left"
            "\nMultiplicative * / % Left to right"
            "\nAdditive + - Left to right"
            "\nShift << >> Left to right"
            "\nRelational < <= > >= Left to right"
            "\nEquality == != Left to right"
            "\nBitwise AND & Left to right"
            "\nBitwise XOR ^ Left to right"
            "\nBitwise OR | Left to right"
            "\nLogical AND && Left to right"
            "\nLogical OR || Left to right"
            "\nConditional ?: Right to left"
            "\nAssignment = += -= *= /= %= >>= <<= &= ^= |= Right to left"
            "\nComma , Left to right\n"

            "\nOther Operators in C\n"

            "\na + b * c\n"
            );
            break;

            case 19:
            puts("\n### Arithmetic Operators ###\n"

            "\nOperator - Description"
            "\n+  Adds two operands."
            "\n-  Subtracts second operand from the first."
            "\n*  Multiplies both operands."
            "\n/  Divides numerator by denominator."
            "\n%  Modulus Operator and remainder of after an integer division."
            "\n++ Increment operator increases the integer value by one."
            "\n-- Decrement operator decreases the integer value by one.\n"

            "\nExample: Arithmetic Operators in C\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int op1 = 10;"
            "\n  int op2 = 3;"
            "\n  printf(\"Operand1: %d Operand2: %d \\n\n\", op1, op2);"
            "\n  printf(\"Addition of op1 and op2: %d\\n\", op1 + op2);"
            "\n  printf(\"Subtraction of op2 from op1: %d\\n\", op1 - op2);"
            "\n  printf(\"Multiplication of op1 and op2: %d\\n\", op1 * op2);"
            "\n  printf(\"Division of op1 by op2: %d\\n\", op1/op2);"
            "\n  return 0;"
            "\n}\n"

            "\nType Casting in C"
            "\nprintf(\"Division of op1 by op2: %f\\n\", op1/op2);"
            "\nprintf(\"Division of op1 by op2: %f\\n\", (float)op1/op2);\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int op1 = 10;"
            "\n  float op2 = 2.5;"
            "\n  printf(\"Operand1: %d Operand2: %f\\n\", op1, op2);"
            "\n  printf(\"Addition of op1 and op2: %f\\n\", op1 + op2);"
            "\n  printf(\"Subtraction of op2 from op1: %f\\n\", op1 - op2);"
            "\n  printf(\"Multiplication of op1 and op2: %f\\n\", op1 * op2);"
            "\n  printf(\"Division of op1 by op2: %f\\n\", op1/op2);"
            "\n  return 0;"
            "\n}\n"

            "\nArithmetic Operations with char Data Type\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char op1 = 'F';"
            "\n  int op2 = 3;"
            "\n  printf(\"operand1: %c operand2: %d\\n\", op1, op2);"
            "\n  printf(\"Addition of op1 and op2: %d\\n\", op1 + op2);"
            "\n  printf(\"Subtraction of op2 from op1: %d\\n\", op1 - op2);"
            "\n  printf(\"Multiplication of op1 and op2: %d\\n\", op1 * op2);"
            "\n  printf(\"Division of op1 by op2: %d\\n\", op1/op2);"
            "\n  return 0;"
            "\n}\n"

            "\nModulo Operator in C\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int op1 = 10;"
            "\n  int op2 = 3;"
            "\n  printf(\"Operand1: %d Operand2: %d\\n\", op1, op2);"
            "\n  printf(\"Modulo of op1 and op2: %d\\n\", op1%op2);"
            "\n  return 0;"
            "\n}\n"

            "\nfloat op1 = 10;"
            "\nint op2 = 3;"
            "\nprintf(\"Modulo of op1 and op2: %d\\n\", op1%op2);\n"

            "\nNegation Operator in C\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int op1 = 5;"
            "\n  int op2 = -op1;"
            "\n  printf(\"Operand1: %d Operand2: %d\\n\", op1, op2);"
            "\n  return 0;"
            "\n}\n"
            );
            break;

            case 20:
            puts("\n### Relational Operators ###\n"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int op1 = 5;"
            "\n  int op2 = 3;"
            "\n  printf(\"op1: %d op2: %d op1 < op2: %d\\n\", op1, op2, op1 < op2);"
            "\n  return 0;"
            "\n}\n"

            "\nOperator - Description - Example\n"
            "\n== Checks if the values of two operands are equal or not. If yes, then the condition becomes true. (A == B)"
            "\n!= Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true. (A != B)"
            "\n>  Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true. (A > B)"
            "\n<  Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true. (A < B)"
            "\n>= Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true. (A >= B)"
            "\n<= Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true. (A <= B)\n"

            "\n## Example 2 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 21;"
            "\n  int b = 10;"
            "\n  int c;"
            "\n  printf(\"a: %d b: %d\\n\", a,b);"
            "\n  if(a == b){"
            "\n    printf(\"Line 1 - a is equal to b\\n\" );"
            "\n  } else {"
            "\n    printf(\"Line 1 - a is not equal to b\\n\" );"
            "\n  }\n"
            "\n  if (a < b){"
            "\n    printf(\"Line 2 - a is less than b\\n\" );"
            "\n  } else {"
            "\n    printf(\"Line 2 - a is not less than b\\n\" );"
            "\n  }\n"
            "\n  if (a > b){"
            "\n    printf(\"Line 3 - a is greater than b\\n\" );"
            "\n  } else {"
            "\n    printf(\"Line 3 - a is not greater than b \\n\\n\" );"
            "\n  }\n"
            "\n  /* Lets change value of a and b */"
            "\n  a = 5;"
            "\n  b = 20;"
            "\n  printf(\"a: %d b: %d\\n\", a,b);"
            "\n  if (a <= b){"
            "\n    printf(\"Line 4 - a is either less than or equal to  b\\n\" );"
            "\n  }\n"
            "\n  if (b >= a){"
            "\n    printf(\"Line 5 - b is either greater than  or equal to b\\n\" );"
            "\n  }\n"
            "\n  if(a != b){"
            "\n    printf(\"Line 6 - a is not equal to b\\n\" );"
            "\n  } else {"
            "\n    printf(\"Line 6 - a is equal to b\\n\" );"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\n## Example 3 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 5;"
            "\n  int b = 3;\n"
            "\n  if (a = b){"
            "\n  printf(\"a is equal to b\");"
            "\n  } else {"
            "\n  printf(\"a is not equal to b\");"
            "\n  }\n"
            "\n  return 0;"
            "\n}\n"

            "\n## Example 4 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  char a = 'B';"
            "\n  char b = 'd';\n"
            "\n  printf(\"a: %c b: %c\\n\", a,b);"
            "\n  if(a == b){"
            "\n    printf(\"Line 1 - a is equal to b \\n\");"
            "\n  } else {"
            "\n    printf(\"Line 1 - a is not equal to b \\n\");"
            "\n  }\n"
            "\n  if (a < b){"
            "\n    printf(\"Line 2 - a is less than b \\n\");"
            "\n  } else {"
            "\n    printf(\"Line 2 - a is not less than b \\n\");"
            "\n  }\n"
            "\n  if (a > b) {"
            "\n    printf(\"Line 3 - a is greater than b \\n\");"
            "\n  } else {"
            "\n    printf(\"Line 3 - a is not greater than b \\n\");"
            "\n  }\n"
            "\n  if(a != b) {"
            "\n    printf(\"Line 4 - a is not equal to b \\n\");"
            "\n  } else {"
            "\n    printf(\"Line 4 - a is equal to b \\n\");"
            "\n  }\n"
            "\n  return 0;"
            "\n}\n"
            );
            break;

            case 21:
            puts("\n### Logical Operators ###\n"

            "\nOperator - Description - Example"
            "\n&& Called Logical AND operator. If both the operands are non-zero, then the condition becomes true. (A && B)"
            "\n|| Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true. (A || B)"
            "\n! Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false. !(A)"

            "\nLogical AND (&&) Operator"
            "\na  b  a&&b"
            "\ntrue true True"
            "\ntrue false False"
            "\nfalse true False"
            "\nfalse false False\n"

            "\nLogical OR (||) Operator\n"
            "\na  b  a||b"
            "\ntrue  true  True"
            "\ntrue  false True"
            "\nfalse true  true"
            "\nfalse false false\n"

            "\nLogical NOT (!) Operator\n"
            "\nA  !a"
            "\nTrue  False"
            "\nFalse True\n"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 5;"
            "\n  int b = 20;\n"
            "\n  if (a && b){"
            "\n    printf(\"Line 1 - Condition is true\\n\");"
            "\n  }\n"
            "\n  if (a || b){"
            "\n    printf(\"Line 2 - Condition is true\\n\");"
            "\n  }\n"
            "\n  /* lets change the value of  a and b */"
            "\n  a = 0;"
            "\n  b = 10;\n"
            "\n  if (a && b){"
            "\n    printf(\"Line 3 - Condition is true\\n\");"
            "\n  } else {"
            "\n    printf(\"Line 3 - Condition is not true\\n\");"
            "\n  }\n"
            "\n  if (!(a && b)){"
            "\n    printf(\"Line 4 - Condition is true\\n\");"
            "\n  }\n"
            "\n  return 0;"
            "\n}\n"

            "\n## Example 2 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  char a = 'a';"
            "\n  char b = '\0'; // Null character\n"
            "\n  if (a && b){"
            "\n    printf(\"Line 1 - Condition is true\\n\");"
            "\n  }\n"
            "\n  if (a || b){"
            "\n    printf(\"Line 2 - Condition is true\\n\");"
            "\n  }\n"
            "\n  return 0;"
            "\n}\n"

            "\n## Example 3 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int phy = 50;"
            "\n  int maths = 60;"
            "\n  if (phy < 50 || maths < 50){"
            "\n    printf(\"Result:Fail\");"
            "\n  } else {"
            "\n    printf(\"Result:Pass\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\n## Example 4 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int phy = 50;"
            "\n  int maths = 60;"
            "\n  if (phy >= 50 && maths >= 50){"
            "\n    printf(\"Result: Pass\");"
            "\n  } else {"
            "\n    printf(\"Result: Fail\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\n## Example 5 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int i = 0;"
            "\n  while (!(i > 5)){"
            "\n    printf(\"i = %d\\n\", i);"
            "\n    i++;"
            "\n  }"
            "\n  return 0;"
            "\n}\n"
            );
            break;

            case 22:
            puts("\n### Bitwise Operators ###\n"

            "\n&  Binary AND Operator copies a bit to the result if it exists in both operands. (A & B)"
            "\n|  Binary OR Operator copies a bit if it exists in either operand. (A | B)"
            "\n^  Binary XOR Operator copies the bit if it is set in one operand but not both. (A ^ B)"
            "\n~  Binary One's Complement Operator is unary and has the effect of 'flipping' bits. (~A)"
            "\n<< Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand. A << 2"
            "\n>> Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. A >> 2\n"

            "\n## Bitwise AND Operator (&) in C ##\n"
            "\nbit a  bit b  a & b"
            "\n0  0  0"
            "\n0  1  0"
            "\n1  0  0"
            "\n1  1  1\n"

            "\n  0011 1100"
            "\n& 0000 1101"
            "\n  ---------"
            "\n= 0000 1100\n"

            "\n## Bitwise OR (|) Operator ##\n"

            "\nbit a  bit b  a | b"
            "\n0  0  0"
            "\n0  1  1"
            "\n1  0  1"
            "\n1  1  1\n"

            "\n  0011 1100"
            "\n| 0000 1101"
            "\n  ---------"
            "\n= 0011 1101"

            "\nBitwise XOR (^) Operator\n"
            "\nbit a  bit b  a ^ b"
            "\n0  0  0"
            "\n0  1  1"
            "\n1  0  1"
            "\n1  1  0\n"

            "\n  0011 1100"
            "\n^ 0000 1101"
            "\n  ---------"
            "\n= 0011 0001\n"

            "\n## Shift (<<) Operator ##"
            "\n0011 1100 << 2 = 1111 0000\n"

            "\nThe Right Shift (>>) Operator"
            "\n0011 1100 >> 2 = 0000 1111\n"

            "\nThe 1's Complement (~) Operator"
            "\na  ~a"
            "\n0  1"
            "\n1  0\n"

            "\n~ 0011 1100 = 1100 0011\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  unsigned int a = 60;	/* 60 = 0011 1100 */"
            "\n  unsigned int b = 13;	/* 13 = 0000 1101 */"
            "\n  int c = 0;\n"
            "\n  c = a & b;       /* 12 = 0000 1100 */"
            "\n  printf(\"Line 1 - Value of c is %d\\n\", c);\n"
            "\n  c = a | b;       /* 61 = 0011 1101 */"
            "\n  printf(\"Line 2 - Value of c is %d\\n\", c);\n"
            "\n  c = a ^ b;       /* 49 = 0011 0001 */"
            "\n  printf(\"Line 3 - Value of c is %d\\n\", c);\n"
            "\n  c = ~a;          /*-61 = 1100 0011 */"
            "\n  printf(\"Line 4 - Value of c is %d\\n\", c);\n"
            "\n  c = a << 2;     /* 240 = 1111 0000 */"
            "\n  printf(\"Line 5 - Value of c is %d\\n\", c);\n"
            "\n  c = a >> 2;     /* 15 = 0000 1111 */"
            "\n  printf(\"Line 6 - Value of c is %d\\n\", c);\n"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nLine 1 - Value of c is 12"
            "\nLine 2 - Value of c is 61"
            "\nLine 3 - Value of c is 49"
            "\nLine 4 - Value of c is -61"
            "\nLine 5 - Value of c is 240"
            "\nLine 6 - Value of c is 15\n"
            );
            break;

            case 23:
            puts("\n## Assignment Operators ##\n"

            "\nOperator Description Example"
            "\n= Simple assignment operator. Assigns values from right side operands to left side operand C = A + B will assign the value of A + B to C"
            "\n+= Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand. C += A is equivalent to C = C + A"
            "\n-= Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand. C -= A is equivalent to C = C - A"
            "\n*= Multiply AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand. C *= A is equivalent to C = C * A"
            "\n/= Divide AND assignment operator. It divides the left operand with the right operand and assigns the result to the left operand. C /= A is equivalent to C = C / A"
            "\n%= Modulus AND assignment operator. It takes modulus using two operands and assigns the result to the left operand. C %= A is equivalent to C = C % A"
            "\n<<= Left shift AND assignment operator. C <<= 2 is same as C = C << 2"
            "\n>>= Right shift AND assignment operator. C >>= 2 is same as C = C >> 2"
            "\n&= Bitwise AND assignment operator. C &= 2 is same as C = C & 2"
            "\n^= Bitwise exclusive OR and assignment operator. C ^= 2 is same as C = C ^ 2"
            "\n|= Bitwise inclusive OR and assignment operator. C |= 2 is same as C = C | 2\n"

            "\nSimple Assignment Operator (=)\n"

            "\nint x = 10;       // declaration with initialization"
            "\nint y;            // declaration"
            "\ny = 20;           // assignment later"
            "\nint z = x + y;    // assign an expression"
            "\nint d = 3, f = 5; // definition and initializing d and f."
            "\nchar x = 'x';     // the variable x has the value 'x'.\n"

            "\nint g = 20; // valid statement"
            "\n10 = 20;    // invalid statement\n"

            "Augmented Assignment Operators"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>"

            "\nint main(){"
            "\n  int a = 10;"
            "\n  int b = 20;"
            "\n  a += b;"
            "\n  printf(\"a: %d\\\", a);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\na: 30"

            "\n## Example 2 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 60;"
            "\n  int b = 2;"
            "\n  a <<= b;"
            "\n  printf(\"a: %d\", a);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\na: 240\n"

            "\n## Example 3 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 21;"
            "\n  int c;"
            "\n  c =  a;"
            "\n  printf(\"Line 1 - =  Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c +=  a;"
            "\n  printf(\"Line 2 - += Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c -=  a;"
            "\n  printf(\"Line 3 - -= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c *=  a;"
            "\n  printf(\"Line 4 - *= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c /=  a;"
            "\n  printf(\"Line 5 - /= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c  = 200;"
            "\n  c %=  a;"
            "\n  printf(\"Line 6 - %%= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c <<=  2;"
            "\n  printf(\"Line 7 - <<= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c >>=  2;"
            "\n  printf(\"Line 8 - >>= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c &=  2;"
            "\n  printf(\"Line 9 - &= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c ^=  2;"
            "\n  printf(\"Line 10 - ^= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  c |=  2;"
            "\n  printf(\"Line 11 - |= Operator Example, Value of c = %d\\n\", c);\n"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nLine 1 - =  Operator Example, Value of c = 21"
            "\nLine 2 - += Operator Example, Value of c = 42"
            "\nLine 3 - -= Operator Example, Value of c = 21"
            "\nLine 4 - *= Operator Example, Value of c = 441"
            "\nLine 5 - /= Operator Example, Value of c = 21"
            "\nLine 6 - %= Operator Example, Value of c = 11"
            "\nLine 7 - <<= Operator Example, Value of c = 44"
            "\nLine 8 - >>= Operator Example, Value of c = 11"
            "\nLine 9 - &= Operator Example, Value of c = 2"
            "\nLine 10 - ^= Operator Example, Value of c = 0"
            "\nLine 11 - |= Operator Example, Value of c = 2\n"
            );
            break;

            case 24:
            puts("\n### Unary Operators ###\n"

            "\n## The Increment Operator in C ##\n"

            "\n## The Decrement Operator in C ##\n"

            "\n## The Unary \"+\" Operator in C ##\n"

            "\nExample\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char x = 'A';"
            "\n  char y = +x;"
            "\n  float a = 1.55;"
            "\n  float b = +a;"
            "\n  printf (\"x: %c y: %c\\n\", x,y);"
            "\n  printf (\"a: %f y: %f\\n\", a,b);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx: A y: A"
            "\na: 1.550000 y: 1.550000\n"

            "The Unary \"-\" Operator in C"

            "\nExample\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int x = 5;"
            "\n  int y = -x;"
            "\n  printf(\"x: %d y: %d\\n\", x, y);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx: 5 y: -5"

            "\nThe Address-of Operator (&) in C\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char x = 'A';"
            "\n  printf (\"Address of x: %d\\n\", &x);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nAddress of x: 6422047"

            "\nchar x = 'A';"
            "\nprintf (\"Address of x: %p\\n\", &x);\n"

            "\nAddress of x: 000000000061FE1F\n"

            "\nint x = 10;"
            "\nint *y = &x;\n"

            "The Dereference Operator (*) in C"

            "\nint x = 10;"
            "\nint *y = &x;\n"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int x = 10;"
            "\n  int *y = &x;"
            "\n  printf (\"x: %d Address of x: %d\\n\", x, &x);"
            "\n  printf(\"Value at x with Dereference: %d\", *y);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx: 10 Address of x: 6422036"
            "\nValue at x with Dereference: 10\n"

            "\n## Example 2 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int x = 10;"
            "\n  int *y = &x;"
            "\n  printf(\"x: %d Address of x %d\\n\", x, &x);"
            "\n  *y = 20;"
            "\n  printf(\"x: %d with Dereference: %d\", x, *y);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx: 10 Address of x: 6422036"
            "\nx: 20 with dereference: 20\n"

            "\nThe Logical NOT Operator (!) in C\n"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 0;"
            "\n  int b = 20;"
            "\n  if (!(a && b)){"
            "\n    printf(\"Line 1 - Condition is true\\n\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nLine 1 - Condition is true\n"

            "\n## Example 2 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int i = 0;"
            "\n  while (!(i > 5)){"
            "\n    printf(\"i = %d\\n\", i);"
            "\n    i++;"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\ni = 0"
            "\ni = 1"
            "\ni = 2"
            "\ni = 3"
            "\ni = 4"
            "\ni = 5\n"

            "\nThe 1's Complement Operator (~) in C\n"
            "\na  ~a"
            "\n0   1"
            "\n1   0\n"

            "\n~ 0011 1100 = 1100 0011\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\nint a = 60;	/* 60 = 0011 1100 */"
            "\nint c = 0;"
            "\nc = ~a;      /* -61 = 1100 0011 */"
            "\nprintf(\"Value of c is %d \\n\", c);"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput:"
            "\nValue of c is -61\n"
            );
            break;

            case 25:
            puts("\n### Increment and Decrement Operators ###\n"

            "\nC - Increment and Decrement Operators\n"

            "\nExample of Increment and Decrement Operators\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int a = 5, b = 5, c = 5, d = 5;"
            "\n  a++; // postfix increment"
            "\n  ++b; // prefix increment"
            "\n  c--; // postfix decrement"
            "\n  --d; // prefix decrement"
            "\n  printf(\"a = %d\\n\", a);"
            "\n  printf(\"b = %d\\n\", b);"
            "\n  printf(\"c = %d\\n\", c);"
            "\n  printf(\"d = %d\\n\", d);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\na = 6"
            "\nb = 6"
            "\nc = 4"
            "\nd = 4\n"

            "\nTypes of Increment Operator\n"

            "\nPre (Prefix) Increment Operator\n"

            "\n++variable_name;\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int x = 10;"
            "\n  int y = 10 + ++x;"
            "\n  printf(\"x = %d, y = %d\\n\", x, y);"
            "\n  return 0;"
            "\n}\n"

            "\nx = 11, y = 21\n"

            "\nPost (Postfix) Increment Operator\n"

            "\nvariable_name++;"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"
            "\nint main() {"
            "\n  int x = 10;"
            "\n  int y = 10 + x++;"
            "\n  printf(\"x = %d, y = %d\\n\", x, y);"
            "\n  return 0;"
            "\n}\n"

            "\nx = 11, y = 20\n"

            "\nTypes of Decrement Operator\n"

            "\nPre (Prefix) decrement Operator\n"

            "\n--variable_name;\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"
            "\nint main() {"
            "\n  int x = 10;"
            "\n  int y = 10 + --x;"
            "\n  printf(\"x = %d, y = %d\\n\", x, y);"
            "\n  return 0;"
            "\n}\n"

            "\nx = 9, y = 19\n"

            "\nPost (Postfix) Decrement Operator\n"

            "\nvariable_name--;\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int x = 10;"
            "\n  int y = 10 + x--;"
            "\n  printf(\"x = %d, y = %d\\n\", x, y);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx = 9, y = 20\n"

            "\nMore Examples of Increment and Decrement Operators\n"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  char a = 'a', b = 'M';"
            "\n  int x = 5, y = 23;"
            "\n  printf(\"a: %c b: %c\\n\", a, b);"
            "\n  a++;"
            "\n  printf(\"postfix increment a: %c\\n\", a);"
            "\n  ++b;"
            "\n  printf(\"prefix increment b: %c\\n\", b);"
            "\n  printf(\"x: %d y: %d\\n\", x, y);"
            "\n  x--;"
            "\n  printf(\"postfix decrement x : %d\\n\", x);"
            "\n  --y;"
            "\n  printf(\"prefix decrement y : %d\\n\", y);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\na: a b: M"
            "\npostfix increment a: b"
            "\nprefix increment b: N\n"

            "\nx: 5 y: 23"
            "\npostfix decrement x: 4"
            "\nprefix decrement y: 22\n"

            "\nExample 2\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int x = 5, y = 5;"
            "\n  printf(\"x: %d y: %d\\n\", x,y);"
            "\n  printf(\"postfix increment x: %d\\n\", x++);"
            "\n  printf(\"prefix increment y: %d\\n\", ++y);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx: 5 y: 5"
            "\npostfix increment x: 5"
            "\nprefix increment y: 6\n"

            "\nOperator Precedence of Increment and Decrement Operators\n"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int x = 5, z;"
            "\n  printf(\"x: %d \\n\", x);"
            "\n  z = x++;"
            "\n  printf(\"x: %d z: %d\\n\", x, z);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nx: 5"
            "\nx: 6 z: 5\n"

            "\n## Example 2 ##\n"

            "\n#include <stdio.h>"
            "\nint main(){"
            "\nint x = 5, y = 5, z;"
            "\nprintf(\"x: %d y: %d\\n\", x,y);"
            "\nz = ++y;"
            "\nprintf(\"y: %d z: %d\\n\", y ,z);"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput:"
            "\ny: 5"
            "\ny: 6 z: 6\n"

            "\n## Example 3 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\nint x = 5, y = 5, z;"
            "\nz = x++ + ++y;"
            "\nprintf(\"x: %d y: %d z: %d\\n\", x,y,z);"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput"
            "\nx: 6 y:6 z: 11\n"

            "\nUsing the Increment Operator in Loop\n"

            "\nfor (init_val; final_val; increment) {"
            "\n  statement(s);"
            "\n}\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int x;"
            "\n  for (x = 1; x <= 5; x++){"
            "\n    printf(\"x: %d\\n\", x);"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx: 1"
            "\nx: 2"
            "\nx: 3"
            "\nx: 4"
            "\nx: 5\n"
            );
            break;

            case 26:
            puts("\n### Ternary Operator ###\n"

            "\nSyntax of Ternary Operator in C\n"

            "\nexp1 ? exp2 : exp3\n"

            "\nexp1 - A Boolean expression evaluating to true or false"
            "\nexp2 - Returned by the ? operator when exp1 is true"
            "\nexp3 - Returned by the ? operator when exp1 is false\n"

            "\nExample 1: Ternary Operator in C\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 10;"
            "\n  (a % 2 == 0) ? printf(\"%d is Even \\n\", a) : printf(\"%d is Odd \\n\", a);"
            "\n  return 0;"
            "\n}\n"

            "Output:"
            "10 is Even"
            "15 is Odd"

            "Example 2"

            "\n#include <stdio.h>\n"
            "\nint main() {"
            "\n  int a = 10;"
            "\n  if (a % 2 == 0){"
            "\n    printf(\"%d is Even\\n\", a);"
            "\n  } else {"
            "\n    printf(\"%d is Odd\\n\", a);"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\n10 is Even"

            "\n## Example 3 ##"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 100, b = 20, c;"
            "\n  c = (a >= b) ? a : b;"
            "\n  printf (\"a: %d b: %d c: %d\\n\", a, b, c);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\na: 100 b: 20 c: 100\n"

            "\n## Example 4 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 100, b = 20, c;"
            "\n  if (a >= b){"
            "\n    c = a;"
            "\n  } else {"
            "\n    c = b;"
            "\n  }"
            "\n  printf (\"a: %d b: %d c: %d\\n\", a, b, c);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\na: 100 b: 20 c: 100\n"

            "\n## Example 5 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 100, b = 20, c;"
            "\n  c = (a >= b) ? printf (\"a is larger \"), c = a : printf(\"b is larger \"), c = b;"
            "\n  printf (\"a: %d b: %d c: %d\\n\", a, b, c);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\na is larger a: 100 b: 20 c: 20\n"

            "\n## Example 6 ##\n"

            "\n#include <stdio.h>\n"

            "\nint main(){"
            "\n  int a = 100, b = 20, c;"
            "\n  if(a >= b){"
            "\n    printf(\"a is larger \\n\");"
            "\n    c = a;"
            "\n  } else {"
            "\n    printf(\"b is larger \\n\");"
            "\n    c = b;"
            "\n  }"
            "\n  printf (\"a: %d b: %d c: %d\\n\", a, b, c);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\na is larger"
            "\na: 100 b: 20 c: 100\n"

            "\nNested Ternary Operator"

            "\nexp1 ? (exp2 ? expr3 : expr4) : (exp5 ? expr6: expr7)"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 15;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  (a % 2 == 0) ? ("
            "\n    (a%3 == 0)? printf(\"divisible by 2 and 3\") : printf(\"divisible by 2 but not 3\"))"
            "\n  : ("
            "\n    (a%3 == 0)? printf(\"divisible by 3 but not 2\") : printf(\"not divisible by 2, not divisible by 3\")"
            "\n  );"
            "\n  return 0;"
            "\n}"

            "\nOutput"
            "\na: 15"
            "\ndivisible by 3 but not 2"
            "\na: 16"
            "\ndivisible by 2 but not 3"
            "\na: 17"
            "\nnot divisible by 2, not divisible by 3"
            "\na: 18"
            "\ndivisible by 2 and 3"

            "\nExample 2"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 15;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  if(a % 2 == 0){"
            "\n    if (a % 3 == 0){"
            "\n      printf(\"divisible by 2 and 3\");"
            "\n    } else {"
            "\n      printf(\"divisible by 2 but not 3\");"
            "\n    }"
            "\n  } else {"
            "\n    if(a % 3 == 0){"
            "\n      printf(\"divisible by 3 but not 2\");"
            "\n    } else {"
            "\n      printf(\"not divisible by 2, not divisible by 3\");"
            "\n    }"
            "\n  }"
            "\n  return 0;"
            "\n}"

            "\nOutput"
            "\na: 15"
            "\ndivisible by 3 but not 2\n"
            );
            break;

            case 27:
            puts("\n### The sizeof Operator ###\n"

            "\nsizeof(type or var);\n"

            "\nExample 1: Using the sizeof Operator in C\n"

            "\n#include <stdio.h>"
            "\nint main(){"
            "\nint a = 16;"
            "\nprintf(\"Size of variable a: %d \\n\",sizeof(a));"
            "\nprintf(\"Size of int data type: %d \\n\",sizeof(int));"
            "\nprintf(\"Size of char data type: %d \\n\",sizeof(char));"
            "\nprintf(\"Size of float data type: %d \\n\",sizeof(float));"
            "\nprintf(\"Size of double data type: %d \\n\",sizeof(double));"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput"
            "\nSize of variable a: 4"
            "\nSize of int data type: 4"
            "\nSize of char data type: 1"
            "\nSize of float data type: 4"
            "\nSize of double data type: 8\n"

            "\nExample 2: Using sizeof with Struct\n"

            "\n#include <stdio.h>\n"
            "\nstruct employee {"
            "\n  char name[10];"
            "\n  int age;"
            "\n  double percent;"
            "\n};\n"
            "\nint main(){"
            "\n  struct employee e1 = {\"Raghav\", 25, 78.90};"
            "\n  printf(\"Size of employee variable: %d\\n\",sizeof(e1));"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nSize of employee variable: 24"

            "\nExample 3: Using sizeof with Array"
            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};"
            "\n  printf(\"Size of arr: %d\\n\", sizeof(arr));"
            "\n}\n"

            "\nOutput:"
            "\nSize of arr: 40\n"

            "\nExample 4: Using sizeof to Find the Length of an Array\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};"
            "\n  int y = sizeof(arr)/sizeof(int);"
            "\n  printf(\"No of elements in arr: %d\\n\", y);"
            "\n}\n"

            "\nOutput:"
            "\nNo of elements in arr: 10\n"

            "\nExample 5: Using sizeof in Dynamic Memory Allocation\n"

            "\ntype *ptr = (type *) malloc(sizeof(type)*number);\n"

            "\nint *ptr = (int *)malloc(sizeof(int)*10);\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  char a = 'S';"
            "\n  double b = 4.65;"
            "\n  printf(\"Size of variable a: %d\\n\",sizeof(a));"
            "\n  printf(\"Size of an expression: %d\\n\",sizeof(a+b));"
            "\n  int s = (int)(a+b);"
            "\n  printf(\"Size of explicitly converted expression: %d\\n\",sizeof(s));"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nSize of variable a: 1"
            "\nSize of an expression: 8"
            "\nSize of explicitly converted expression: 4\n"

            "\nExample 6: The Size of a Pointer in C\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  printf(\"Size of int data type: %d \\n\", sizeof(int *));"
            "\n  printf(\"Size of char data type: %d \\n\", sizeof(char *));"
            "\n  printf(\"Size of float data type: %d \\n\", sizeof(float *));"
            "\n  printf(\"Size of double data type: %d \\n\", sizeof(double *));"
            "\n  printf(\"Size of double pointer type: %d \\n\", sizeof(int **));"
            "\n}\n"

            "\nOutput:"
            "\nSize of int data type: 8"
            "\nSize of char data type: 8"
            "\nSize of float data type: 8"
            "\nSize of double data type: 8"
            "\nSize of double pointer type: 8\n"
            );
            break;

            case 28:
            puts("\n### Operator Precedence ###\n"

            "\nCategory - Operator - Associativity"
            "\nPostfix () [] -> . ++ - - Left to right"
            "\nUnary + - ! ~ ++ - - (type)* & sizeof Right to left"
            "\nMultiplicative * / % Left to right"
            "\nAdditive + - Left to right"
            "\nShift << >> Left to right"
            "\nRelational < <= > >= Left to right"
            "\nEquality == != Left to right"
            "\nBitwise AND & Left to right"
            "\nBitwise XOR ^ Left to right"
            "\nBitwise OR | Left to right"
            "\nLogical AND && Left to right"
            "\nLogical OR || Left to right"
            "\nConditional ?: Right to left"
            "\nAssignment = += -= *= /= %= >>= <<= &= ^= |= Right to left"
            "\nComma , Left to right\n"

            "\nOperator Associativity\n"

            "\n15 / 5 * 2\n"

            "\n(15 / 5) * 2\n"

            "\n3 * 2 = 6\n"

            "\n## Example 1 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 20;"
            "\n  int b = 10;"
            "\n  int c = 15;"
            "\n  int d = 5;"
            "\n  int e;"
            "\n  e = a + b * c / d;"
            "\n  printf(\"e : %d\\n\",e);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\ne: 50\n"

            "\n## Example 2 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 20;"
            "\n  int b = 10;"
            "\n  int c = 15;"
            "\n  int d = 5;"
            "\n  int e;"
            "\n  e = (a + b) * c / d;"
            "\n  printf(\"e:  %d\\n\",  e);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\ne: 90\n"

            "\n## Example 3 ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 20;"
            "\n  int b = 10;"
            "\n  int c = 15;"
            "\n  int d = 5;"
            "\n  int e;"
            "\n  e = (a + b) * (c / d);"
            "\n  printf(\"e: %d\\n\",  e);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\ne: 90\n"

            "\nPrecedence of Post / Prefix Increment / Decrement Operators\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int x = 5, y = 5, z;"
            "\n  printf(\"x: %d \\n\", x);"
            "\n  z = x++;"
            "\n  printf(\"Postfix increment: x: %d z: %d\\n\", x, z);"
            "\n  z = ++y;"
            "\n  printf(\"Prefix increment. y: %d z: %d\\n\", y ,z);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\nx: 5"
            "\nPostfix increment: x: 6 z: 5"
            "\nPrefix increment. y: 6 z: 6\n"

            "\nx > 50 && y > 50\n"

            "\nOperator - Description - Example"
            "\nsizeof() Returns the size of a variable. sizeof(a), where a is integer, will return 4."
            "\n& Returns the address of a variable. &a; returns the actual address of the variable."
            "\n* Pointer to a variable. *a;"
            "\n?: Conditional Expression. If Condition is true ? then value X, else value Y"
            "\n. Member access operator var.member"
            "\n-> Access members of a struct variable with pointerptr -> member;\n"

            "\nThe sizeof Operator in C\n"

            "\nsizeof(type or var);\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 16;"
            "\n  printf(\"Size of variable a : %d\\n\",sizeof(a));"
            "\n  printf(\"Size of int data type : %d\\n\",sizeof(int));"
            "\n  printf(\"Size of char data type : %d\\n\",sizeof(char));"
            "\n  printf(\"Size of float data type : %d\\n\",sizeof(float));"
            "\n  printf(\"Size of double data type : %d\\n\",sizeof(double));"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nSize of variable a: 4"
            "\nSize of int data type: 4"
            "\nSize of char data type: 1"
            "\nSize of float data type: 4"
            "\nSize of double data type: 8\n"

            "\nAddress-of Operator in C\n"

            "\nint a;\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int var = 100;"
            "\n  printf(\"var: %d address: %d\", var, &var);"
            "\n  return 0;"
            "\n}\n"

            "Output:"
            "var: 100 address: 931055924"

            "The Dereference Operator in C"

            "type *var;"

            "int *x;"

            "float *y;"

            "int a;"
            "int *x = &a;"

            "float var1 = 10.55;"
            "int *intptr = &var1;"

            "initialization of 'int *' from incompatible pointer type 'float *' [-Wincompatible-pointer-types]"

            "## Example 1 ##"

            "#include <stdio.h>\n"

            "int main(){"
            "float var1 = 10.55;"
            "float *floatptr = &var1;"
            "printf(\"var1: %f \\naddress of var1: %d \\n\\nfloatptr: %d \\naddress of floatptr: %d\", var1, &var1, floatptr, &floatptr);"
            "return 0;"
            "}"

            "Output:"
            "var1: 10.550000"
            "address of var1: 6422044"

            "floatptr: 6422044"
            "address of floatptr: 6422032"

            "## Example 2 ##"

            "#include <stdio.h>\n"

            "int main(){"
            "float var1 = 10.55;"
            "float *floatptr = &var1;"
            "printf(\"var1: %f address of var1: %d\\n\",var1, &var1);"
            "printf(\"floatptr: %d address of floatptr: %d\\n\", floatptr, &floatptr);"
            "printf(\"var1: %f value at floatptr: %f\", var1, *floatptr);"
            "return 0;"
            "}"

            "Output"
            "var1: 10.550000 address of var1: 6422044"
            "floatptr: 6422044 address of floatptr: 6422032"
            "var1: 10.550000 value at floatptr: 10.550000"

            "The Ternary Operator in C"

            "exp1 ? exp2 : exp3"

            "exp1 - a Boolean expression that evaluates to True or False"
            "exp2 - returned by the ? operator when exp1 is true"
            "exp3 - returned by the ? operator when exp1 is false"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\nint a = 10;"
            "\n(a % 2==0) ? printf(\"%d is Even\\n\", a) : printf(\"%d is Odd\\n\", a);"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput:"
            "\n10 is Even"
            "\n15 is Odd"

            "\nThe Dot (.) Operator in C"

            "\nvar.member;"

            "\nstruct newtype {"
            "\ntype elem1;"
            "\ntype elem2;"
            "\ntype elem3;"
            "\n. . ."
            "\n. . ."
            "\n}\n;"

            "\nstruct newtype var;"

            "\nvar.elem1;"

            "\n#include <stdio.h>\n"
            "\nstruct book{"
            "\nchar title[10];"
            "\ndouble price;"
            "\nint pages;"
            "\n};\n"
            "\nint main(){"
            "\nstruct book b1 = {\"Learn C\", 675.50, 325};"
            "\nprintf(\"Title: %s\\n\", b1.title);"
            "\nprintf(\"Price: %lf\\n\", b1.price);"
            "\nprintf(\"No of Pages: %d\\n\", b1.pages);"
            "\nprintf(\"size of book struct: %d\", sizeof(struct book));"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput:"
            "\nTitle: Learn C"
            "\nPrice: 675.500000"
            "\nNo of Pages: 325"
            "\nsize of book struct: 32\n"

            "\nThe Indirection Operator in C\n"

            "\nstruct type {"
            "\ntype var1;"
            "\ntype var2;"
            "\ntype var3;"
            "\n. . ."
            "\n. . ."
            "\n};\n"

            "\nstruct type = var;\n"
            "\nstruct book {"
            "\nchar title[10];"
            "\ndouble price;"
            "\nint pages;"
            "\n};\n"

            "\nstruct book b1;\n"

            "\nstruct book b1 = {\"Learn C\", 675.50, 325};\n"

            "\nstruct book *strptr;\n"

            "\nstrptr = &b1;\n"

            "\n## Example ##\n"

            "\n#include <stdio.h>"
            "\n#include <string.h>\n"

            "\nstruct book {"
            "\nchar title[10];"
            "\ndouble price;"
            "\nint pages;"
            "\n};\n"

            "\nint main() {"
            "\nstruct book b1 = {\"Learn C\", 675.50, 325};"
            "\nstruct book *strptr;"
            "\nstrptr = &b1;"
            "\nprintf(\"Title: %s\\n\", strptr->title);"
            "\nprintf(\"Price: %lf\\n\", strptr->price);"
            "\nprintf(\"No of Pages: %d\\n\", strptr->pages);\n"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput:"
            "\nTitle: Learn C"
            "\nPrice: 675.500000"
            "\nNo of Pages: 325\n"
            );
            break;

            case 29:
            puts("\n### Decision Making ###\n"

            "\nDecision Making\n"

            "\nSequential logic"
            "\nDecision or branching"
            "\nRepetition or iteration\n"

            "\nSr.No. - Statement & Description"
            "\n1 if statement: An if statement consists of a boolean expression followed by one or more statements."
            "\n2 if...else statement: An if statement can be followed by an optional else statement, which executes when the Boolean expression is false."
            "\n3 nested if statements: You can use one if or else-if statement inside another if or else-if statement(s)."
            "\n4 switch statement: A switch statement allows a variable to be tested for equality against a list of values."
            "\n5 nested switch statements: You can use one switch statement inside another switch statement(s)."

            "\nIf Statement in C Programming"

            "\nif (Boolean expr){"
            "\nexpression;"
            "\n. . ."
            "\n}\n"

            "\nIf...else Statement in C Programming"

            "\nif (Boolean expr){"
            "\nexpression;"
            "\n. . ."
            "\n} else {"
            "\nexpression;"
            "\n. . ."
            "\n}\n"

            "\nNested If Statements in C Programming\n"

            "\nSwitch Statement in C Programming\n"

            "\nswitch(expression) {"
            "\ncase constant-expression:"
            "\nstatement(s);"
            "\nbreak; /* optional */\n"
                
            "\ncase constant-expression :"
            "\nstatement(s);"
            "\nbreak; /* optional */\n"
            
            "\n/* you can have any number of case statements */"
            "\ndefault : /* Optional */"
            "\nstatement(s);"
            "\n}\n"

            "\nThe ?: Operator in C Programming\n"

            "\nExp1 ? Exp2 : Exp3;\n"

            "\nThe Break Statement in C Programming\n"

            "\nThe Continue Statement in C Programming\n"

            "\nThe goto Statement in C Programming\n"

            "\ngoto label;"
            "\n.."
            "\n."
            "\nlabel: statement;\n"
            );
            break;

            case 30:
            puts("\n### The If Statement ###\n"
            
            "\nif Statement"

            "\nSyntax of if Statement"

            "\nif(boolean_expression) {"
            "\n  /* statement(s) will execute if the boolean expression is true */"
            "\n}\n"
            
            "\nHow if Statement Works?\n"

            "\nFlowchart of if Statement\n"

            "\nExample of if Statement in C\n"

            "\n#include <stdio.h>\n"
            
            "\nint main (){"
            "\n  /* local variable declaration */"
            "\n  int a;"
            "\n  // run the program for different values of \"a\""
            "\n  // Assign 12 first and 40 afterwards"
            "\n  a = 12;  //change to 40 and run again"
            "\n  printf(\"Value of a is : %d\\n\", a);"
            "\n  // check the boolean condition using if statement"
            "\n  if(a < 20){"
            "\n    //if the condition is true, then print the following"
            "\n    printf(\"a is less than 20\\n\" );"
            "\n  }"
            "\nreturn 0;"
            "\n}\n"

            "\nOutput"
            "\nValue of a is : 12"
            "\na is less than 20\n"

            "\nValue of a is: 40\n"

            "\nif Statement with Logical Operations\n"

            "\nExample\n"

            "\n#include <stdio.h>\n"
            "\nint main () {"
            "\n  /* local variable declaration */"
            "\n  int a, b, c;"
            "\n  /*use different values for a, b and c as"
            "\n    10, 5, 7"
            "\n    10, 20, 15"
            "\n  */"
            "\n  // change to 10,20,15 respectively next time"
            "\n  a = 10; b = 5; c = 7;"
            "\n  if (a>=b && a>=c){"
            "\n    printf (\"a is greater than b and c \\n\");"
            "\n  }"
            "\n  printf(\"a: %d b:%d c:%d\", a, b, c);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\n//when values for a, b and c are 10 5 7"
            "\na is greater than b and c"
            "\na: 10 b:5 c:7\n"

            "\n//when values for a, b and c are 10 20 15"
            "\na: 10 b:20 c:15\n"

            "\nMultiple if Statements\n"

            "\nExample\n"

            "\n#include <stdio.h>\n"
            "\nint main () {"
            "\n  // local variable declaration"
            "\n  int amount;"
            "\n  float discount, net;"
            "\n  /*Run the program for different values "
            "\n  of amount - 500, 2250 and 5200. Blocks in "
            "\n  respective conditions will be executed*/"
            "\n  // change to 2250 and 5200 and run again"
            "\n  amount = 500;"
            "\n  if (amount < 1000){"
            "\n    discount=0;"
            "\n  }"
            "\n  if (amount >= 1000 && amount<5000){"
            "\n    discount=5;"
            "\n  }"
            "\n  if (amount >= 5000){"
            "\n    discount=10;"
            "\n  }"
            "\n  net = amount - amount*discount/100;"
            "\n  printf(\"Amount: %d Discount: %f Net payable: %f\", amount, discount, net);"
            "\n  return 0;"
            "\n}\n"

            "//when the bill amount is 500"
            "Amount: 500 Discount: 0.000000 Net payable: 500.000000"

            "//when the bill amount is 2250"
            "Amount: 2250 Discount: 5.000000 Net payable: 2137.500000"

            "//when the bill amount is 5200"
            "Amount: 5200 Discount: 10.000000 Net payable: 4680.000000"

            "Checking Multiple Conditions With if Statement"

            "Example"

            "\n#include <stdio.h>\n"
            "\n  int main (){"
            "\n  /* local variable declaration */"
            "\n  int phy, maths;"
            "\n  float avg;"
            "\n  /*use different values of phy and maths "
            "\n  to check conditional execution*/"
            "\n  //change to 40, 40 and 80, 40"
            "\n  phy = 50; maths = 50;"
            "\n  avg = (float)(phy + maths)/2;"
            "\n  printf(\"Phy: %d Maths: %d Avg: %f\\n\", phy, maths, avg);"
            "\n  if (avg >= 50 && (maths >= 35 && phy >= 35)){"
            "\n    printf(\"Result: Pass\");"
            "\n  }"
            "\n  if (avg<50) {"
            "\n    printf(\"Result: Fail\\n\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput:"
            "\n//when marks in Phy and Maths - 50 50"
            "\nPhy: 50 Maths: 50 Avg: 50.000000"
            "\nResult: Pass\n"

            "\n//when marks in Phy and Maths - 40 40"
            "\nPhy: 40 Maths: 40 Avg: 40.000000"
            "\nResult: Fail\n"

            "\n//when marks in Phy and Maths - 80 40"
            "\nPhy: 80 Maths: 40 Avg: 60.000000"
            "\nResult: Pass\n"

            );
            break;

            case 31:
            puts("\n### The if-else Statement ###\n"

            "\nSyntax of if-else Statement\n"

            "\nif (Boolean expr){"
            "\n  Expression;"
            "\n  . . ."
            "\n} else {"
            "\n  Expression;"
            "\n  . . ."
            "\n}\n"

            "\nFlowchart of if-else Statement\n"

            "\nif (marks<50)"
            "\n  printf(\"Result: Fail\\n\");"
            "\nelse"
            "\n  printf(\"Result: Pass\\n\");\n"

            "\nC if-else Statement Examples\n"

            "\nExample: Tax Calculation Using if-else Statement\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int income = 5000;"
            "\n  float tax;"
            "\n  printf(\"Income: %d\\n\", income);"
            "\n  if (income<10000){"
            "\n    tax = (float)(income * 10 / 100);"
            "\n    printf(\"tax: %f \\n\", tax);"
            "\n  } else {"
            "\n    tax= (float)(1000 + (income-10000) * 15 / 100);"
            "\n    printf(\"tax: %f\", tax);"
            "\n  }"
            "\n}\n"

            "\nOutput:"
            "\nIncome: 5000"
            "\ntax: 500.000000\n"

            "\nIncome: 15000"
            "\ntax: 1750.000000\n"

            "\nExample: Checking Digit Using if-else Statement\n"

            "\n#include <stdio.h>\n"
            "\nint main() {"
            "\n  char ch='7';"
            "\n  if (ch>=48 && ch<=57){"
            "\n    printf(\"The character is a digit.\");"
            "\n  } else {"
            "\n    printf(\"The character is not a digit.\");"
            "\n  }"
            "\n  return 0;"
            "\n}"

            "\nOutput"
            "\nThe character is a digit."
            "\nThe character is not a digit.\n"

            "\nExample: if-else Statement Without Curly Braces\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int amount = 50;"
            "\n  float discount;"
            "\n  printf(\"Amount: %d\\n\", amount);"
            "\n  if (amount >= 100)"
            "\n    discount = amount * 10 / 100;"
            "\n    printf(\"Discount: %f \\n\", discount);"
            "\n  else"
            "\n    printf(\"Discount not applicable\\n\");"
            "\n    return 0;"
            "\n}\n"

            "\nOutput"
            "\nerror: 'else' without a previous 'if'\n"

            "\nExample: if-else Statement Without Curly Braces\n"

            "\n#include <stdio.h>\n"

            "\nint main() {"
            "\n  int amount = 50;"
            "\n  float discount, nett;"
            "\n  printf(\"Amount: %d\\n\", amount);"
            "\n  if (amount<100)"
            "\n    printf(\"Discount not applicable\\n\");"
            "\n  else"
            "\n    printf(\"Discount applicable\");"
            "\n    discount = amount*10/100;"
            "\n    nett = amount - discount;"
            "\n    printf(\"Discount: %f Net payable: %f\", discount, nett);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nAmount: 50"
            "\nDiscount not applicable"
            "\nDiscount: 5.000000 Net payable: 45.000000\n"

            "\nif (amount >= 100){"
            "\n  discount = amount * 10 / 100;"
            "\n  printf(\"Discount: %f \\n\", discount);"
            "\n} else {"
            "\n  printf(\"Discount not applicable\\n\");"
            "\n}\n"

            "\nThe else-if Statement in C\n"

            "\nSyntax of else-if Statement\n"

            "\nif (condition){"
            "\n  // if the condition is true, "
            "\n  // then run this code"
            "\n} else if(another_condition){"
            "\n  // if the above condition was false "
            "\n  // and this condition is true,"
            "\n  // then run the code in this block"
            "\n} else {"
            "\n  // if both the above conditions are false,"
            "\n  // then run this code"
            "\n}\n"

            "\nExample of else-if Statement\n"

            "\n#include <stdio.h>\n"

            "\nint main(void) {"
            "\n  int age = 15;"
            "\n  if (age < 18) {"
            "\n    printf(\"You need to be over 18 years old to continue\\n\");"
            "\n  } else if (age < 21) {"
            "\n    printf(\"You need to be over 21\\n\");"
            "\n  } else {"
            "\n    printf(\"You are over 18 and older than 21 so you can continue \\n\");"
            "\n  }"
            "\n}\n"

            "\nOutput:"
            "\nYou need to be over 18 years old to continue\n"
            );
            break;

            case 32:
            puts("\n### Nested If Statements ###\n"

            "\nSyntax\n"

            "\nif (expr1){"
            "\n  if (expr2){"
            "\n    block to be executed when "
            "\n    expr1 and expr2 are true"
            "\n  } else {"
            "\n    block to be executed when "
            "\n    expr1 is true but expr2 is false"
            "\n  }"
            "\n}\n"

            "\nExample 1\n"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  // local variable definition"
            "\n  int a = 274;"
            "\n  printf(\"Value of a is : %d\\n\", a);"
            "\n  if (a < 100){"
            "\n    printf(\"Value of a is less than 100\\n\");"
            "\n  }"
            "\n  if (a >= 100 && a < 200){"
            "\n    printf(\"Value of a is between 100 and 200\\n\");"
            "\n  }"
            "\n  if (a >= 200){"
            "\n    printf(\"Value of a is more than 200\\n\");"
            "\n  }"
            "\n}\n"

            "\nOutput"
            "\nValue of a is : 274"
            "\nValue of a is more than 200\n"

            "\nExample 2\n"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  // local variable definition"
            "\n  // check with different values 120, 250 and 74"
            "\n  int a = 120;"
            "\n  printf(\"value of a is : %d\\n\", a);"
            "\n  // check the boolean condition"
            "\n  if(a >= 100){"
            "\n    // this will check if a is between 100-200"
            "\n    if(a < 200){"
            "\n      // if the condition is true, then print the following"
            "\n      printf(\"Value of a is between 100 and 200\\n\");"
            "\n    } else {"
            "\n      printf(\"Value of a is more than 200\\n\");"
            "\n    }"
            "\n  } else {"
            "\n    // executed if a < 100"
            "\n    printf(\"Value of a is less than 100\\n\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "Value of a is : 120"
            "Value of a is between 100 and 200"

            "Example 3"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int a = 15;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  if (a % 2 == 0) {"
            "\n    if (a % 3 == 0){"
            "\n      printf(\"Divisible by 2 and 3\");"
            "\n    } else {"
            "\n      printf(\"Divisible by 2 but not 3\");"
            "\n    }"
            "\n  } else {"
            "\n    if (a % 3 == 0){"
            "\n      printf(\"Divisible by 3 but not 2\");"
            "\n    } else {"
            "\n      printf(\"Not divisible by 2, not divisible by 3\");"
            "\n    }"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "Output"
            "a: 15"
            "Divisible by 3 but not 2"

            "Example 4"
            "Is the year divisible by 4?"
            "If yes, is it a century year (divisible by 100)?"
            "If yes, is it divisible by 400? If yes, it is a leap year, otherwise not."
            "If it is divisible by 4 and not a century year, it is a leap year."
            "If it is not divisible by 4, it is not a leap year."

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  // Test the program with the values 1900, 2023, 2000, 2012"
            "\n  int year = 1900;"
            "\n  printf(\"year: %d\\n\", year);"
            "\n  // is divisible by 4?"
            "\n  if (year % 4 == 0){"
            "\n    // is divisible by 100?"
            "\n    if (year % 100 == 0){"
            "\n      // is divisible by 400?"
            "\n      if(year % 400 == 0){"
            "\n        printf(\"%d is a Leap Year\\n\", year);"
            "\n      } else {"
            "\n        printf(\"%d is not a Leap Year\\n\", year);"
            "\n      }"
            "\n    } else {"
            "\n      printf(\"%d is not a Leap Year\\n\", year);"
            "\n    }"
            "\n  } else {"
            "\n      printf(\"%d is a Leap Year\\n\", year);"
            "\n  }"
            "\n}\n"

            "\nOutput:"
            "\nyear: 1900"
            "\n1900 is not a Leap Year\n"

            "\nif (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)){"
            "\n  printf(\"%d is a leap year\", year);"
            "\n} else {"
            "\n  printf(\"%d is not a leap year\", year);"
            "\n}\n"

            "\n## Switch Statement ##\n"

            "\nC switch-case Statement\n"

            "\nSyntax of switch-case Statement\n"

            "\nswitch (Expression){"
            "\n  // if expr equals Value1"
            "\n  case Value1:"
            "\n    Statement1;"
            "\n    Statement2;"
            "\n    break;"
            "\n  // if expr equals Value2"
            "\n  case Value2:"
            "\n    Statement1;"
            "\n    Statement2;"
            "\n    break;"
            "\n    ."
            "\n    ."
            "\n  // if expr is other than the specific values above"
            "\n  default:"
            "\n    Statement1;"
            "\n    Statement2;"
            "\n}\n"

            "\nHow switch-case Statement Work?\n"

            "\nFlowchart of switch-case Statement\n"

            "\nRules for Using the switch-case Statement"
            "\nThe expression used in a switch statement must have an integral or enumerated type, or be of a class type in which the class has a single conversion function to an integral or enumerated type."
            "\nYou can have any number of case statements within a switch. Each case is followed by the value to be compared to and a colon."
            "\nThe constant-expression for a case must be the same data type as the variable in the switch, and it must be a constant or a literal."
            "\nWhen the variable being switched on is equal to a case, the statements following that case will execute until a break statement is reached."
            "\nWhen a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement."
            "\nNot every case needs to contain a break. If no break appears, the flow of control will fall through to subsequent cases until a break is reached."
            "\nA switch statement can have an optional default case, which must appear at the end of the switch. The default case can be used for performing a task when none of the cases is true. No break is needed in the default case.\n"

            "\nC switch-case Statement Examples"

            "\nExample 1"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  /* local variable definition */"
            "\n  char ch = 'e';"
            "\n  printf(\"Time code: %c\\n\\n\", ch);"
            "\n  if (ch == 'm')"
            "\n    printf(\"Good Morning\");"
            "\n  else if (ch == 'a')"
            "\n    printf(\"Good Afternoon\");"
            "\n  else"
            "\n    printf(\"Good Evening\");"
            "\n  return 0;"
            "\n}"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  // local variable definition"
            "\n  char ch = 'm';"
            "\n  printf(\"Time code: %c\\n\\n\", ch);"
            "\n  switch (ch){"
            "\n    case 'a':"
            "\n      printf(\"Good Afternoon\\n\");"
            "\n    break;"
            "\n    case 'e':"
            "\n      printf(\"Good Evening\\n\");"
            "\n      break;"
            "\n    case 'm':"
            "\n      printf(\"Good Morning\\n\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nTime code: m"
            "\nGood Morning\n"

            "\nExample 2: Switch Statement without using Break"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  /* local variable definition */"
            "\n  char ch = 'a';"
            "\n  printf(\"Time code: %c\\n\\n\", ch);"
            "\n  switch (ch){"
            "\n    case 'a':"
            "\n      printf(\"Good Afternoon\\n\");"
            "\n      // break;"
            "\n    case 'e':"
            "\n      printf(\"Good Evening\\n\");"
            "\n      // break;"
            "\n    case 'm':"
            "\n      printf(\"Good Morning\\n\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nTime code: a\n"

            "\nGood Afternoon"
            "\nGood Evening"
            "\nGood Morning\n"

            "\nExample 3: Grade Checker Program using Switch Statement"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  /* local variable definition */"
            "\n  char grade = 'B';"
            "\n  switch(grade){"
            "\n    case 'A' :"
            "\n      printf(\"Outstanding!\\n\");"
            "\n    break;"
            "\n    case 'B':"
            "\n      printf(\"Excellent!\\n\");"
            "\n      break;"
            "\n    case 'C':"
            "\n      printf(\"Well Done\\n\");"
            "\n    break;"
            "\n    case 'D':"
            "\n      printf(\"You passed\\n\");"
            "\n    break;"
            "\n    case 'F':"
            "\n      printf(\"Better try again\\n\");"
            "\n    break;"
            "\n    default :"
            "\n      printf(\"Invalid grade\\n\");"
            "\n  }"
            "\n  printf(\"Your grade is  %c\\n\", grade);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nExcellent!"
            "\nYour grade is B\n"

            "\nExample 4: Menu-based Calculator for Arithmetic Operations using Switch\n"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  // local variable definition"
            "\n  int a = 10, b = 5;"
            "\n  // Run the program with other values 2, 3, 4, 5"
            "\n  int op = 1;"
            "\n  float result;"
            "\n  printf(\"1: addition\\n\");"
            "\n  printf(\"2: subtraction\\n\");"
            "\n  printf(\"3: multiplication\\n\");"
            "\n  printf(\"4: division\\n\");"
            "\n  printf(\"\na: %d b: %d : op: %d\\n\", a, b, op);"
            "\n  switch (op){"
            "\n    case 1:"
            "\n      result = a + b;"
            "\n    break;"
            "\n    case 2:"
            "\n      result = a - b;"
            "\n    break;"
            "\n    case 3:"
            "\n      result = a * b;"
            "\n    break;"
            "\n    case 4:"
            "\n      result = a / b;"
            "\n    break;"
            "\n    default:"
            "\n      printf(\"Invalid operation\\n\");"
            "\n  }\n"
            "\n  if (op >= 1 && op <= 4)"
            "\n    printf(\"Result: %6.2f\", result);"
            "\n  return 0;"
            "\n}"

            "\nOutput"
            "\n1: addition"
            "\n2: subtraction"
            "\n3: multiplication"
            "\n4: division"

            "\na: 10 b: 5 : op: 1"
            "\nResult:  15.00"
            "\na: 10 b: 5 : op: 2"
            "\nResult:   5.00"
            "\na: 10 b: 5 : op: 3"
            "\nResult:  50.00"
            "\na: 10 b: 5 : op: 4"
            "\nResult:   2.00"
            "\na: 10 b: 5 : op: 5"
            "\nInvalid operation"

            "\nSwitch Statement by Combining Multiple Cases"

            "\nSyntax"

            "\nswitch (exp) {"
            "\n  case 1:"
            "\n  case 2:"
            "\n    statements;"
            "\n  break;"
            "\n  case 3:"
            "\n    statements;"
            "\n  break;"
            "\n  default:"
            "\n    printf(\"%c is a non-alphanumeric character\\n\", ch);"
            "\n}\n"

            "\nExample 1"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  // local variable definition"
            "\n  int number = 5;"
            "\n  switch (number){"
            "\n    case 1 ... 10:"
            "\n      printf(\"The number is between 1 and 10\\n\");"
            "\n    break;"
            "\n    default:"
            "\n      printf(\"The number is not between 1 and 10\\n\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nThe number is between 1 and 10"

            "\nExample 2"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  char ch = 'g';"
            "\n  switch (ch){"
            "\n    case 'a' ... 'z':"
            "\n      printf(\"%c is a lowercase alphabet\\n\", ch);"
            "\n    break;"
            "\n    case 'A' ... 'Z':"
            "\n      printf(\"%c is an uppercase alphabet\\n\", ch);"
            "\n    break;"
            "\n    case 48 ... 57:"
            "\n      printf(\"%c is a digit\\n\", ch);"
            "\n    break;\n"
            "\n    default:"
            "\n      printf(\"%c is a non-alphanumeric character\\n\", ch);"
            "\n    }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\ng is a lowercase alphabet\n"
            );
            break;

            case 33:
            puts("\n### Nested Switch Statements ###\n"

            "\nSyntax\n"

            "\nswitch(ch1){"
            "\n  case 'A': "
            "\n    printf(\"This A is part of outer switch\" );"
            "\n    switch(ch2) {"
            "\n      case 'A':"
            "\n        printf(\"This A is part of inner switch\" );"
            "\n      break;"
            "\n      case 'B':  /* case code */"
            "\n    }"
            "\n  break;"
            "\n  case 'B':  /* case code */"
            "\n}\n"

            "\nExample\n"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  /* local variable definition */"
            "\n  int a = 100;"
            "\n  int b = 200;"
            "\n  switch(a){"
            "\n    case 100:"
            "\n      printf(\"This is part of outer switch\\n\", a);"
            "\n      switch(b){"
            "\n        case 200:"
            "\n          printf(\"This is part of inner switch\\n\", a);"
            "\n      }"
            "\n  }"
            "\n  printf(\"Exact value of a is: %d\\n\", a);"
            "\n  printf(\"Exact value of b is: %d\\n\", b);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nThis is part of outer switch"
            "\nThis is part of inner switch"
            "\nExact value of a is : 100"
            "\nExact value of b is : 200\n"

            "\nNested Switch-Case Statements in C\n"

            "\nswitch (exp1){"
            "\n  case val1:"
            "\n    switch (exp2){"
            "\n      case val_a:"
            "\n      stmts;"
            "\n    break;"
            "\n    case val_b:"
            "\n      stmts;"
            "\n    break;"
            "\n    }"
            "\n  case val2:"
            "\n    switch (expr2){"
            "\n      case val_c:"
            "\n      stmts;"
            "\n    break;"
            "\n      case val_d:"
            "\n      stmts;"
            "\n    break;"
            "\n  }"
            "\n}\n"

            "\nExample\n"

            "\n#include <stdio.h>\n"
            "\nint main(){"
            "\n  int x = 1, y = 'b', z='X';"
            "\n  // Outer Switch"
            "\n  switch (x){"
            "\n    case 1:"
            "\n      printf(\"Case 1 \\n\");"
            "\n      switch (y){"
            "\n        case 'a':"
            "\n          printf(\"Case a \\n\");"
            "\n        break;"
            "\n        case 'b':"
            "\n          printf(\"Case b \\n\");"
            "\n        break;"
            "\n      }"
            "\n    break;"
            "\n    case 2:"
            "\n      printf(\"Case 2 \\n\");"
            "\n      switch (z){"
            "\n        case 'X':"
            "\n          printf(\"Case X \\n\");"
            "\n        break;"
            "\n        case 'Y':"
            "\n          printf(\"Case Y \\n\");"
            "\n    break;"
            "\n    }"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nCase 1"
            "\nCase b\n"

            );
            break;

            case 34:
            puts("\n### C - Loops ###\n"

            "\nFlowchart of C Loop Statement\n"

            "\nExample: Loops in C\n"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  // local variable definition"
            "\n  int a = 1;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  a++;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  a++;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  a++;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  a++;"
            "\n  printf(\"a: %d\\n\", a);"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\na: 1"
            "\na: 2"
            "\na: 3"
            "\na: 4"
            "\na: 5\n"

            "\nExample: Using While Loop in C\n"

            "\n#include <stdio.h>\n"
            "\nint main () {"
            "\n// local variable definition"
            "\nint a = 1;"
            "\nwhile (a <= 100){"
            "\nprintf(\"a: %d\\n\", a);"
            "\na++;"
            "\n}"
            "\nreturn 0;"
            "\n}"

            "\nOutput"
            "\na: 1"
            "\na: 2"
            "\na: 3"
            "\na: 4"
            "\n....."
            "\n....."
            "\na: 98"
            "\na: 99"
            "\na: 100\n"

            "\nParts of C Loops\n"

            "\nLooping statement (while, do–while or for)"
            "\nLooping block"
            "\nLooping condition\n"

            "\nCounted Loops in C\n"

            "\nConditional Loops in C\n"

            "\nLooping Statements in C\n"

            "\nSr.No. - Loop Type & Description"
            "\n1 while loop: Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body."
            "\n2 for loop: Executes a sequence of statements multiple times and abbreviates the code that manages the loop variable."
            "\n3 do-while loop: It is more like a while statement, except that it tests the condition at the end of the loop body."
            "\n4 nested loops: You can use one or more loops inside any other while, for or do-while loop."

            "\nLoop Control Statements in C\n"

            "\nSr.No. - Control Statement & Description"
            "\n1 break statement: Terminates the loop or switch statement and transfers execution to the statement immediately following the loop or switch."
            "\n2 continue statement: Causes the loop to skip the remainder of its body and immediately retest its condition prior to reiterating."
            "\n3 goto statement: Transfers the control to the labeled statement."

            "\nThe Infinite Loop in C"

            "\nExample: Infinite Loop in C"

            "\n#include <stdio.h>\n"
            "\nint main (){"
            "\n  for( ; ; ){"
            "\n    printf(\"This loop will run forever. \\n\");"
            "\n  }"
            "\n  return 0;"
            "\n}\n"

            "\nOutput"
            "\nThis loop will run forever."
            "\nThis loop will run forever."
            "\n........"
            "\n........"
            "\nThis loop will run forever.\n"
            );
            break;

            case 35:
            puts("### C - While Loop ###"

            "Syntax of C while Loop"

            while(expression){
            statement(s);
            }

            "Flowchart of C while Loop"

            "How while Loop Works in C?"

            "Example of while Loop in C"

            #include <stdio.h>
            
            int main(){

            // local variable definition
            int a = 1;

            // while loop execution
            while(a <= 5){
                printf("Hello World \n");
                a++;
            }
            printf("End of loop"); 
            return 0;
            }

            Output
            Hello World
            Hello World
            Hello World
            Hello World
            Hello World
            End of loop

            Example Explanation

            End of loop

            "Using while as Conditional Loop"

            "Example"

            #include <stdio.h>

            int main(){

            // local variable definition 
            char choice = 'a';

            int x = 0;

            // while loop execution
            while(x >= 0){
                (x % 2 == 0) ? printf("%d is Even \n", x) : printf("%d is Odd \n", x);

                printf("\n Enter a positive number: ");
                scanf("%d", &x);
            }
            printf("\n End of loop");
            return 0;
            }

            Output
            0 is Even

            Enter a positive number: 12
            12 is Even

            Enter a positive number: 25
            25 is Odd

            Enter a positive number: -1

            End of loop

            "While Loop with break and continue"

            "Example"

            while (expr){
            . . .
            . . .
            if (condition)
                break;
            . . .
            }

            "Example"

            while (expr){
            . . .
            . . .
            if (condition)
                continue;
            . . .
            }

            "More Examples of C while Loop"

            "Example: Printing Lowercase Alphabets"

            #include <stdio.h>
            
            int main(){

            // local variable definition
            char a = 'a';

            // while loop execution
            while(a <= 'z') {
                printf("%c", a);
                a++;
            }
            printf("\n End of loop"); 
            return 0;
            }

            Output
            abcdefghijklmnopqrstuvwxyz
            End of loop

            Example: Equate Two Variables

            #include <stdio.h>

            int main(){

            // local variable definition
            int a = 10, b = 0;

            // while loop execution
            while(a != b){
                a--;
                b++;
                printf("a: %d b: %d\n", a,b);
            }
            printf("\n End of loop");
            return 0;
            }

            


            );
            break;

            default:
            puts("opcion invalida");
            break;
        }
        getchar();
        while(getchar() != '\n');
    } while(n);
    return 0;
}