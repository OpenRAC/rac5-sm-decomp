/* LEVEL_01:0x08C610 -- steps the tracked offset: state 1 clears both vectors and advances to state 2; state 2 re-samples the target position, stores the change since the last sample and scales it by the current entry's factor. */

struct Fact {
    char pad_00[0x10];
    float f_10;
};

struct Node {
    char pad_00[0x1C];
    struct Fact *p_1C;
};

struct Row {
    char pad_00[4];
    struct Node *p_04;
    char pad_08[0x34 - 0x08];
};

struct Table {
    char pad_00[4];
    struct Row *p_04;
};

struct Ctx {
    char pad_00[0x40];
    struct Table *p_40;
    unsigned char b_44;
};

struct Tgt {
    char pad_00[0x20];
    float v_20[3];
};

struct Obj {
    float v_00[3];
    float v_0C[3];
    unsigned char b_18;
};

extern int func_07CB38(struct Ctx *c);
extern int func_07CAB8(struct Ctx *c, int a);
extern struct Tgt *func_08BE70(int a);

static __inline__ void ZeroVec(float *d)
{
    d[0] = 0;
    d[1] = 0;
    d[2] = 0;
}

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void SubVec(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ void ScaleVec(float *d, float k)
{
    d[0] = d[0] * k;
    d[1] = d[1] * k;
    d[2] = d[2] * k;
}

void func_08C610(struct Obj *o, struct Ctx *c)
{
    float tmp[3];
    struct Tgt *t;
    float k;

    switch (o->b_18) {
    case 1:
        ZeroVec(o->v_0C);
        ZeroVec(o->v_00);
        o->b_18 = 2;
        break;
    case 2:
        if (func_07CB38(c) != 0 && func_07CAB8(c, 0) != 0) {
            ZeroVec(o->v_00);
        }
        t = func_08BE70(0);
        CopyVec(tmp, t->v_20);
        ZeroVec(t->v_20);
        SubVec(o->v_0C, tmp, o->v_00);
        CopyVec(o->v_00, tmp);
        k = c->p_40->p_04[c->b_44].p_04->p_1C->f_10 * 0.00125f;
        ScaleVec(o->v_0C, k);
        break;
    }
}
