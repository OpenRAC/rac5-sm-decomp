/* USA LEVEL_03.REL:0x178BB0, 108-byte candidate (14 November 2026).
 * Measured pinned: 1 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0x10];
    int link;
    char pad14[4];
    int table[20];
    char pad68[0xC];
} Rec;

typedef struct {
    char pad0[0x54];
    Rec *rec;
} Obj;

extern int D_0021F414;

void func_178BB0(Obj *o)
{
    Rec *rec = o->rec;
    int i;

    if (rec->link != 0) {
        rec->link = D_0021F414 + rec->link;
    }
    for (i = 0; i < 20; i++) {
        if (i != 0x13) {
            if (rec->table[i] != 0) {
                rec->table[i] = D_0021F414 + rec->table[i];
            }
        } else {
            *(int *)((char *)rec + 0x64) = rec->link;
            break;
        }
    }
}
