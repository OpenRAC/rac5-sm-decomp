/* LEVEL_22:0x113EF8 -- flags queued objects that pass a view-plane test, then clears the queue. */
typedef struct { char pad0[0x10C]; unsigned char flag; } Tgt;
typedef struct { char pad0[0x30]; float x, y, z; char pad3C[0x58 - 0x3C]; Tgt *tgt; } Obj;
typedef struct { Obj *items[32]; int count; } Queue;
typedef struct { char pad0[0x60]; float pl[5][4]; } View;
extern Queue D_002E7480;
extern View *D_001554C0;
extern unsigned char D_00166458;
extern unsigned char D_00166459;

static inline unsigned char inside(Obj *o)
{
    float *c;
    float (*pl)[4];
    View *v;

    v = D_001554C0;
    c = &o->x;
    pl = v->pl;
    do {
        if (c[0] * (*pl)[0] + c[1] * (*pl)[1] + c[2] * (*pl)[2] + (*pl)[3] < -5.0f)
            return 0;
        pl++;
    } while (pl != v->pl + 5);
    return 1;
}

void func_113EF8(void)
{
    int i;
    Obj *o;
    Tgt *t;

    D_00166458 = D_002E7480.count;
    D_00166459 = 0;
    for (i = 0; i < D_002E7480.count; i++) {
        o = D_002E7480.items[i];
        if (o) {
            t = o->tgt;
            if (inside(o)) {
                t->flag = 1;
                D_00166459++;
            }
        }
    }
    D_002E7480.count = 0;
}
