#include "config.h"

void demo(){
    printf("<center>");
    FILE *f = fopen("/etc/index.html","r");
    // FILE *f = fopen("/etc/passwd","r");
    char l[256];
    if(f == NULL){
        printf("<h1>Error</h1>");
    }
    else{
        while (fgets(l,256,f) != NULL)
            printf("%s",l);
        fclose(f);
    }
    
    printf("</center>");
}
void style(){
    FILE *f = fopen("/etc/style.css","r");
    char l[256];
    if(f == NULL){
        printf("<h1>Error</h1>");
    }
    else{
        while (fgets(l,256,f) != NULL)
            printf("%s",l);
        fclose(f);
    }
}