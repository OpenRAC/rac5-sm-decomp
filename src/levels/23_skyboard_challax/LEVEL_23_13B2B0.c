/* LEVEL_23:0x13B2B0 -- placement copy of LEVEL_22_113EF8.c: flags queued objects that pass a view-plane test, then clears the queue. */
typedef struct { char pad0[0x10C]; unsigned char flag; } Tgt;
typedef struct { char pad0[0x30]; float x, y, z; char pad3C[0x58 - 0x3C]; Tgt *tgt; } Obj;
typedef struct { Obj *items[32]; int count; } Queue;
typedef struct { char pad0[0x60]; float pl[5][4]; } View;
extern Queue D_00363098;
extern View *D_001C9540;
extern unsigned char D_001DA950;
extern unsigned char D_001DA951;

static inline unsigned char inside(Obj *o)
{
    float *c;
    float (*pl)[4];
    View *v;

    v = D_001C9540;
    c = &o->x;
    pl = v->pl;
    do {
        if (c[0] * (*pl)[0] + c[1] * (*pl)[1] + c[2] * (*pl)[2] + (*pl)[3] < -5.0f)
            return 0;
        pl++;
    } while (pl != v->pl + 5);
    return 1;
}

void func_13B2B0(void)
{
    int i;
    Obj *o;
    Tgt *t;

    D_001DA950 = D_00363098.count;
    D_001DA951 = 0;
    for (i = 0; i < D_00363098.count; i++) {
        o = D_00363098.items[i];
        if (o) {
            t = o->tgt;
            if (inside(o)) {
                t->flag = 1;
                D_001DA951++;
            }
        }
    }
    D_00363098.count = 0;
}
