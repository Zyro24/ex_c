#include <stdio.h>
#include <string.h>

int funcion(){
    FILE *fp = fopen("archivo1.txt","r");
    char buf[2048];
    int c;
    while(fgets(buf,2048,fp)){
        buf[strlen(buf) - 1] = '\0';
        if(!strcmp(buf,"")) {
            c++;
        } else {
            puts(buf);
        }
    }
    fclose(fp);
    printf("> c = %d\n",c);
    return 0;
}

int main(){
    funcion();
    return 0;
}
