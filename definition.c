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

void print_data(){
    printf("<hr>");
    printf("<h1>This is a data</h1>");
    FILE *f = fopen("~/Desktop/dev/easy_web/data.csv","r");
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