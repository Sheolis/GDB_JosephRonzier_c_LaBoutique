#include "game.h"



int main()
{
    char moove;

    shop_s shop={"L'bon shop", 0, NULL};
    bag_s bag={100, 0, NULL};

    item_s sword= {1, "Spear", 25};
    item_s shield={1, "Targon", 20};
    item_s bow=   {1, "Bow", 30};
    item_s baw=   {1, "Baw", 30};
    item_s bew=   {1, "Bew", 30};
    item_s biw=   {1, "Biw", 30};
    add_to_shop(&shield,&shop);
    add_to_shop(&bow,&shop);
    add_to_shop(&sword,&shop);
    tri_shop(&shop);

    printf("%s\n%s\n%s\n%d\n",shop.item_list[0]->name,shop.item_list[1]->name,shop.item_list[2]->name,shop.size);

    do
    {
        print_shop(&shop);
        print_bag(&bag);
        printf("Leave ? (y,n)\n");
        scanf("%c",&moove);
        if (moove=='n'){ buy_item(&bag, &shop); }

    } while (moove=='n') ;


    return 0;
}
