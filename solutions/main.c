#include <stdio.h>
#include "flowchart_impl.h"


int main() {


    int x;

    printf("Please select a value for x / Bitte geben Sie ein Wert für x ein \n :");

    scanf("%i" , &x);

    flowchart_impl(x);


return 0;

}
