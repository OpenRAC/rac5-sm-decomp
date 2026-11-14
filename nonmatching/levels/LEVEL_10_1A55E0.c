/* USA LEVEL_10.REL:0x1A55E0, 84-byte candidate (14 November 2026).
 * Measured pinned: 1 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Slot {
    char pad0[0x84];
} Slot;

typedef struct Link {
    char pad0[4];
    Slot slots[10];
    char pad[0x588 - 4 - 10 * 0x84];
    unsigned char enabled;
} Link;

typedef struct Obj {
    char pad0[0x58];
    Link *link;
} Obj;

extern void func_108F08(Slot *s);

void func_1A55E0(Obj *o)
{
    Link *l = o->link;
    unsigned int i;

    if (l->enabled) {
        for (i = 0; i < 10; i++) {
            func_108F08(&l->slots[i]);
        }
    }
}
