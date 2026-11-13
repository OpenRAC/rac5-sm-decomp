/* LEVEL_08:0x1F7FF8 -- placement copy of LEVEL_02_1DB6A0.c. */
/* Removes the first matching pointer by moving the final entry into its slot.
 * Pinned isolated links reproduce all five 96-byte placements. */
typedef struct List {
    char pad_00[0x45];
    unsigned char count;
    char pad_46[0xE];
    void **items;
} List;

void func_1F7FF8(List *list, void *needle)
{
    unsigned int i;
    void **items = list->items;
    for (i = 0; i < list->count; i++) {
        if (items[i] == needle) {
            void **last;
            list->count--;
            last = items + list->count;
            items[i] = *last;
            return;
        }
    }
}
