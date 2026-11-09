/* LEVEL_16.REL:0x16E940: reviewed 220-byte candidate, held for ABI review.
 * Registers a slot with its owner and starts the linked effect.
 * pinned C with gnu-ee-trial links 220/220 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_022890 returning int with (int, int), but the accepted
 * LEVEL_16_022890.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern Fx *D_001BE2A0;
extern int func_022890(int h, int key);
extern void func_022AC8(int h, int a, int key, int b);
extern void func_022A40(int h, int key);
extern void func_112E88(Ctx *c);
extern void func_073518(Obj *o, Fx *fx, float a, float b, float c, float d,
                        int i0, int i1, int i2, int i3, int i4, int i5);

void func_16E940(Obj *o, Ctx *c)
{
    Inner *in = o->inner;
    Fx *fx;

    if (func_022890(in->h, c->key) == 0) {
        func_022AC8(in->h, 1, c->key, 1);
        func_022A40(in->h, c->key);
        func_112E88(c);
        in->flags |= 1;
        if (c->owner == 0) {
            c->owner = in->h;
        }
    } else {
        in->flags |= 2;
    }
    fx = D_001BE2A0;
    if (fx) {
        func_073518(o, fx, fx->f14, fx->f18, fx->f1C, fx->f20, 0, 0, 0, 0, 0, 1);
    }
}
