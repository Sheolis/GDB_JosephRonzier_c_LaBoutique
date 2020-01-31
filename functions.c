#include "game.h"

void add_to_shop(item_s *item, shop_s *shop)
{
  shop->item_list = realloc(shop->item_list, (shop->size + 1) * sizeof(item_s *));
  shop->item_list[shop->size] = item;
  shop->size++;
}

void tri_shop(shop_s *shop)
{
    int v=0;
    while(v<shop->size)
    {
        int i=v;
        for (int j=0; j<shop->size; j++)
        {
            if (strcmp(shop->item_list[i]->name,shop->item_list[j]->name)<0)
            {
                swap(shop->item_list,i,j);
                j=i;
            }
        }
        v ++;
    }
}
