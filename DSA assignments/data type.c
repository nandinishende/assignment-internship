//data type refers to the type of value a variable has and the way the computer interprets it.each data types has a different size. youve studied 5 different data types and sizes of the data types:integer:4bytes long:8bytes float:4bytes double:8bytes char:1byte float:4bytes    double:8bytes 
# include <stdio.h>
int main() {
    int a;
    long b;
    float c;
    double d;
    char e;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of long: %zu bytes\n", sizeof(b));
    printf("Size of float: %zu bytes\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of char: %zu byte\n", sizeof(e));

    return 0;
}