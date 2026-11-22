/* USA LEVEL_02.REL:0x1B7200, 560-byte candidate (22 November 2026).
 * Measured pinned -fno-gcse: 10 differing words; first difference at 0x70.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj Obj;
typedef struct Rec Rec;

typedef struct {
    char pad0[4];
    char *ents;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Model;

typedef struct {
    char pad0[0xC];
    int w0C;
    int w10;
    int w14;
} Ent;

struct Rec {
    Rec *next;
    char pad4[0xB];
    unsigned char bF;
    Obj *w10;
    Rec **prev;
};

typedef struct {
    char pad[0x68];
} Pool;

struct Obj {
    char pad0[0x40];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[2];
    char pad48[12];
    void *cfg;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

extern char D_0023D938[];
extern Pool D_00246BF8[];

extern int func_1B6650(Obj *o);
extern int func_031758(float f, void *cfg, Obj *o, char *data);
extern int func_0833A0(Obj *o, int z);
extern void func_1B5FC0(Obj *o, int arg, int mode);
extern int func_088610(float *lo, float *hi, Obj *o);
extern void func_09BC40(Pool *pool, Rec *rec, float *lo, float *hi, unsigned int flags);

static __inline__ void Unlink(Rec *n)
{
    if (n->prev != 0) {
        *n->prev = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
}

void func_1B7200(Obj *o)
{
    Rec *rec;
    Model *model;
    Ent *ent;
    unsigned int f;
    unsigned int alt;
    unsigned int base;
    unsigned int fl;
    unsigned int idx;
    int st;
    int r1;
    int mode;
    int big;
    float dx;
    float dz;
    float *lp;
    int idx2;
    float lo[4];
    float hi[4];

    st = func_1B6650(o);
    if (st == 10 || st == 7) {
        r1 = func_031758(0.9f, o->cfg, o, D_0023D938);
        if (func_0833A0(o, 0) != 0) {
            if (r1 != 0) {
                mode = 7;
                if (st == 10) {
                    mode = 10;
                }
                func_1B5FC0(o, o->b45, mode);
            } else {
                func_1B5FC0(o, o->b45, 0xC);
            }
        }
        idx = o->b44;
        model = o->model;
        ent = (Ent *)(model->ents + idx * 0x34);
        base = o->flags & 0x1420;
        alt = base | 1;
        f = base | 0x81;
        if (ent->w0C == 0) {
            f = alt;
        }
        rec = o->rec;
        if (ent->w10 != 0) {
            f |= 0x100;
        }
        if (ent->w14 != 0) {
            f |= 0x200;
        }
        if (model->b3F == 1) {
            f |= 0x800;
        }
        if (((unsigned int)o->flags >> 3) & 1) {
            f |= 0x400;
        }
        fl = f | 0x10;
        if (func_088610(lo, hi, rec->w10) != 0) {
            dx = hi[0] - lo[0];
            dz = hi[2] - lo[2];
            if (dx > 8.0f || dz > 8.0f) {
                big = 1;
            } else {
                big = 0;
            }
            lp = lo;
            idx2 = big;
            Unlink(rec);
            rec->bF = big;
            func_09BC40(&D_00246BF8[idx2], rec, lp, hi, fl);
        } else {
            Unlink(rec);
        }
    } else {
        if (func_0833A0(o, 0) != 0) {
            func_1B5FC0(o, o->b45, st & 0xFF);
        }
    }
}
