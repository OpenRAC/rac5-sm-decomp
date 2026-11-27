/* LEVEL_22:0x022178 -- placement copy of LEVEL_01_0277E8.c: removes a value from the 25-entry id list by shifting the tail down, shrinking the count and clearing the freed slot. */
typedef struct {
    char pad00[0x80];
    unsigned int ids[25];
    unsigned int count;
} Table;

extern Table *D_0015332C;
extern void *memcpy(void *dst, const void *src, unsigned int n);

static __inline__ void Dec(unsigned int *p)
{
    *p = *p - 1;
}

int func_022178(unsigned int value)
{
    unsigned int i;
    unsigned int next;

    i = 0;
    do {
        next = i + 1;
        if (D_0015332C->ids[i] == value && D_0015332C->count != next) {
            memcpy(&D_0015332C->ids[i], &D_0015332C->ids[i + 1], D_0015332C->count - i - 1);
            Dec(&D_0015332C->count);
            D_0015332C->ids[D_0015332C->count] = 0xFFFFFFFF;
            return 1;
        }
        i = next;
    } while (i < 25);
    return 0;
}
