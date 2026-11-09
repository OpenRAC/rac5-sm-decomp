/* LEVEL_01:0x15C100 -- drops the state counter, tests whether the tracked volume is reachable and near, then reports the matching event code. */

struct Ctl {
    char pad_00[0x2C];
    void *p_2C;
    char pad_30[0x38 - 0x30];
    int w_38;
    char pad_3C[0x48 - 0x3C];
    void *p_48;
};

struct St {
    char pad_00[0x60];
    int w_60;
    char pad_64[0x80 - 0x64];
    unsigned char b_80;
};

struct Obj {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x45 - 0x3C];
    unsigned char b_45;
    char pad_46[0x54 - 0x46];
    struct Ctl *p_54;
    struct St *p_58;
};

extern char D_0021E9C8[];

extern void func_15D3D0(int *buf);
extern int func_084708(void *p, int *buf);
extern void func_01A2A0(float *v);
extern int func_16CB60(int a, int b, char *c);
extern void func_15C260(struct Obj *o, int a, int b);

static __inline__ void SubVec(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ unsigned char IsNear(struct Obj *o)
{
    int buf[4];
    float v[3];
    float d[3];
    float dist2;
    struct Ctl *c;

    c = o->p_54;
    if (c->p_2C == 0) {
        return 0;
    }
    func_15D3D0(buf);
    if (func_084708(c->p_2C, buf) == 0) {
        return 0;
    }
    if (c->p_48 != 0 && func_084708(c->p_48, buf) != 0) {
        return 0;
    }
    func_01A2A0(v);
    SubVec(d, v, o->pos_30);
    dist2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (dist2 <= 625.0f) {
        return 1;
    }
    return 0;
}

void func_15C100(struct Obj *o)
{
    struct St *s;
    struct Ctl *c;

    s = o->p_58;
    c = o->p_54;
    s->w_60--;
    if (IsNear(o)) {
        func_15C260(o, o->b_45, 5);
    } else if (s->w_60 <= 0) {
        func_15C260(o, o->b_45, 4);
    } else if (func_16CB60(c->w_38, s->b_80, D_0021E9C8) != 0) {
        func_15C260(o, o->b_45, 4);
    }
}
