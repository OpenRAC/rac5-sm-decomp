/* LEVEL_05:0x1631F0 -- placement copy of LEVEL_01_16F850.c: advances a state object and credits its owner's counter. */
typedef struct Own { char pad0[0x58]; struct OwnData *data; } Own;
typedef struct OwnData { char pad0[0x15C]; int cnt; } OwnData;
typedef struct Sub { char pad0[0xC]; float f0C; float f10; Own *f14; } Sub;
typedef struct Self { char pad0[0x45]; unsigned char f45; char pad46[0x54 - 0x46]; Sub *sub; struct SelfData *data; } Self;
typedef struct SelfData { char pad0[0x60]; unsigned char f60; } SelfData;
extern float fabsf(float x);
static inline int Tiny(float x)
{
    return fabsf(x) <= 9.999999747378752e-06f;
}
extern void func_163310(Self *o);
extern void func_163378(Self *o);

void func_1631F0(Self *o, int a)
{
    Sub *s = o->sub;
    int hit = 0;
    Own *ow;

    if (a != 0 || s->f0C <= 0.0f) {
        if ((unsigned char)Tiny(s->f10)) {
            func_163310(o);
        } else {
            func_163378(o);
            hit = 1;
        }
    } else {
        o->f45 = 1;
        hit = 1;
    }
    ow = s->f14;
    if (hit && ow) {
        SelfData *sd = o->data;
        ow->data->cnt += sd->f60;
    }
}
