#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "game.h"

void add_to_shop(item_s *item, shop_s *shop)
{
  shop->item_list = realloc(shop->item_list, (shop->size + 1) * sizeof(item_s *));
  shop->item_list[shop->size] = item;
  shop->size++;
}

void tri_shop(shop_s *shop)
{

}
