#include "game.h"



int main()
{
    char move[1024];

    shop_s shop={"L'bon shop", 0, NULL};
    bag_s bag={100, 0, NULL};

    item_s sword= {"Spear", 25};
    item_s shield={"Targon", 20};
    item_s bow=   {"Bow", 30};
    pair_s sword_shop= {5,&sword};
    pair_s shield_shop= {5, &shield};
    pair_s bow_shop= {5, &bow};
    add_to_shop(shield_shop, &shop);
    add_to_shop(bow_shop, &shop);
    add_to_shop(sword_shop, &shop);
    tri_shop(&shop);

    printf("%s\n%s\n%s\n%d\n",shop.pair_list[0].item->name,shop.pair_list[1].item->name,shop.pair_list[2].item->name,shop.size);

    do
    {
        print_shop(&shop);
        print_bag(&bag);
        printf("Leave ? (y,n)\n");
        scanf("%s",move);
        printf("%d\n", bag.size);
        if (move[0]=='n'){ buy_item(&bag, &shop); }

    } while (move[0]=='n') ;


    return 0;
}
