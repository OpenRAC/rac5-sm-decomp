/* LEVEL_18:0x173638 -- placement copy of LEVEL_16_16E940.c: registers a slot with its owner and starts the linked effect. */
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

extern Fx *D_001BF828;
extern int func_021ED8(int h, int key);
extern void func_022110(int h, int a, int key, int b);
extern void func_022088(int h, int key);
extern void func_111C40(Ctx *c);
extern void func_072BC8(Obj *o, Fx *fx, float a, float b, float c, float d,
                        int i0, int i1, int i2, int i3, int i4, int i5);

void func_173638(Obj *o, Ctx *c)
{
    Inner *in = o->inner;
    Fx *fx;

    if (func_021ED8(in->h, c->key) == 0) {
        func_022110(in->h, 1, c->key, 1);
        func_022088(in->h, c->key);
        func_111C40(c);
        in->flags |= 1;
        if (c->owner == 0) {
            c->owner = in->h;
        }
    } else {
        in->flags |= 2;
    }
    fx = D_001BF828;
    if (fx) {
        func_072BC8(o, fx, fx->f14, fx->f18, fx->f1C, fx->f20, 0, 0, 0, 0, 0, 1);
    }
}
