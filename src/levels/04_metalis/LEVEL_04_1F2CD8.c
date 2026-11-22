/* LEVEL_04:0x1F2CD8 -- switches an object between active and idle: updates the two state bits of its flag word, releases the effect handle when going idle, and when going active builds the spawn flags from the template and registers the effect. */

typedef struct {
    char pad_00[0xC];
    int w_0C;
    int w_10;
    int w_14;
    char pad_18[0x1C];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs_04;
    char pad_08[0x37];
    unsigned char b_3F;
} Tmpl;

typedef struct {
    unsigned short h;
    unsigned char pad_02;
    unsigned char sel;
    int arg;
} Slot;

typedef struct {
    char pad_00[8];
    Slot slot_08;
} Fx;

typedef struct {
    unsigned int pad_0 : 3;
    unsigned int b3 : 1;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int pad_6 : 26;
} Bits;

typedef union {
    int w;
    Bits f;
} Word;

typedef struct {
    char pad_00[0x40];
    Tmpl *p_40;
    unsigned char b_44;
    char pad_45[0x13];
    Fx *p_58;
    char pad_5C[8];
    Word u_64;
} Obj;

typedef struct {
    char pad_00[0x68];
} Ent;

extern Ent D_00249EF8[];

extern int func_0851A0(float *a, float *b, int c);
extern void func_098368(Ent *e, void *h, float *a, float *b, unsigned int bits);
extern void func_098950(Ent *e, unsigned int index);

void func_1F2CD8(Obj *o, int flag)
{
    Slot *m;
    Fx *f;
    Ent *e;
    int off;
    Rec *rec;
    int fl;
    int clear;
    unsigned int bits;
    float a[4];
    float b[4];
    float dx;
    float dz;
    int n;

    clear = (((o->u_64.w >> 5) ^ 1) & 1);
    o->u_64.f.b5 = flag ^ 1;
    o->u_64.f.b4 = flag ^ 1;
    fl = o->u_64.w;
    if (flag != 0) {
        if (clear == 0) {
            m = &o->p_58->slot_08;
            rec = &o->p_40->recs_04[o->b_44];
            bits = (fl & 0x1420) | 1;
            if (rec->w_0C != 0) {
                bits |= 0x80;
            }
            if (rec->w_10 != 0) {
                bits |= 0x100;
            }
            if (rec->w_14 != 0) {
                bits |= 0x200;
            }
            if (o->p_40->b_3F == 1) {
                bits |= 0x800;
            }
            if (o->u_64.f.b3) {
                bits |= 0x400;
            }
            if (func_0851A0(a, b, m->arg)) {
                dx = b[0] - a[0];
                dz = b[2] - a[2];
                if (dx > 8.0f || dz > 8.0f) {
                    n = 1;
                } else {
                    n = 0;
                }
                m->sel = n;
                func_098368(&D_00249EF8[n], m, a, b, bits);
            }
        }
    } else if (clear != 0) {
        f = o->p_58;
        off = f->slot_08.sel * 0x68;
        off += (int)D_00249EF8;
        e = (Ent *)off;
        if (f->slot_08.h != 0xFFFF) {
            func_098950(e, f->slot_08.h);
            f->slot_08.h = 0xFFFF;
        }
    }
}
