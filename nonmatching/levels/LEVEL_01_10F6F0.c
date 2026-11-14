/* USA LEVEL_01.REL:0x10F6F0, 140-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 56.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Arena {
    char pad_00[8];
    unsigned int cursor;
    unsigned int last;
    unsigned int remaining;
    char pad_14[4];
    int count;
} Arena;

extern Arena D_00331738;
extern void func_10F630(int arg);

unsigned int func_10F6F0(unsigned int align, unsigned int size, int arg)
{
    Arena *a = &D_00331738;
    unsigned int remaining = a->remaining;
    unsigned int cursor;
    unsigned int start;

    if (size + align < remaining) {
        cursor = a->cursor;
        start = (cursor + align - 1) & -align;
        a->count = a->count + 1;
        a->cursor = start + size;
        a->last = start;
        a->remaining = remaining - (start - cursor + size);
        func_10F630(arg);
        return start;
    }
    return 0;
}
