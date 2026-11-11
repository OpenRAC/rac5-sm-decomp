/* LEVEL_15:0x065040 -- placement copy of LEVEL_01_080560.c: scans a 0x80-byte record table for a matching key with bit 0 set. */
typedef struct { char pad[0x44]; char *items; unsigned int count; } Table;
extern Table *D_0015B710;

int func_065040(int value)
{
    unsigned int count = D_0015B710->count;
    unsigned int index;
    char *item;
    if (count != 0) {
        index = 0;
        item = D_0015B710->items;
        do {
            index++;
            if (*(int *)(item + 0x5c) == value &&
                (*(unsigned int *)(item + 100) & 1) != 0)
                return (int)item;
            item += 0x80;
        } while (index < count);
    }
    return 0;
}
