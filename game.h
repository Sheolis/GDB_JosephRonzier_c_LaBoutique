#ifndef __GAME_H_
#define __GAME_H_


int tri_shop(shop_s *shop);
int print_shop(shop_s *shop);
int print_bag(bag_s *bag);
int buy(shop_s *shop, bag_s *bag);
int get_item(item_s *item);
void add_to_shop(item_s *item)

typedef enum availability availability_e;
typedef struct shop shop_s;
typedef struct item item_s;
typedef struct bag bag_s;

enum availability { NOT_AFFORDABLE=0, AFFORDABLE=1};

//

struct shop
{
    item_s **item_list;
};

struct item
{
    int quantity;
    char* name;
    int price;
};

struct bag
{
    item_s **item_list;
    int money;
}

#endif
