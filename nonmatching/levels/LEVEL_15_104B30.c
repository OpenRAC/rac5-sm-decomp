/* USA LEVEL_15.REL:0x104B30, 192-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 20 differing words; first difference at 76.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad[0x30];
} Slot;

typedef struct {
    char pad000[0x278];
    Slot slots[8];
    char pad3F8[0x430 - 0x3F8];
    char *table;
} Obj;

extern void func_0FE850(Slot *a0, void *a1, float p0, float p1);
extern void func_0FE8B8(void *a0);

void func_104B30(Obj *o, int mask, float a, float b)
{
    Slot *p = o->slots;
    Slot *q = o->slots;
    int off = 0x60;
    int i;

    for (i = 0; i < 8; i++) {
        if ((mask >> i) & 1)
            func_0FE850(q, o->table + off, a, b);
        else
            func_0FE8B8(p);
        p++;
        q++;
        off += 0xC;
    }
}
