/* LEVEL_20:0x0E7D30 -- placement copy of LEVEL_18_114188.c. */
/* LEVEL:0x114188 -- decrements one entry's counter and clamps it at zero through a by-reference maximum. */
typedef struct {
    char pad[0x18];
    int count;
} Entry;

extern Entry D_00202F10[];

static __inline__ const int *max_ref(const int *a, const int *b)
{
    return *a > *b ? a : b;
}

void func_0E7D30(int index)
{
    char *base = (char *)D_00202F10;
    char *field = base + 0x18;
    int zero = 0;
    int *count = (int *)(field + index * 0x1C);

    (*count)--;
    *count = *max_ref(count, &zero);
}
