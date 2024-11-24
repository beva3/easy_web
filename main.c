#include "config.h"

int main(){
    printf("Content-Type:text/html\n\n");
    printf("<html><head>");
    printf("<style>");
        style();
    printf("</style>");
    printf("</head><body>");
    // printf("<h1>Hello world !!!</h1>");
    demo();
    print_data();
    printf("</body></html>");
    return 0;
}