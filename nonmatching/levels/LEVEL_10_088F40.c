/* USA LEVEL_10.REL:0x088F40, 52-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 3 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj {
    char pad00[0x14];
    unsigned char b14;
};

int func_088F40(struct Obj *o)
{
    if (((o->b14 ^ 1) & 1) != 0 || (*(int *)((char *)o + 0x14) & 4) != 0) {
        return 1;
    }
    return 0;
}
