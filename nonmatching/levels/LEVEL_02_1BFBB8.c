/* USA LEVEL_02.REL:0x1BFBB8, 252-byte candidate (21 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[8];
    unsigned short flags_08;
    char pad_0A[6];
} Entry;

typedef struct {
    char pad_00[0x64];
    Entry *entries_64;
} Slot;

typedef struct {
    unsigned short id_00;
    unsigned char kind_02;
    unsigned char slot_03;
} Handle;

typedef struct {
    char pad_00[0x44];
    Handle h_44;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *rec_58;
} Obj;

extern Slot D_00246BF8[];
extern int func_027530(float *a, float *b);

int func_1BFBB8(Obj *o, float *p, float *q)
{
    float a[4];
    float b[4];
    Rec *rec;
    Handle *h;
    int r;

    a[0] = p[0];
    a[1] = p[1] + 0.5f;
    a[2] = p[2];
    b[0] = q[0];
    b[1] = 0.0f;
    b[2] = q[1];
    rec = o->rec_58;
    h = &rec->h_44;
    if (rec->h_44.id_00 != 0xFFFF) {
        D_00246BF8[h->slot_03].entries_64[rec->h_44.id_00].flags_08 |= 8;
    }
    r = func_027530(a, b);
    if (rec->h_44.id_00 != 0xFFFF) {
        D_00246BF8[h->slot_03].entries_64[rec->h_44.id_00].flags_08 &= ~8;
    }
    return r;
}
