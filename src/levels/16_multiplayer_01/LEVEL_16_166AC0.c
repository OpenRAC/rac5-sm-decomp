/* LEVEL_16:0x166AC0 -- scans the record table for a nearby active entry and either hands it to the attach helper (returning 1) or marks the state flags and gives up. */

struct Ent {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x54 - 0x3C];
    int *p_54;
    char pad_58[0x64 - 0x58];
    unsigned int w_64;
    char pad_68[0x80 - 0x68];
};

struct Tgt {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0xFC - 0x3C];
    int w_FC;
};

struct St {
    struct Tgt *t_00;
    char pad_04[0x40 - 0x04];
    unsigned int w_40;
};

struct Obj {
    char pad_00[0x58];
    struct St *st_58;
};

extern struct Ent *D_001BE004;
extern struct Ent *D_001BE008;

extern int func_112E38(void);
extern int func_168B80(struct Ent *e);
extern void func_166C20(struct Obj *o, struct Ent *e);

static __inline__ float DistSq(float *a, float *b)
{
    float dx, dy, dz;

    dx = a[0] - b[0];
    dy = a[1] - b[1];
    dz = a[2] - b[2];
    return dx * dx + dy * dy + dz * dz;
}

int func_166AC0(struct Obj *o)
{
    struct St *st;
    struct Tgt *t;
    struct Ent *e;

    st = o->st_58;
    t = st->t_00;
    if (t == 0) {
        return 0;
    }
    for (e = D_001BE004; e != D_001BE008; e++) {
        if (e->w_64 & 1) {
            if (DistSq(e->pos_30, t->pos_30) < 6.25f) {
                if (func_112E38() != 0 || *e->p_54 == t->w_FC) {
                    if (func_168B80(e) == 0) {
                        func_166C20(o, e);
                        return 1;
                    }
                    st->w_40 |= 2;
                    break;
                } else {
                    st->w_40 |= 4;
                }
            }
        }
    }
    return 0;
}
