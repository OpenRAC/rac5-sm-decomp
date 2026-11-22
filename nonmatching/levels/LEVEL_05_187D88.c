/* USA LEVEL_05.REL:0x187D88, 220-byte candidate (21 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x58.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x20];
    float pos20[3];
    char pad2C[4];
    float pos30[3];
    char pad3C[9];
    unsigned char state_45;
    char pad45[0x12];
    char *rec_58;
    char pad5C[8];
    unsigned int flags_64;
} Obj;

typedef struct {
    char pad00[0x38];
    char *link_38;
    char pad3C[0xC];
    signed char seen_48;
} Rec;

extern char D_00208D00[];
extern int D_002096F0;

extern int func_0270A8(void);
extern void func_039890(float f, int a, int b, float *p, float *q, Obj *o);
extern void func_079CF8(char *a0, int a1);
extern void func_1865E8(Obj *o, int a1);

void func_187D88(Obj *o)
{
    char *base;
    Rec *r;
    int idx;
    int off;
    float *row;

    base = D_00208D00;
    r = (Rec *)o->rec_58;
    idx = func_0270A8();
    off = idx * 16 + 8; off += (D_002096F0 - 1) * 64; base += off;
    func_039890(*(float *)(base + 0x20), 9, 3, o->pos30, o->pos20, o);
    o->flags_64 |= 0x200000;
    if (r->seen_48 == 0) {
        if (o->state_45 == 7 || o->state_45 == 9) {
            if (r->link_38 != 0) {
                func_079CF8(r->link_38, 1);
                r->link_38 = 0;
            }
        }
        r->seen_48 = o->state_45;
        func_1865E8(o, 5);
    }
}
