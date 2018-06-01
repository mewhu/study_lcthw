#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

struct Person {
    char *name;
    int age;
}

struct Person *Person_create(const char *name, int age)
{
    
}

int main(int argc, char *argv[])
{
    struct Person *joe = Person_create("Joe", 20);
    struct Person *annie = Person_create("Annie", 25);

    Person_print(joe);
    Person_print(annie);

    Person_destroy(joe);
    Person_destroy(annie);

    return 0;
}
