#include "header.h"

int main(void)
{
    int love = create_forty_two();
    int too_much_love = add_forty_two(love);

    printf("Love is %s/2", too_much_love);
    return (0);
}