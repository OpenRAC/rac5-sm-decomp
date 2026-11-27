/* LEVEL_05:0x1801B0 -- advances an object's spin and submits a motion descriptor. */
typedef struct {
    float a;
    float b;
    int count;
    int flags;
    float pos[3];
    float h;
    float s20;
    float s24;
    float vecA[3];
    float vecB[3];
    int link;
} Desc;

typedef struct {
    char pad0[0x10];
    float vecB[3];
    float pad1C;
    float vecA[3];
    float pad2C;
    float pos[3];
    char pad3C[0x68 - 0x3C];
    int link;
} Obj;

extern float fmodf(float a, float b);
extern void func_1C02C8(Desc *d);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1801B0(Obj *o)
{
    Desc d;
    char *st;
    char *sp;

    st = *(char **)((char *)o + 0x54);
    sp = *(char **)((char *)o + 0x58);
    *(float *)(sp + 8) = *(float *)(sp + 8) + *(float *)(st + 0x24);
    fmodf(*(float *)(sp + 8), 6.2831855f);
    d.link = o->link;
    d.a = *(float *)(sp + 4);
    d.b = *(float *)(sp + 0);
    d.count = 10;
    d.flags = (*(short *)(st + 0x2C) << 16) | 0x800020C1;
    Copy3(d.pos, o->pos);
    Copy3(d.vecB, o->vecB);
    Copy3(d.vecA, o->vecA);
    d.s20 = *(float *)(st + 0x28);
    d.s24 = *(float *)(st + 0x20);
    d.h = *(float *)(sp + 8);
    func_1C02C8(&d);
}
