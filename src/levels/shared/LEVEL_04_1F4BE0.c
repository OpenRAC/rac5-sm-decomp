/* LEVEL_04:0x1F4BE0 -- appends an entry and its kind to an eight-entry
   list, or overwrites the first entry when the list is full. */
typedef struct {
    void *items[8];
    unsigned char kinds[8];
    unsigned char count;
} List;

void func_1F4BE0(List *list, void *item, int kind)
{
    if (list->count < 8) {
        list->items[list->count] = item;
        list->kinds[list->count] = kind;
        list->count++;
    } else {
        list->items[0] = item;
        list->kinds[0] = kind;
    }
}
