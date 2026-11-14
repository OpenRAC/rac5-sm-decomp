/* USA LEVEL_15.REL:0x029498, 56-byte candidate (14 November 2026).
 * Measured pinned: 4 differing words; first difference at 24.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj {
    char pad0[4];
    unsigned int type;
} Obj;

int func_029498(Obj *o)
{
    switch (o->type) {
    case 0x10000001:
        return 1;
    case 0x10000004:
        return 0;
    default:
        return 0;
    }
}
