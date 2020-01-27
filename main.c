#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "game.h"



int main(void)
{
    shop_s shop={"L'bon shop",0,NULL};
    bag_s bag={NULL,100};
    item_s sword={1,"Spear",25};
    item_s shield={1,"Targon",20};
    item_s bow={1,"Bow",30};
    add_to_shop(&sword,&shop); add_to_shop(&shield,&shop); add_to_shop(&bow,&shop);
    printf("%s\n%s\n%s",shop.item_list[0]->name,shop.item_list[1]->name,shop.item_list[2]->name);
    return 0;
}
