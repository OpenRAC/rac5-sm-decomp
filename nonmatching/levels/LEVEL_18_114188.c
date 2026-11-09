/* LEVEL_18.REL:0x114188: reviewed 72-byte candidate.
 * Decrements one entry's counter and clamps it at zero through a by-reference
 * maximum.
 * pinned C with gnu-ee-trial links 68/72 bytes; first differs at +4.
 * The retail materialises the global address and adds the 0x18 field offset as
 * a separate step; the compiler folds the field offset into the address
 * constant and is one instruction shorter.
 * Retry: Recover the separate base symbol or the pointer arithmetic that keeps
 * the field offset apart.
 * No matching credit.
 */
typedef struct {
    char pad[0x18];
    int count;
} Entry;

extern Entry D_002DFD38[];

static __inline__ const int *max_ref(const int *a, const int *b)
{
    return *a > *b ? a : b;
}

void func_114188(int index)
{
    int zero = 0;
    int *count = &D_002DFD38[index].count;

    (*count)--;
    *count = *max_ref(count, &zero);
}
