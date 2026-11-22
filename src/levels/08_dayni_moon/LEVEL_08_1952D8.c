/* LEVEL_08:0x1952D8 -- placement copy of LEVEL_03_177D00.c: when the object can produce its effect record, sends it (and optionally a second message), starts the shared effect, then unlinks the slot's attached item and releases its pooled handle. */
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

extern Pool D_0027E978[];
extern Fx *D_003E6C84;
extern int func_08A488(float *buf, int arg);
extern void func_0FB378(unsigned int index, float *pos);
extern void func_194068(float *buf);
extern void func_088940(Obj *o, Fx *fx, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_09D778(Pool *pool, unsigned int handle);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09D778(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1952D8(Obj *o, int flag)
{
    float buf[4];
    Slot *s = o->slot;
    Fx *fx;

    if (func_08A488(buf, (int)o)) {
        func_0FB378(0x1C, buf);
        if (flag) {
            func_194068(buf);
        }
        fx = D_003E6C84;
        if (fx != 0) {
            func_088940(o, fx, fx->f14, fx->f18, fx->f1C, fx->f20, 0, 0, 0, 0, 0, 1);
        }
    }
    if (s->item != 0) {
        s->item->w34 = 0;
        s->item = 0;
    }
    Release(&D_0027E978[s->b3], &s->h0);
}
