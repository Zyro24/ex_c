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
        "\n13. Booleans"

        "\n## Constants and Literals in C ##\n"

        "\n14. Constants"
        "\n15. Literals"
        "\n16. Escape sequences"
        "\n17. Format Specifiers"

        "\n## Operators in C ##\n"

        "\n18. Operators"
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
            puts(""
            );
            break;

            case 20:
            puts(""
            );
            break;

            case 21:
            puts(""
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