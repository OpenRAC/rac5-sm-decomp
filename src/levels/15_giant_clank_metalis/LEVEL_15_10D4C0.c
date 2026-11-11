/* LEVEL_15:0x10D4C0 -- runs the item helper over the three 0x30-byte items
   at 0x244. */
typedef struct {
    char pad[0x30];
} Item;

typedef struct {
    char pad[0x244];
    Item items[3];
} Obj;

extern void func_0FE808(Item *item);

void func_10D4C0(Obj *obj)
{
    int i;

    for (i = 0; i < 3; i++)
        func_0FE808(&obj->items[i]);
}
