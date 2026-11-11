/* LEVEL_19:0x16F7F8 -- placement copy of LEVEL_16_16E940.c: registers a slot with its owner and starts the linked effect. */
typedef struct {
    char pad0[4];
    int h;
    char pad8[0x14];
    unsigned int flags;
} Inner;

typedef struct {
    char pad0[0x58];
    Inner *inner;
} Obj;

typedef struct {
    char pad0[0xF8];
    int key;
    char pad_fc[0x9A8 - 0xFC];
    int owner;
} Ctx;

typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Fx;

extern Fx *D_001BF4D0;
extern int func_0224D0(int h, int key);
extern void func_022708(int h, int a, int key, int b);
extern void func_022680(int h, int key);
extern void func_113630(Ctx *c);
extern void func_073660(Obj *o, Fx *fx, float a, float b, float c, float d,
                        int i0, int i1, int i2, int i3, int i4, int i5);

void func_16F7F8(Obj *o, Ctx *c)
{
    Inner *in = o->inner;
    Fx *fx;

    if (func_0224D0(in->h, c->key) == 0) {
        func_022708(in->h, 1, c->key, 1);
        func_022680(in->h, c->key);
        func_113630(c);
        in->flags |= 1;
        if (c->owner == 0) {
            c->owner = in->h;
        }
    } else {
        in->flags |= 2;
    }
    fx = D_001BF4D0;
    if (fx) {
        func_073660(o, fx, fx->f14, fx->f18, fx->f1C, fx->f20, 0, 0, 0, 0, 0, 1);
    }
}
