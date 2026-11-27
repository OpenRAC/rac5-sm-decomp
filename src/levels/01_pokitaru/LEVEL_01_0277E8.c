/* LEVEL_01:0x0277E8 -- removes a value from the 25-entry id list by shifting the tail down, shrinking the count and clearing the freed slot. */
typedef struct {
    char pad00[0x80];
    unsigned int ids[25];
    unsigned int count;
} Table;

extern Table *D_001F3FAC;
extern void *memcpy(void *dst, const void *src, unsigned int n);

static __inline__ void Dec(unsigned int *p)
{
    *p = *p - 1;
}

int func_0277E8(unsigned int value)
{
    unsigned int i;
    unsigned int next;

    i = 0;
    do {
        next = i + 1;
        if (D_001F3FAC->ids[i] == value && D_001F3FAC->count != next) {
            memcpy(&D_001F3FAC->ids[i], &D_001F3FAC->ids[i + 1], D_001F3FAC->count - i - 1);
            Dec(&D_001F3FAC->count);
            D_001F3FAC->ids[D_001F3FAC->count] = 0xFFFFFFFF;
            return 1;
        }
        i = next;
    } while (i < 25);
    return 0;
}
