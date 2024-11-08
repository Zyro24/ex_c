#include <stdio.h>

/*
Hacer un programa que me ensene a programar en C
*/

int main(){
    int n = -1, r = 0;
    do {
        puts("\n### MENU ###\n1. Compilation Steps\n2. Comments\n3. Tokens\n4. Keywords\n5. Identifiers\n6. User Input\n7. Basic Syntax\n8. Data Types"
        "\n9. Variables"
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
            puts("### Variables ###");
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