/* USA LEVEL_19.REL:0x15C280, 284-byte candidate (21 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj Obj;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Marker;

typedef struct {
    char pad_00[8];
    Obj *target_08;
    unsigned char hits_0C;
} Rec;

struct Obj {
    char pad_00[0x58];
    Rec *rec_58;
};

extern Marker *D_001BF008;
extern Marker *D_001BF00C;
extern Marker *D_001BF010;

extern void func_117C40(Obj *t);
extern void func_073660(Obj *o, Marker *m, int e, int f, int g, int h, int i, int j, float a, float b, float c, float d);

static __inline__ void Spawn(Obj *o, Marker *m)
{
    if (m != 0) {
        func_073660(o, m, 0, 0, 0, 0, 0, 1, m->f_14, m->f_18, m->f_1C, m->f_20);
    }
}

void func_15C280(Obj *o, Obj *t)
{
    Rec *rec;

    rec = o->rec_58;
    if (rec->hits_0C != 0) {
        rec->hits_0C = rec->hits_0C - 1;
    }
    func_117C40(t);
    rec->target_08 = t;
    Spawn(o, D_001BF008);
    if (rec->hits_0C != 0) {
        Spawn(o, D_001BF010);
    }
    if (rec->hits_0C == 0) {
        Spawn(o, D_001BF00C);
    }
}
