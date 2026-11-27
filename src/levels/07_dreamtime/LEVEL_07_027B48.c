/* LEVEL_07:0x027B48 -- placement copy of LEVEL_01_0277E8.c: removes a value from the 25-entry id list by shifting the tail down, shrinking the count and clearing the freed slot. */
typedef struct {
    char pad00[0x80];
    unsigned int ids[25];
    unsigned int count;
} Table;

extern Table *D_002082AC;
extern void *memcpy(void *dst, const void *src, unsigned int n);

static __inline__ void Dec(unsigned int *p)
{
    *p = *p - 1;
}

int func_027B48(unsigned int value)
{
    unsigned int i;
    unsigned int next;

    i = 0;
    do {
        next = i + 1;
        if (D_002082AC->ids[i] == value && D_002082AC->count != next) {
            memcpy(&D_002082AC->ids[i], &D_002082AC->ids[i + 1], D_002082AC->count - i - 1);
            Dec(&D_002082AC->count);
            D_002082AC->ids[D_002082AC->count] = 0xFFFFFFFF;
            return 1;
        }
        i = next;
    } while (i < 25);
    return 0;
}
