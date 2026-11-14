/* USA LEVEL_01.REL:0x1724C8, 148-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 100.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec {
    int w0;
    unsigned int count;
    int w8;
    char pad0C[0x18 - 0xC];
    int *slots[8];
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern int *D_001F6398;
extern void func_097840(int *p);

void func_1724C8(Obj *o)
{
    Rec *r = o->rec;
    unsigned int i;

    if (r->w8 != 0) {
        for (i = 0; i < r->count; i++) {
            if (r->slots[i] != 0) {
                if (r->slots[i] == D_001F6398) {
                    D_001F6398 = 0;
                } else {
                    func_097840(r->slots[i]);
                }
            }
            r->slots[i] = 0;
        }
    }
    r->w0 = 0;
}
