#include "header.h"

int main(void)
{
    int love = create_forty_two();
    int too_much_love = add_forty_two(love);

    printf("Love is %d/2\n", too_much_love);
    return (0);
}