#include "header.h"
#include "libft.h"

int main(void)
{
    int love = create_forty_two();
    int too_much_love = add_forty_two(love);
    int is_it_love = sub_num(too_much_love, 43);

    printf("Is '%d' love ?\n", is_it_love);
    return (0);
}