/* LEVEL_09:0x16B8C0 -- placement copy of LEVEL_03_177D00.c: when the object can produce its effect record, sends it (and optionally a second message), starts the shared effect, then unlinks the slot's attached item and releases its pooled handle. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Fx;

typedef struct {
    char pad00[0x34];
    int w34;
} Item;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    char pad4[4];
    Item *item;
} Slot;

typedef struct {
    char pad00[0x58];
    Slot *slot;
} Obj;

typedef struct {
    char pad[0x68];
} Pool;

extern Pool D_00216E78[];
extern Fx *D_0037D574;
extern void func_07EF68(float *buf, int arg);
extern void func_0EB810(unsigned int index, float *pos);
extern void func_16A650(float *buf);
extern void func_07D450(Obj *o, Fx *fx, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_091FB0(Pool *pool, unsigned int handle);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_091FB0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_16B8C0(Obj *o, int flag)
{
    float buf[4];
    Slot *s = o->slot;
    Fx *fx;

    if (((int (*)(float *buf, int arg))func_07EF68)(buf, (int)o)) {
        func_0EB810(0x1C, buf);
        if (flag) {
            func_16A650(buf);
        }
        fx = D_0037D574;
        if (fx != 0) {
            func_07D450(o, fx, fx->f14, fx->f18, fx->f1C, fx->f20, 0, 0, 0, 0, 0, 1);
        }
    }
    if (s->item != 0) {
        s->item->w34 = 0;
        s->item = 0;
    }
    Release(&D_00216E78[s->b3], &s->h0);
}
