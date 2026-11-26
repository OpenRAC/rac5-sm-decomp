/* LEVEL_07:0x1985C8 -- floor switch: while idle and the plate is within reach, marks both ends, activates once (hides itself, shows the linked object, triggers the plate and plays its effect) and starts both movers; otherwise colours its two indicator lights for the idle or active state. */
typedef struct {
    char pad_00[0x24];
    int w_24;
} Cls;

typedef struct {
    char pad_00[0x30];
    float pos_30[4];
    Cls *cls_40;
    char pad_44[1];
    unsigned char state_45;
    char pad_46[0xE];
    struct Info *info_54;
    char pad_58[4];
    unsigned int col_5C;
    char pad_60[4];
    int flags_64;
} Obj;

struct Info {
    Obj *mover_00;
    Obj *lightA_04;
    Obj *lightB_08;
    Obj *plate_0C;
    Obj *hide_10;
};

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Fx;

extern Fx *D_0021CFA4;

extern void func_0F0730(unsigned int index, float *pos);
extern void func_181998(Obj *o);
extern void func_082B38(Obj *o, Fx *fx, int a, int b, int c, int d, int e, int f, float f0, float f1, float f2, float f3);
extern void func_07E7F0(Obj *o, int mode);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1985C8(Obj *o)
{
    struct Info *in;
    Obj *a;
    Obj *b;
    Obj *t;
    Fx *fx;
    float *tp;
    float p[4];
    float dx;
    float dz;
    unsigned int ca;
    unsigned int cb;

    ca = 0xFF0000FF;
    cb = 0xFF00FF00;
    in = o->info_54;
    a = in->lightA_04;
    b = in->lightB_08;
    if (o->state_45 == 0) {
        cb = 0xFF003300;
        tp = in->plate_0C->pos_30;
        dx = tp[0] - o->pos_30[0];
        dz = tp[2] - o->pos_30[2];
        if (dx * dx + dz * dz <= 1.0f) {
            Copy3(p, tp);
            func_0F0730(0, p);
            p[1] = p[1] + 1.0f;
            func_0F0730(0, p);
            o->flags_64 = o->flags_64 | 0x20;
            in->hide_10->flags_64 = in->hide_10->flags_64 & ~0x20;
            o->state_45 = 1;
            t = in->plate_0C;
            if (t->cls_40->w_24 == 0x69657FF4) {
                func_181998(t);
                t->flags_64 = t->flags_64 | 0x20;
            }
            fx = D_0021CFA4;
            if (fx != 0) {
                func_082B38(o, fx, 0, 0, 0, 0, 0, 1, fx->f_14, fx->f_18, fx->f_1C, fx->f_20);
            }
            func_07E7F0(in->mover_00, 1);
            func_07E7F0(o, 1);
            return;
        }
    } else {
        ca = 0xFF000033;
    }
    if (a != 0) {
        a->col_5C = ca;
    }
    if (b != 0) {
        b->col_5C = cb;
    }
}
