#include <stdio.h>

/*
Hacer un programa que me ensene a programar en C
*/

int main(){
    int n = -1, r = 0;
    do {
        puts("\n### MENU ###\n## BASICS OF C ##\n1. Compilation Steps\n2. Comments\n3. Tokens\n4. Keywords\n5. Identifiers\n6. User Input\n7. Basic Syntax\n8. Data Types"
        "\n9. Variables\n10. Integer Promotions\n11. Type Conversion\n12. Type Casting\n13. Booleans\n## Constants and Literals in C ##\n14. Constants\n15. Literals"
        "\n16. Escape sequences\n17. Format Specifiers"
        "\n0. Salir\n\nSeleccione una opcion:");

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
            puts("saliendo");
            return 0;
            case 1:
            puts("### COMPILATION STEPS ###\na. Preprocessing\nb. Compiling\nc. Assembling\nd. Linking");
            break;
            case 2:
            puts("### COMMENTS ###\na. /* --- */\nb. //");
            break;
            case 3:
            puts("### TOKERNS ###\n- Character set\n- Keyword tokens\n- Literal tokens\n- Identifier tokens\n- Operator tokens\n- Special symbol tokens"
            "\n\n- C Character set\n- Uppercase: A to Z\n- Lowercase: a to z\n- Digits: 0 to 9\n- Special characters: ! \" # $ \x25 & ' ( ) * + - . : , ; ` ~ = < > { } [ ] ^ _ \\ /"
            "\n\n- C Keywords: (32 Keywords)"
            "\n- C Literals"
            "\n- C Identifiers"
            "\n- C Operators"
            "\n- C Special symbols");
            break;
            case 4:
            puts("### KEYWORDS ###\n1. auto\n2. break\n3. case\n4. char\n5. const\n6. continue\n7. default\n8. do\n9. double\n10. else\n11. enum\n12. extern\n"
            "13. float\n14. for\n15. goto\n16. if\n17. int\n18. long\n19. register\n20. return\n21. short\n22. signed\n23. sizeof\n24. static\n25. struct\n"
            "26. switch\n27. typedef\n28. union\n29. unsigned\n30. void\n31. volatile\n32. while"
            "\n\n## Primary Types C Keywords ##\n- int: Declares an integer variable\n- long: Declares a long integer variable"
            "\n- short: Declares a short integer variable\n- signed: Declares a signed variable\n- double: Declares a double-precision variable"
            "\n- char: Declares a character variable\n- float: Declares a floating-point variable\n- unsigned: Declares an unsigned variable"
            "\n- void: Specifies a void return type\n\n## User-defined Types C Keywords ##"
            "\n- struct: Declares a structure type\n- typedef: Creates a new data type\n- union: Declares a union type\n- enum: Declares an enumeration type"
            "\n\n## Storage Types C Keywords ##\n- auto: Specifies automatic storage class\n- extern: Declares a variable or function"
            "\n- static: Specifies static storage class\n- register: Specifies register storage class\n\n## Conditionals C Keywords ##"
            "\n- goto: Jumps to a labeled statement\n- if: Starts an if statement\n- else: Executes when the if condition is false"
            "\n- case: Labels a statement within a switch\n- switch: Starts a switch statement\n- default: Specifies default statement in switch"
            "\n\n## Loops and Loop Control C Keywords ##\n- For: Starts a for-loop\n- do: Starts a do-while loop\n- while: starts a while loop"
            "\n- continue: Skips an iteration of a loop\n- break: Terminates a loop or switch statement\n\n## Other C Keywords ##"
            "\n- const: Specifies a constant value\n- Sizeof: Determines the size of a data type\n- Volatile: compiler that the value of the variable may change at any time");            
            break;
            case 5:
            puts("### C Identifiers ###\nNaming Rules of C Identifiers"
            "\nKeywords can't be used as identifiers as they are predefined."
            "\n- Out of the character set that C uses, only the alphabets (upper and lowercase) and the underscore symbol (_) are allowed in the identifier."
            "It implies that you can't use characters like the punctuation symbols etc. as a part of the identifier."
            "\n- The identifier must start either with an alphabet (upper or lowercase) or an underscore. It means, a digit cannot be the first character of the identifier."
            "\n- The subsequent characters may be alphabets or digits or an underscore."
            "\n- Same identifier can't be used as a name of two entities. An identifier can be used only once in the current scope."
            "\n## Valid C Identifiers ##\nage, Age, AGE, average_age, __temp, address1, phone_no_personal, _my_name"
            "\n## Invalid C Identifiers ##\nAverage-age, my name, $age, #phone, 1mg, phy+maths"
            "\n\n- Global Identifiers\n- Local Identifiers");
            break;
            case 6:
            puts("### Need for User Input in C ###\nUser Input Function: The scanf()"
            "\nFormat Specifier Type:\n- %c Character\n- %d Signed integer\n- %f Float values\n- %i Unsigned integer"
            "\n- %l or %ld or %li Long\n- %lf Double\n- %Lf Long double\n- %lu Unsigned int or unsigned long\n- %lli or %lld Long long"
            "\n- %llu Unsigned long long");
            break;
            case 7:
            puts("### Basic Input ###\n#include <stdio.h> // Header File\nint a=10; // Global declarations\n"
            "// The main function\nint main() {\n  char message[] = \"Hello World\"; // Local variable\n  printf(\"%s\", message);\n"
            "  return 0;\n}\n\n- Tokens in C\n- Identifiers in C\n- Keywords in C\n- Semicolons in C\n- Comments in C\n- Source Code"
            "\n- Source Code\n- The main() Function\n- Header Files\n- Variable Declaration\n- Statements in a C Program\n- Whitespaces in a C Program"
            "\n- Compound Statements in C");
            case 8:
            puts("### Datatypes ###\n- Basic Types: They are arithmetic types and are further classified into: (a) integer types and (b) floating-point types."
            "\n- Enumerated types: They are again arithmetic types and they are used to define variables that can only assign certain discrete integer values throughout the program."
            "\n- The type void: The type specifier void indicates that no value is available.\nDerived types: They include (a) Pointer types, (b) Array types, (c) Structure types, "
            "(d) Union types and (e) Function types.\n\nInteger Data Types in C\nchar 1 byte -128 to 127 or 0 to 255\nunsigned char 1 byte 0 to 255"
            "\nsigned char 1 byte -128 to 127\nint 2 or 4 bytes -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647"
            "\nunsigned int 2 or 4 bytes 0 to 65,535 or 0 to 4,294,967,295\nshort 2 bytes -32,768 to 32,767\nunsigned short 2 bytes 0 to 65,535"
            "\nlong 8 bytes -9223372036854775808 to 9223372036854775807\nunsigned long 8 bytes 0 to 18446744073709551615"
            "\n\n#include <stdio.h>\n#include <stdlib.h>\n#include <limits.h>\n#include <float.h>\n\nint main(int argc, char** argv) {"
            "\n  printf(\"CHAR_BIT: %d\\n\", CHAR_BIT);\n  printf(\"CHAR_MAX: %d\\n\", CHAR_MAX);\n  printf(\"CHAR_MIN: %d\\n\", CHAR_MIN);"
            "\n  printf(\"INT_MAX: %d\\n\", INT_MAX);\n  printf(\"INT_MIN: %d\\n\", INT_MIN);\n  printf(\"LONG_MAX: %ld\\n\", (long) LONG_MAX);"
            "\n  printf(\"LONG_MIN: %ld\\n\", (long) LONG_MIN);\n  printf(\"SCHAR_MAX: %d\\n\", SCHAR_MAX);\n  printf(\"SCHAR_MIN: %d\\n\", SCHAR_MIN);"
            "\n  printf(\"SHRT_MAX: %d\\n\", SHRT_MAX);\n  printf(\"SHRT_MIN: %d\\n\", SHRT_MIN);\n  printf(\"UCHAR_MAX: %d\\n\", UCHAR_MAX);"
            "\n  printf(\"UINT_MAX: %u\\n\", (unsigned int) UINT_MAX);\n  printf(\"ULONG_MAX: %lu\\n\", (unsigned long) ULONG_MAX);\n  printf(\"USHRT_MAX: %d\\n\", (unsigned short) USHRT_MAX);"
            "\n  return 0;\n}\n\nCHAR_BIT : 8\nCHAR_MAX : 127\nCHAR_MIN : -128\nINT_MAX : 2147483647\nINT_MIN : -2147483648\nLONG_MAX : 9223372036854775807"
            "\nLONG_MIN : -9223372036854775808\nSCHAR_MAX : 127\nSCHAR_MIN : -128\nSHRT_MAX : 32767\nSHRT_MIN : -32768\nUCHAR_MAX : 255"
            "\nUINT_MAX : 4294967295\nULONG_MAX : 18446744073709551615\nUSHRT_MAX : 65535\n\n## Floating-Point Data Types in C ##\n"
            "\nType - Storage size - Value range - Precision\nfloat 4 byte 1.2E-38 to 3.4E+38 6 decimal places\ndouble 8 byte 2.3E-308 to 1.7E+308 15 decimal places"
            "\nlong double 10 byte 3.4E-4932 to 1.1E+4932 19 decimal places\n\n#include <stdio.h>\n#include <stdlib.h>\n#include <limits.h>"
            "\n#include <float.h>\nint main(int argc, char** argv) {\n  printf(\"Storage size for float : %zu \\n\", sizeof(float));"
            "\n  printf(\"FLT_MAX : %g\\n\", (float) FLT_MAX);\n  printf(\"FLT_MIN : %g\\n\", (float) FLT_MIN);"
            "\n  printf(\"-FLT_MAX : %g\\n\", (float) -FLT_MAX);\n  printf(\"-FLT_MIN : %g\\n\", (float) -FLT_MIN);"
            "\n  printf(\"DBL_MAX : %g\\n\", (double) DBL_MAX);\n  printf(\"DBL_MIN : %g\\n\", (double) DBL_MIN);"
            "\n  printf(\"-DBL_MAX : %g\\n\", (double) -DBL_MAX);\n  printf(\"Precision value: %d\\n\", FLT_DIG );"
            "\n  return 0;\n}\n\nStorage size for float : 4\nFLT_MAX : 3.40282e+38\nFLT_MIN : 1.17549e-38\n-FLT_MAX : -3.40282e+38"
            "\n-FLT_MIN : -1.17549e-38\nDBL_MAX : 1.79769e+308\nDBL_MIN : 2.22507e-308\n-DBL_MAX : -1.79769e+308\nPrecision value: 6"
            "\n\n## User-defined Data Types in C ##\nStruct Data Type\n\nstruct student {\n  char name[20];\n  int marks, age;\n};\n"
            "\n\n## Union Data Type ##\n\nunion ab {\n  int a;\n  float b;\n};\n\nThe void Data Type in C\n"
            "\n1. Function returns as void: There are various functions in C that do not return any value or you can say they return void. A function with no return value has the return type as void. For example, void exit (int status);"
            "\n2. Function arguments as void: There are various functions in C which do not accept any parameter. A function with no parameter can accept a void. For example, int rand(void);"
            "\n3 Pointers to void: A pointer of type void * represents the address of an object, but not its type. For example, a memory allocation function void *malloc( size_t size ); returns a pointer to void which can be casted to any data type."            
            "\n\n## Arrays Data Type in C ##\nint marks[5];\nint marks[ ]={50,56,76,67,43};\n## Pointers Data Type in C ##\nint x;\nint *y;\ny = &x;");
            break;
            case 9:
            puts("### Variables ###\n## Naming Conventions of C Variables ##\n\n"
            "int _num = 5; // valid integer variable\nfloat marks = 55.50; // valid float variable"
            "char choice = '0'; // valid char variable\n\n// invalid variable name\n// cannot use \"-\""
            "\nint sub-1 = 35;\n\n//invalid; must have data type\navg = 50;\n\n// invalid; name can be used for"
            "\n// declaration only once in a function\nint choice = 0;\n\n// Valid integer name\nint sal_of_employee = 20000;\n"
            "\n// Valid because all are of same type\nint phy, che, maths;\n\n// error because variables of"
            "\n// different types in same statement\nint sal, float tax;"
            "\n1. char: Typically a single octet(one byte). It is an integer type."
            "\n2. int: The most natural size of integer for the machine."
            "\n3. float: A single-precision floating point value."
            "\n4. double: A double-precision floating point value."
            "\n5. void: Represents the absence of type."
            "\n\n## Variable Definition in C ##"
            "\n- type variable_list;"
            "\n\nint i, j, k;\nchar c, ch;\nfloat f, salary;\ndouble d;"
            "\ntype variable_name = value;\n// declaration of d and f\nextern int d = 3, f = 5;\n\n// definition and initializing d and f"
            "\nint d = 3, f = 5;\n\n// definition and initializes z\nbyte z = 22;\n\n// the variable x has the value 'x'\nchar x = 'x';"
            "\n\n## Variable Declaration in C ##"
            "\n// declaration with initialization\nint x = 10;\n// declare first and assign later\nint y;\ny = 20;\n"
            "\n// define and initialize two variables\nint d = 3, f = 5;\n\n// the variable x has the value 'x'\nchar x = 'x';"
            "\n// Variable declaration:\nextern int a, b;\nextern int c;\nextern float f;\n\nint main () {\n\n/* variable definition: */"
            "\nint a, b;\nint c;\nfloat f;\n\n/* actual initialization */\na = 10;\nb = 20;\nc = a + b;\nprintf(\"value of c : %d \\n\", c);"
            "\nf = 70.0/3.0;\nprintf(\"value of f : %f \\n\", f);\nreturn 0;\n}\n\n// function declaration\nint func();\n\nint main() {\n"
            "\n// function call\nint i = func();\n}\n\n// function definition\nint func() {\nreturn 0;\n}\n"
            "\n## Lvalues and Rvalues in C ##\n- lvalue expressions\n- rvalue expressions\n"
            "\n// valid statement\nint g = 20;\n\n// invalid statement\n// it would generate compile-time error\n10 = 20;\n"
            "\nVariables in C can be classified based on the following parameters:\nData types: int, float, char or struct types."
            "\nScope: global or local variables.\nStorage type: automatic, static, register or extern.\n"
            );
            break;
            case 10:
            puts("### Integer Promotions ###\n\n#include <stdio.h>\n\nint main(){\n\nchar a = 251;\nunsigned char b = a;\n\nprintf(\"a = %c\", a);\nprintf(\"\\nb = %c\", b);\n"
            "\nif (a == b)\n  printf(\"\\n Same\");\nelse\n  printf(\"\\n Not Same\");\n\nreturn 0;\n}\n\n#include <stdio.h>\n\nint main(){\n"
            "\nchar a = 50;\nint b = a << 2;\n\nprintf (\"b as int: %d as char: %c\", b, b);\n\nreturn 0;\n}\n\n## Integer Promotion Rules ##\n"
            "\n- The integer types in C are char, short, int, long, long long and enum. Booleans are also treated as an integer type when it comes to type promotions."
            "\n- No two signed integer types shall have the same rank, even if they have the same representation.\n- The rank of a signed integer type shall be greater than the rank of any signed integer type with less precision."
            "\n- The rank of long int > the rank of int > the rank of short int > the rank of signed char.\n- The rank of char is equal to the rank of signed char and unsigned char."
            "\n- Whenever a small integer type is used in an expression, it is implicitly converted to int which is always signed.\n- All small integer types, irrespective of sign, are implicitly converted to (signed) int when used in most expressions."
            "\n\n- Byte and short values: They are promoted to int.\n- If one operand is a long: The entire expression is promoted to long."
            "\n- If one operand is a float: The entire expression is promoted to float.\n- If any of the operands is double: The result is promoted to double."
            "\n#include <stdio.h>\n\nint main(){\n\nchar x = 68;\nchar y = 34;\n\nprintf(\"The value of x is: %d\", x);\nprintf(\"\\nThe value of y is: %d\", y);\n"
            "\nchar z = x/y;\nprintf(\"\\nThe value of z: %d\", z);\n\nreturn 0;\n}\n"
            );
            break;
            case 11:
            puts("### Type Conversion ###"
            "\n## Implicit Type Conversion in C ##\n\nByte and short values: They are promoted to int.\nIf one operand is a long: The entire expression is promoted to long."
            "\nIf one operand is a float: The entire expression is promoted to float.\nIf any of the operands is double: The result is promoted to double."
            "#include <stdio.h>\nint main(){\nint  i = 17;char c = 'c'; /* ascii value is 99 */\nint sum;sum = i + c;\nprintf(\"Value of sum: %d\\n\", sum);\nreturn 0;}\n"
            "\nUsual Arithmetic Conversion\nint => unsigned int => long => unsigned long => long long => unsigned long long => float => double => long double\n"
            "\n#include <stdio.h>\n\nint main(){\n\nchar a = 'A';\nfloat b = a + 5.5;\n\nprintf(\"%f\", b);\n\nreturn 0;\n}\n"
            "\n## Explicit Type Conversion in C ##\ntype2 var2 = (type1) var1;\n#include <stdio.h>\n\nint main(){\n\nint x = 10, y = 4;\nfloat z = x/y;\n"
            "\nprintf(\"%f\", z);\n\nreturn 0;\n}\n\n#include <stdio.h>\n\nint main(){\n\nint x = 10, y = 4;\nfloat z = (float)x/y;\n\nprintf(\"%f\", z);\n\nreturn 0;\n}\n"
            "\n## Typecasting Functions in C ##\n\nThe atoi() Function\n\n#include <stdio.h>\n#include <stdlib.h>\n\nint main(){\n\nchar str[] = \"123\";"
            "\nint num = atoi(str);\n\nprintf(\"%d\\n\", num);\n\nreturn 0;\n}\n"
            "\nThe itoa() Function\n\n#include <stdio.h>\n#include <stdlib.h>\n\nint main(){\n\nint num = 123;\nchar str[10];\n\nitoa(num,str, 10);\n"
            "\nprintf(\"%s\\n\", str);\n\nreturn 0;\n}\n\nThe malloc() Function\nint *ptr = (int*)malloc(n * sizeof(int));\n\n#include <stdio.h>\n#include <stdlib.h>\n"
            "\nfloat divide(int, int);\nint main(){\n  int x = 10, y = 4;\n  float z = divide(x, y);\n  printf(\"%f\", z);\n  return 0;}\nfloat divide(int a, int b){"
            "\n  return (float)a/b;\n}\n");
            break;
            case 12:
            puts("\n### Type Casting ###\n\n(type_name) expression\n\n#include <stdio.h>\n\nint main() {\n\nint sum = 17, count = 5;\ndouble mean;\n"
            "\nmean =  sum / count;\nprintf(\"Value of mean: %f\\n\", mean);\n\n}\n\n#include <stdio.h>\n\nint main() {\n\nint sum = 17, count = 5;"
            "\ndouble mean;\n\nmean = (double) sum / count;\nprintf(\"Value of mean: %f\\n\", mean);\n\n}\n"
            "\nRules of Type Promotions:\n- Byte and short values : They are promoted to int.\n- If one operand is a long : The entire expression is promoted to long."
            "\n- If one operand is a float : The entire expression is promoted to float.\n- If any of the operands is double : The result is promoted to double.\n"
            "\n## Integer Promotion in C ##\n\n#include <stdio.h>\n\nint main() {\n\nint i = 17;\nchar c = 'c';  /* ascii value is 99 */\nint sum;\n\nsum = i + c;\nprintf(\"Value of sum : %d\\n\", sum);\n\n}\n"
            "\n## Usual Arithmetic Conversion ##\n#include <stdio.h>\n\nint main() {\n\nint i = 17;\nchar c = 'c';  /* ascii value is 99 */\nfloat sum;\n"
            "\nsum = i + c;\nprintf(\"Value of sum : %f\\n\", sum);\n}\n"
            );
            break;
            case 13:
            puts("### Booleans ###\n## Using enum to Implement Boolean Type in C ##\n\n#include <stdio.h>\n\nint main (){\n\nenum bool {false, true};\nenum bool x = true;"
            "\nenum bool y = false;\n\nprintf (\"%d\\n\", x);\nprintf (\"%d\\n\", y);\n}\n\ntypedef enum as BOOL\n\n#include <stdio.h>\n\nint main(){\n\ntypedef enum {false, true} BOOL;\n"
            "\nBOOL x = true;\nBOOL y  = false;\n\nprintf (\"%d\\n\", x);\nprintf (\"%d\\n\", y);\n}\n"
            "\n#include <stdio.h>\n\nint main(){\n\n  typedef enum {false, true} BOOL;\n\n  int i = 0;\n\n  while(true){\n    i++;\n    printf(\"%d\\n\", i);"
            "\n    if(i >= 5)\n      break;\n  }\n  return 0;\n}\n\nBoolean Values with #define\n"
            "\n#include <stdio.h>\n\n#define FALSE 0\n#define TRUE 1\n\nint main(){\n\n  printf(\"False: %d \\n True: %d\", FALSE, TRUE);\n\n  return 0;\n}\n"
            "\nBoolean Type in stdbool.h\n\n#include <stdio.h>\n#include <stdbool.h>\n\nint main(){\n\n  bool a = true;\n  bool b = false;\n\n  printf(\"True: %d\\n\", a);"
            "\n  printf(\"False: %d\", b);\n\n  return 0;\n}\n"
            "\n#include <stdio.h>\n#include <stdbool.h>\n\nint main(){\n  bool x;\n  x = 10 > 5;\n  if(x)\n    printf(\"x is True\\n\");\n  else\n    printf(\"x is False\\n\");"
            "\n  bool y;\n  int marks = 40;\n  y = marks > 50;\n  if(y)\n    printf(\"Result: Pass\\n\");\n  else\n    printf(\"Result: Fail\\n\");\n\n}"
            "\n\n#include <stdio.h>\n#include <stdlib.h>\n#include <stdbool.h>\n\nint main(void){\n\n  bool loop = true;\n  int i = 0;\n\n  while(loop){\n    i++;"
            "\n    printf(\"i: %d \\n\", i);\n\n    if (i >= 5)\n      loop = false;\n  }\n  printf(\"Loop stopped!\\n\");\n  return EXIT_SUCCESS;\n}\n"
            );
            break;
            case 14:
            puts(
            "\n- Using the const Keyword\n- Using the #define Directive\n\n## Defining a Constant Using the const Keyword ##\nconst type NAME = val;\nconst float PI = 3.14159265359;\n"
            "\n#include <stdio.h>\nint main(){\n  const float PI = 3.14159265359;\n  float radius = 5;\n  float area = PI*radius*radius;\n  printf (\"area: %f\", area);"
            "\n  return 0;\n}\n\nconst float PI = 3.14159265359;\nPI=22/7;\n\nerror: assignment of read-only variable 'PI'\n\nconst float PI;\nPI = 3.14159265359;\n"
            "\nerror: assignment of read-only variable 'PI'\n\nDefining a Constant Using the #define Directive\n#define name = value\n#define PI = 3.14159265359\n"
            "\nExample: Define a Constant Using the #define\n\n#include <stdio.h>\n#define LENGTH 10\n#define WIDTH 5\n#define NEWLINE '\\\n'\n\nint main() {"
            "\nint area;\narea = LENGTH * WIDTH;\nprintf(\"length: %d width: %d\", LENGTH, WIDTH);\nprintf(\"%c\", NEWLINE);\nprintf(\"value of area : %d\", area);"
            "\nreturn 0;\n}\n\nChanging the Value of a Constant\n\nExample: Change the Value of a Constant\n\n#include <stdio.h>\nint main(){\nconst int x = 10;"
            "\nprintf(\"Initial Value of Constant: %d\\n\", x);\n\n// y is a pointer to constant x\nint* y = &x;\n\n// assign new value\n*y = 100;\nprintf(\\\"Value of Constant after change: %d\\\", x);"
            "\nreturn 0;\n}\n"
            );
            break;
            case 15:
            puts("### Literals ###"

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

            "\nstruct marks m1 = {50, 60, 70};\n");
            break;
            case 16:
            puts("### Escape Sequence ###");
            break;
            case 17:
            puts("");
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